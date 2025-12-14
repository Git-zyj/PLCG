/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((!(((var_1 ? (var_8 + var_9) : ((var_2 ? var_7 : var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((((175 % (arr_3 [i_1] [i_0])))) ? -76 : (~var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (min(((~((3 ? 1190869177 : 14)))), ((((((arr_6 [0] [15]) ? var_9 : var_13)) >= -31997)))));
                                arr_16 [i_3] [i_3] [i_4] = var_3;
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] = (arr_14 [i_0] [19] [i_2] [18] [i_3] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_16 = (((~-727636382) * (((((3555696483863597922 ^ 93) && ((max(var_5, var_4)))))))));
                    arr_28 [i_5 - 2] [i_6] [i_5 - 2] [i_5 - 2] = (2918547457024484563 >= 65535);
                }
            }
        }
    }
    var_17 = (((min(31997, 32016))));
    #pragma endscop
}
