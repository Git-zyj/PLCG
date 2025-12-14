/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 = (arr_6 [i_0] [i_0]);
                    arr_8 [i_0] = ((1868987331 * 1) ? (((7278152505863197112 ? (arr_5 [11] [i_1] [i_1]) : 1))) : (max((((arr_4 [i_2] [i_1]) ^ 0)), -var_4)));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_13 = (arr_11 [i_1] [3] [i_1] [3] [i_1] [i_1]);
                            var_14 = max((arr_6 [i_0] [i_0]), (min((arr_6 [i_0] [i_0]), (arr_3 [i_0] [4] [i_4]))));
                        }
                    }
                }
                arr_13 [i_0] = 2957118456;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_15 = (arr_7 [i_6] [i_0] [i_1] [i_0]);
                            var_16 = (max(var_16, ((-(((!205833633517582411) * (arr_5 [i_0] [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((1590081530 >> 22) * var_9)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            {
                var_18 = ((-1161650297 ? 6159 : (-6160 >= -2147483646)));
                arr_24 [i_7] [16] |= (((((arr_18 [i_7]) ? (arr_18 [i_7]) : (arr_22 [i_7] [i_8 + 1]))) ^ (((((arr_18 [i_7]) + 2147483647)) >> 0))));
            }
        }
    }
    #pragma endscop
}
