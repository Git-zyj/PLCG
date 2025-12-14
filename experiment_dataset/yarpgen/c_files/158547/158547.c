/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_3;
    var_11 = -4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((51 ? (arr_1 [i_0] [i_0]) : (var_4 | var_1)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = ((~(arr_0 [i_0])));
            var_14 += var_0;
            var_15 = (1 ? (arr_1 [i_0] [i_0]) : 51);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = ((var_1 | (5 == -13)));
            var_17 = ((var_3 ? var_0 : 1));
            arr_8 [1] [i_0] = (!8899980277284310510);
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_18 = var_5;
            arr_13 [i_0] [i_0] = (4981988101276068729 ? var_3 : 4);
            var_19 |= -2146181825241433541;
            arr_14 [i_0] = ((((246736383944659845 > (arr_7 [i_3] [i_3]))) ? var_2 : (arr_5 [i_3 + 1])));
        }
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 &= ((-31778 ? -13 : 7837714677430031442));
                    arr_26 [i_4] = ((arr_25 [i_4] [10] [i_4] [10]) ? ((min((arr_21 [i_5] [i_6]), var_5))) : (((((13 ? 13097 : 2349909792))) ? -13 : 65534)));
                    var_21 -= ((((((var_3 || 16646144) ? var_9 : (!129)))) ? ((8484194646192546611 ? 138 : (~var_5))) : var_4));
                    arr_27 [10] [i_5 - 2] [i_4] = (i_4 % 2 == 0) ? (((((((max(var_0, 32742))) ? (-7837714677430031443 && var_5) : var_2)) << ((((~(((arr_9 [i_4] [i_4]) & var_2)))) - 4294967272))))) : (((((((max(var_0, 32742))) ? (-7837714677430031443 && var_5) : var_2)) << ((((((~(((arr_9 [i_4] [i_4]) & var_2)))) - 4294967272)) - 4294967219)))));
                }
            }
        }
        var_22 = ((((246736383944659825 ? (176 + var_9) : (var_6 | var_8))) / (((((~(arr_16 [i_4]))) / var_5)))));
    }
    #pragma endscop
}
