/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 && (((((((-1 + 9223372036854775807) >> (var_17 + 1442432039)))) ? 1 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(1, ((~(arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [9] [i_2] [4] = ((-(max(1920, var_5))));
                            var_22 = ((var_1 > (arr_1 [i_1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
