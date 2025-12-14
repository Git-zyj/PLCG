/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [20] [i_0] = (min((max((arr_7 [i_1] [i_3 + 1] [i_1]), ((-1 ? 255 : 63)))), (((-var_5 ? (max(var_10, var_0)) : (((2504947939 ? (arr_8 [i_1]) : -19365))))))));
                                var_12 &= ((((~(max(-1, (arr_6 [17] [i_1] [i_1] [12]))))) != (!8191)));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = (max((9223372036854775807 / 8178), ((~(arr_5 [i_0] [i_1])))));
                var_13 = (max(32752, (arr_5 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_14 = (max((max((arr_13 [i_0] [i_5 + 1] [i_1] [3] [i_5 + 1]), (arr_7 [i_1] [i_5 + 1] [i_1]))), (((-(arr_13 [i_1] [i_5 + 1] [i_1] [i_1] [4]))))));
                            var_15 ^= (arr_6 [i_5] [i_0] [i_0] [i_5 + 1]);
                        }
                    }
                }
                var_16 = (max(((-((min(1, (arr_8 [i_1])))))), ((((8191 ? (arr_10 [i_0] [i_1] [i_0] [12] [i_1]) : 4294959089))))));
            }
        }
    }
    var_17 = ((((((var_5 << (var_0 - 179))) << (8191 - 8129))) < var_10));
    #pragma endscop
}
