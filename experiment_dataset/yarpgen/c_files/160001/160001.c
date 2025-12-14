/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((var_6 == (var_9 && var_4)))) * var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_5 [i_0] [i_1] [i_0] [i_3 + 2]) ? (((var_9 << (((arr_6 [i_0]) - 23866))))) : var_0));
                                var_12 = (((arr_12 [i_3] [i_3] [0] [i_2] [10] [i_0] [10]) == ((((arr_0 [13]) < (53448 < 0))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((((var_2 << (var_0 - 33)))) ? ((((var_7 != (arr_2 [i_0]))))) : (4519205488123438266 / -32767))) - ((((var_8 && var_0) % (arr_4 [i_1]))))));
                            }
                        }
                    }
                    arr_14 [i_1] = ((((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? (1 || 6259) : ((((arr_2 [i_1]) && var_4)))));
                    var_13 = (((65535 % 143) == (((arr_3 [12] [i_1]) ? ((var_3 ? var_4 : 134217727)) : (arr_1 [i_2])))));
                }
            }
        }
    }
    var_14 = ((var_4 ? (-820548696 && var_0) : (((var_9 || var_8) ? var_4 : 5))));
    var_15 ^= var_8;
    #pragma endscop
}
