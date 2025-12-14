/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((max(var_7, var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] |= (arr_2 [0] [0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, -65526));
                            var_13 = ((((((arr_2 [i_0] [i_3]) + (((arr_6 [i_1] [i_2] [i_3]) ? var_8 : (-2147483647 - 1)))))) ? (arr_7 [i_0] [i_3 - 1] [i_2 - 1]) : ((((248 ? (arr_0 [5]) : (arr_9 [i_0]))) % var_7))));
                        }
                    }
                }
                var_14 = (max(var_14, ((max(var_2, ((min((arr_6 [i_0] [i_1] [i_1]), 1362775378))))))));
                var_15 = 1233593543;
                var_16 = (arr_0 [i_0]);
            }
        }
    }
    var_17 = (((((~(var_5 % 126))) + 2147483647)) << (229376 - 229376));
    #pragma endscop
}
