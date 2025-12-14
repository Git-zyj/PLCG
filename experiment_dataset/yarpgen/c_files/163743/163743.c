/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])));
        arr_2 [1] = ((51243 ? (((391762930435188741 ? (arr_1 [i_0]) : 2147483647))) : 540945749));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_15 *= ((!(arr_0 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = (((((1 ? 14606 : 1))) ? 1 : (arr_5 [i_2])));
                    var_17 = (14296 & 1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_18 = (arr_4 [i_5 + 2]);
                                var_19 -= 925643949;
                                var_20 = 540945724;
                                var_21 *= ((256 <= (arr_0 [i_1 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 += 1;
                                var_23 += 1;
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((!(arr_17 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 2])));
    }
    var_25 = (min(var_25, ((max(var_12, ((~((1 ? var_11 : -1912931518432853324)))))))));
    #pragma endscop
}
