/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_3 ^ (6076395477766997395 | 5478282913107500939)))) ? (((((min(var_3, var_2))) | ((max(-16, 29003)))))) : (((max(var_1, var_2)) + (var_8 < var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 ^= (((((arr_7 [9] [i_1 + 1] [i_2 - 1] [i_4]) || (arr_11 [i_0] [i_1 + 1] [i_2 - 1] [i_2]))) || (var_7 || var_5)));
                                arr_12 [i_3] [i_1] [i_2 + 1] [i_4] [i_4] = ((+((((((arr_0 [i_0] [i_4]) - 1164249856))) ? (arr_5 [i_1]) : (arr_2 [i_2 + 2] [i_2 - 1] [1])))));
                                var_12 = -64;
                            }
                        }
                    }
                }
                var_13 = ((((arr_4 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]) || 21650)) ? -15194 : 34);
            }
        }
    }
    #pragma endscop
}
