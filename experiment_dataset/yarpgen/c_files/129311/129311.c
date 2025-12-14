/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 21951812;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_14 [i_3] = min(6700, (min(47280, 6700)));
                            arr_15 [i_1] [i_2] = ((((((-1236762436510635053 ? var_3 : 1236762436510635083)))) || (arr_9 [i_2 - 2] [i_2 + 2] [i_2] [i_3])));
                        }
                    }
                }
            }
            var_19 = (min(var_19, (~1236762436510635048)));
            var_20 -= var_10;
            arr_16 [i_0] = (max((((1236762436510635053 ? var_11 : (arr_8 [i_0] [i_0] [i_0])))), (((arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) ? (max(-25, (arr_10 [i_0] [14] [i_0] [15] [i_1] [i_1]))) : (arr_2 [i_0])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = (-6842390172320453316 - 20);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_8 - 1] = (((arr_18 [i_8 - 1]) ? (arr_23 [i_0] [i_6] [i_8 + 1]) : (arr_18 [i_8 - 1])));
                            arr_28 [i_6] [i_5] [i_5] [i_5] [i_5] = 29560;
                            var_21 += ((~(arr_13 [i_0] [i_5] [i_6] [i_5] [i_8])));
                            var_22 += ((~(arr_13 [i_0] [i_5] [i_0] [i_8 - 1] [i_8])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {

                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            arr_39 [i_11 + 2] [i_11] [3] [i_9] [i_5] [3] = (((~-47) ? -49072809876225230 : (~17520838762066764539)));
                            var_23 ^= ((((-8863769540370364762 ? 29935 : -10)) << (var_7 - 116)));
                        }
                        arr_40 [i_0] [i_0] [i_5] [i_9] [i_10] [i_10] = 1236762436510635078;
                        var_24 = 25314;
                        var_25 = (((-9223372036854775807 - 1) || (arr_24 [i_5] [i_9])));
                    }
                }
            }
        }
        arr_41 [i_0] = -20;
    }
    #pragma endscop
}
