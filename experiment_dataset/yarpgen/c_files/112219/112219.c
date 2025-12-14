/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_2, var_18))) ? (var_9 ^ var_3) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 *= ((-((-2105494922 ? -2105494925 : 3882209596))));
                                var_22 &= 1529460804;
                                var_23 += (((max(1529460803, 3)) & (arr_7 [i_1])));
                            }
                        }
                    }
                    arr_10 [i_1] &= (((var_7 ? 1529460804 : (arr_4 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] [5] = ((((min((((arr_16 [18] [i_2] [i_1] [i_5] [14]) ? (arr_15 [i_0] [i_0] [10] [i_2] [i_0]) : var_8)), var_4))) <= ((((max(var_4, (arr_0 [i_5] [i_6])))) ? (((arr_15 [13] [3] [i_2] [i_2] [3]) ? var_18 : (arr_1 [i_6] [i_0]))) : 52))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5 - 1] [i_1] = 549218942976;
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_5 + 1] [i_5 + 1] [i_6] = (arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_2] [6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_6 == ((min((((var_14 ? var_10 : 3))), ((var_18 ? 3 : 190885725)))))));
    #pragma endscop
}
