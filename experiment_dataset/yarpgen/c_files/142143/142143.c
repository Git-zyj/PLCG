/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [2] |= ((-((max((arr_1 [8]), (arr_1 [10]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [10]) ? 9223369837831520256 : 11505883690740405003))) ? ((-(arr_0 [1] [i_0]))) : (arr_7 [i_0] [i_0] [i_0])));
                            var_16 = (max(var_16, (127 && var_13)));
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = (((((-(((arr_9 [0] [6] [4] [i_3 + 1]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))))) ? ((max(77, ((max(1, var_13)))))) : (-16 != -126)));
                        }
                    }
                }
                var_17 ^= (arr_9 [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                arr_17 [9] [i_5] = 255;
                arr_18 [i_4] [i_5] [i_5] = (((arr_4 [4] [i_5]) ? var_2 : (min(((((arr_6 [i_4] [i_4]) ? var_4 : (arr_6 [i_5] [0])))), (~var_3)))));
                var_18 = (var_3 * (((((!(arr_1 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
