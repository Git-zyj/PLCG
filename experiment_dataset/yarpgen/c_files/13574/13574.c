/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_8 ? var_2 : var_11)) | (((~((3 ? 65523 : -9))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = (((arr_0 [i_0] [i_0]) ? ((((arr_0 [i_0] [i_0]) % 1))) : var_19));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (arr_4 [i_0]);
            var_23 = (min(var_23, ((max((min((arr_5 [i_0] [i_0]), (arr_5 [9] [i_0]))), var_0)))));
            var_24 |= 27966;
        }
        var_25 |= (max(1, -16));
        arr_8 [i_0] = -17;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((((((0 << (9658428359792059780 - 9658428359792059767))))) ? (arr_6 [i_2] [i_2]) : (((-((424744327 - (arr_5 [i_2] [i_2])))))))))));
        var_27 = ((((min(var_17, 0))) ? 8 : 13579));
        var_28 = (arr_1 [i_2]);
        var_29 += (arr_3 [i_2] [i_2]);
    }
    var_30 = (min(var_30, ((((((-13 ? var_1 : -13559))) ? ((max((min(-1112903157, -5)), 736500131))) : var_19)))));
    var_31 = var_12;
    #pragma endscop
}
