/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_7) ? var_11 : ((var_7 ? (var_8 / 55284) : var_11))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [23] [i_0] = -1;
        var_13 = -32764;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_14 = (((!1) ^ ((((min(1628881271, 234))) ? 1628881282 : (-1053 && -32767)))));
            var_15 = 4467570830351532032;
            var_16 = (max(var_16, var_1));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_17 &= (!var_6);
            var_18 = (arr_0 [i_0]);
            var_19 = (min(var_19, (((var_7 - (((max(3858, -2045359045)))))))));
        }
    }
    var_20 = ((((((255 ? 112 : 1)))) ? (!var_5) : (((var_6 ? var_4 : var_6)))));
    #pragma endscop
}
