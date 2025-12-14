/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((min(-54, 2287828610704211968))))));
                var_18 = (min((arr_6 [i_0 + 1] [i_1 - 1]), (arr_1 [i_0 - 1])));
                arr_7 [i_0] [4] [i_0 + 1] &= 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = ((var_3 > ((-(min(var_13, 8222938239932882571))))));
                            var_20 = (min(var_20, (var_3 ^ var_6)));
                            var_21 = 16158915463005339650;
                            var_22 = ((-(((arr_2 [i_1 + 4]) ? var_4 : (arr_2 [i_1 + 3])))));
                        }
                    }
                }
                var_23 += (min(8222938239932882571, 2047));
            }
        }
    }
    #pragma endscop
}
