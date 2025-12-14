/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [19] [i_2] [i_2] [11] = ((~(((arr_8 [i_3] [i_2] [i_1] [i_0]) << (((arr_8 [i_3] [i_2] [i_1 - 1] [i_0]) - 3305144216))))));
                            var_21 = (arr_0 [i_1 + 1]);
                            var_22 += (arr_0 [i_0]);
                            var_23 += var_14;
                            var_24 = ((-(min((arr_2 [i_0] [i_1 - 1]), (arr_2 [13] [i_1 + 1])))));
                        }
                    }
                }
                var_25 = (max(var_25, 4120708723979471612));
            }
        }
    }
    #pragma endscop
}
