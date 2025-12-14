/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] = ((~(min((arr_1 [i_0]), 71494644084506624))));
        var_15 += arr_1 [i_0];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 ^= ((~(((arr_0 [i_0]) ? (min(0, 0)) : (arr_1 [i_0])))));
            var_17 &= (min(7672978111022972322, var_12));
        }
        arr_5 [7] [i_0] = ((!(((16566048926813756927 ? -27242 : (min((arr_4 [i_0] [i_0]), 11099759471067961923)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 = (arr_6 [i_2] [i_2]);

        for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((((arr_9 [i_3 + 1] [i_2]) || (arr_8 [i_2]))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_20 = ((arr_15 [i_2] [i_4] [i_3] [i_2]) % (arr_15 [i_2] [i_4] [i_4] [i_5]));
                            var_21 = var_1;
                        }
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_22 = ((((var_13 ? (arr_19 [i_7 - 1] [i_2] [i_2] [i_2]) : 7672978111022972335)) <= (((-(arr_7 [i_7]))))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_10] [1] = (arr_21 [i_7 - 3] [i_7 - 3]);
                            arr_33 [i_10] [i_10] [i_8] [i_10] [i_2] = (arr_9 [i_10] [i_10]);
                            var_23 = (max(var_23, (arr_23 [i_7 - 4] [i_8] [17])));
                        }
                    }
                }
            }
            var_24 = ((var_11 ? (((((arr_23 [i_2] [8] [i_2]) <= var_6)))) : var_3));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_36 [i_2] [i_2] [i_2] = var_9;
            var_25 = var_14;
        }
        var_26 |= ((var_3 ? (7346984602641589715 % 10773765962686579288) : 3433866975));
    }
    var_27 = (((min(11099759471067961923, var_9)) < (((((var_11 ? var_2 : var_7)) - (!var_3))))));
    #pragma endscop
}
