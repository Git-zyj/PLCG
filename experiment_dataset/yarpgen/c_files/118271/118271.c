/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_3;
    var_19 = 38552;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((1 % 4781765136019399393) >= (arr_5 [i_0] [1] [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_12 + 9223372036854775807) >> (((arr_1 [i_2]) - 13263665462669319018)))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] = 38549;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
