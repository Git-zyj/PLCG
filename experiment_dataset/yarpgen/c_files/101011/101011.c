/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(var_20, (((14 + (3673194768 % 3818330692))))));
        var_21 = min((!-1), (((arr_2 [i_0] [i_0 - 3]) ? (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 55282)) : (var_2 >= 1170842752))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [10] [i_0] = -55279;
            arr_6 [i_0 - 4] [i_1] [i_0] = ((-1893327302 & (arr_3 [i_1] [i_1])));
            var_22 = ((+(max((max((arr_2 [i_0] [i_0]), var_16)), (arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_23 = 49415;
            arr_11 [i_0] [i_2] = var_5;
        }
        var_24 = ((var_2 ? ((((~819129444051974912) ? ((-(arr_8 [i_0] [i_0] [i_0]))) : ((((!(arr_3 [i_0 + 3] [i_0])))))))) : (((((-1182345887 ? 59 : 7855924626247391169))) - (((arr_3 [i_0] [i_0 + 1]) ? (arr_1 [15] [i_0]) : (arr_0 [i_0])))))));
    }
    var_25 = (max(var_25, (((var_19 ? (var_8 && var_6) : (7855924626247391169 || 0))))));
    var_26 *= 2304085627;
    #pragma endscop
}
