/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 = var_5;
                            arr_11 [i_3] [i_0] = ((arr_9 [i_3] [i_2]) <= var_8);
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = ((((((arr_8 [i_1 + 1] [i_0]) - 67))) && (-67 ^ var_4)));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_11 = (min(var_11, (((((((1 && ((min(3928577097, 13879702875121597338))))))) < (arr_9 [i_4] [i_1 + 1]))))));
                    arr_17 [i_0] [i_0] [i_0] = ((-4922260092303314494 ? ((~(var_1 <= var_6))) : (min(86, ((1 ? 1 : 242))))));
                }
            }
        }
    }
    var_12 = (min((min((((1 >> (var_1 + 1384781383692538331)))), var_9)), (-124 >= var_0)));
    var_13 = min(var_6, ((var_7 - (var_2 - var_3))));
    var_14 = var_0;
    #pragma endscop
}
