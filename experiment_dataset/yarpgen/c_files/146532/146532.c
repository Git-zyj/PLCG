/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((14495225139753958517 - ((var_1 ? (min(var_11, var_1)) : var_5))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = ((((arr_4 [i_1]) < (arr_1 [i_0]))));
            var_18 = (11238 == 1);
            var_19 = var_1;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 = var_9;
            var_21 = var_3;
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 |= (((((arr_5 [i_0 - 1] [i_0 + 1]) >= (arr_5 [i_0 - 1] [i_0 + 1]))) ? ((((((arr_5 [i_0 - 1] [i_0 + 1]) + 2147483647)) << (((arr_2 [i_0 - 1] [i_0 + 1]) - 21602))))) : (arr_5 [i_0 - 1] [i_0 + 1])));
            var_23 = (max(var_23, ((min((arr_0 [i_0 + 2]), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_24 = ((15 ? (((arr_3 [4] [4] [3]) ? 15222 : ((max(-1317581653, 1))))) : 4670000903936336229));
            var_25 = ((21877 ? (((min((arr_2 [i_0 - 1] [i_4]), var_3)))) : ((var_13 << (((arr_10 [i_0 + 1]) + 5481729437655005604))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_26 = ((arr_7 [i_0] [i_5]) ? 13776743169773215401 : var_5);
            var_27 = (var_2 == 4670000903936336235);
            var_28 = var_14;
        }
    }
    var_29 = var_12;
    #pragma endscop
}
