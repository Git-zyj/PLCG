/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_11));
    var_13 = 771150051314362013;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 ^= max(((max(127, 239))), (min(var_0, (arr_0 [i_0 + 2]))));
                                var_15 = (min(-1379311116, (min((arr_11 [i_2 - 2] [i_2] [i_2] [i_1]), (arr_3 [i_2 - 2] [i_0 + 2] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_6] [i_5] [i_5] [i_1] [i_0 - 1] = (((arr_11 [i_0] [i_0] [i_0 + 1] [i_5]) ? var_11 : (((arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_2]) : (arr_11 [i_0] [i_0] [i_0 + 1] [i_5 - 1])))));
                                var_16 = ((((max((((-1694377006 == (arr_7 [i_0] [i_1] [i_2] [i_5])))), (arr_10 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0])))) ? (((arr_10 [i_2 + 2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]) ? (arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 2]) : 1)) : (arr_2 [i_5 - 1] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
