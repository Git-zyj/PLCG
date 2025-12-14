/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = arr_7 [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_0] [i_2] [i_2] [i_3] [i_4] = ((((((~(arr_10 [i_0] [i_0])))) || (arr_5 [i_0]))));
                                var_16 = (((0 * (arr_14 [1] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4]))));
                                var_17 = (arr_6 [i_0] [i_0] [i_2] [i_3]);
                                arr_16 [i_0] = ((((~(arr_5 [i_1])))));
                                var_18 += ((((((~(arr_5 [i_0])))) & (arr_4 [12] [i_3] [i_4]))));
                            }
                        }
                    }
                    var_19 = ((!(arr_2 [i_0 - 1] [i_0])));
                    var_20 = (arr_13 [i_0] [i_1] [i_1]);
                }
                var_21 = 6;
            }
        }
    }
    #pragma endscop
}
