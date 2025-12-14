/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (1 * 1);
                var_11 *= (((((-((-105 ? -105 : 105))))) ? (max(var_9, ((var_3 + (arr_3 [0] [i_0 + 3] [i_1]))))) : ((((1976593704 - 502167288) % (var_2 ^ 1))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = (arr_8 [i_2 - 1]);
                            var_12 -= ((-(min((min(var_3, (arr_6 [12] [0]))), var_9))));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
