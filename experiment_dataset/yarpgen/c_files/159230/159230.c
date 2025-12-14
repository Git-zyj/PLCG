/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += -7482958117082921804;
    var_14 = 3747334796025259706;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [17] [i_0 + 1] = 18446744073709551615;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (4232 ? (arr_4 [i_0 + 2] [i_0 - 1]) : (((arr_6 [5] [i_1] [i_1]) ? var_12 : -7482958117082921804)));
                    arr_8 [1] [1] [1] [i_2] |= (var_3 > 7482958117082921804);
                    var_16 = 22;
                    arr_9 [i_0] [i_1] [i_2] = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_22 [1] [1] [i_6] [i_6] [i_7] [i_7] [i_7] = (((-2147483647 - 1) ? (arr_21 [i_7 - 1] [i_6] [i_3 + 2] [i_6] [i_3 + 1]) : -7482958117082921806));
                                var_17 ^= (524287 | 1803538928);
                            }
                        }
                    }
                    var_18 = (max(var_18, ((((arr_7 [i_5]) ? var_0 : (-18 > -7482958117082921804))))));
                }
            }
        }
        arr_23 [i_3] [i_3] = (arr_1 [i_3]);
        var_19 = (arr_14 [i_3 + 1]);
    }
    #pragma endscop
}
