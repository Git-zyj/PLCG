/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 ^= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = 236043525;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_3] [0] = (((var_5 != var_0) ? (1 | 0) : (((0 << (4294967291 - 4294967288))))));
                                var_16 ^= var_4;
                                arr_16 [i_1] = (((min(4294967282, (var_13 + 19))) + 4294967265));
                                var_17 = ((var_13 % (~13)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = var_9;
                    var_18 = (max(var_18, (((-(arr_3 [4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] = ((~((31 ^ (arr_4 [i_0])))));
                                arr_25 [9] [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] = var_9;
                                var_19 = 1150850839;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
