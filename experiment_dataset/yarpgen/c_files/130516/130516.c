/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_6 [i_0] [i_0] [i_3] [i_4]) ^ ((9223372036854775807 ? (arr_2 [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                                arr_13 [i_0] [i_0] [i_4] [i_4] [i_4] = ((max(var_11, -2943711628743232760)));
                                var_21 = (((max((arr_12 [i_3 - 2] [i_3] [12] [i_3 - 2] [i_2]), (arr_11 [i_3 - 3] [i_3 - 1] [i_0] [i_3 - 1] [i_0])))) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]) : (((max(var_9, (arr_0 [8]))))));
                            }
                        }
                    }
                }
                var_22 = (((arr_7 [i_0] [i_0] [i_1] [i_1]) ^ (-1768979625441617772 / 882765076)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_23 *= var_5;
                            var_24 *= ((-26 < (((((arr_17 [i_5] [i_1] [i_5]) - -12)) | 39594))));
                            var_25 = ((!((((arr_18 [i_0] [i_0] [i_0] [i_0]) + (26 < -85))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((-(var_19 * var_4)));
    #pragma endscop
}
