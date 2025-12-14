/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((((var_1 ? 105 : 2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = -1;
                                var_20 += ((((~(arr_10 [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]))) & (((1 << (((arr_6 [i_4 - 1] [i_2]) - 3749294474)))))));
                                var_21 = (min(var_21, 1));
                            }
                        }
                    }
                    var_22 = var_7;
                    var_23 = (min(var_14, ((((3 ? 3 : -10))))));
                    var_24 += (((var_4 - var_13) - ((0 ? (var_7 - -8) : 594560979))));
                }
            }
        }
    }
    var_25 = 7;
    #pragma endscop
}
