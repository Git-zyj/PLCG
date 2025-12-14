/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_0] [i_1]);
                var_12 = ((-var_9 >= (((arr_4 [i_0] [13]) ? ((min(224, 1))) : 7713125650184684896))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_2 - 1] [i_0]);
                            var_13 -= (max(((max((((var_0 ? var_2 : 31))), ((-77 ? 4294967295 : (arr_5 [14] [14] [i_2 - 1])))))), (min((((arr_6 [i_0] [8] [6]) ^ 134217727)), -var_6))));
                            var_14 = (!1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_15 = (!0);
                            var_16 = max((+-2776547806606443078), (((~((var_6 ? var_4 : (arr_1 [i_0] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_0));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                {
                    var_18 = (((206 ? (((arr_23 [i_6] [7] [7]) ? -5714833256335442806 : var_2)) : ((var_0 & (arr_2 [i_6] [i_7] [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((((~467569492) + 2147483647)) >> (var_3 - 76))))));
                                var_20 = (min(var_20, (((!((((-6881391296531020139 * 11478306899095930333) ? (~var_1) : 69))))))));
                            }
                        }
                    }
                    var_21 = ((-(((arr_23 [i_8 - 2] [i_8 - 2] [i_8 - 3]) & 473898613))));
                }
            }
        }
    }
    #pragma endscop
}
