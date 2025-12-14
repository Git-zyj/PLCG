/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_6 ? ((max(var_3, var_16))) : ((-25 ? var_15 : var_11)))), ((((var_5 ? 10656398843046127071 : var_5)) >> var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((32765 < ((((min((arr_1 [i_1 - 2]), -17))) ? (-25 && var_11) : var_4))));
                var_19 = ((((var_3 << (((max(var_0, (arr_6 [i_0] [i_0] [i_1 - 1]))) - 8907860282039847912)))) != (((min(var_0, var_3))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = 25;
                                var_21 = ((-((var_13 ? ((var_10 ? -787282333225649748 : 0)) : 25))));
                                var_22 = 141;
                                var_23 = (min(((((((arr_2 [i_5]) < -2448011073559904454))) < (arr_15 [i_3] [i_4] [i_6]))), (25 && 18446744073709551615)));
                                var_24 = (max(var_24, ((((((~((-25 ? 2448011073559904459 : 1))))) ? (min(23234, var_12)) : var_6)))));
                            }
                        }
                    }
                }
                var_25 = 13402702003347960352;
            }
        }
    }
    var_26 = 254;
    #pragma endscop
}
