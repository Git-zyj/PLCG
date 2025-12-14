/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? ((min(var_6, (max(var_6, 214))))) : ((-((min(var_5, var_9)))))));
    var_11 *= (min(43, var_2));
    var_12 = (max((min((37 & var_2), var_5)), (var_6 + var_6)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = var_5;
                                var_14 ^= 7206934174444601487;
                                var_15 -= (((((((8213666789670087053 || (arr_1 [i_0] [i_4]))) || 41))) != ((min(38, 40069)))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [7] [i_0] = 585141473930018914;
                arr_13 [i_0] [1] = ((+(((arr_11 [i_0] [0] [i_1] [i_1] [i_1 - 1]) | (((0 ? (arr_1 [i_0] [i_0]) : -32759)))))));
                var_16 = (max(var_16, (!var_4)));
            }
        }
    }
    #pragma endscop
}
