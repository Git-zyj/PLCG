/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_0] = (--65509);
            var_14 = ((-(!-65516)));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [21] [21] = (((!10386) != (~65516)));
            arr_11 [i_0] |= ((((!(arr_8 [3] [i_2])))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_21 [12] [12] [i_3] [i_4] [i_5] = max((arr_20 [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 3]), (((!(((65516 ? 13927 : (arr_2 [i_5] [i_0]))))))));
                            arr_22 [i_0] [i_2] [i_3] [i_4] [i_5 - 1] = ((!((((~(arr_2 [i_0] [i_4])))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_18 [i_5] [i_5 - 3] [14] [i_5] [i_5] [i_5 - 2])));
                            var_15 = (max(var_15, (((51608 << (!13927))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_16 ^= (65521 != 13918);
                            arr_28 [i_7] = (+-13926);
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_17 = (max(var_17, ((max((((((13927 ? 42712 : 0))) ? 13940 : 13918)), (!-4111))))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_18 = (min((((arr_16 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1]) ? -19337 : ((35788 ? 32 : 65532)))), (((arr_29 [i_0] [i_8] [i_8] [i_9]) ? (arr_33 [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_10]) : ((min(14878, 1008)))))));
                            var_19 = (min(var_19, 17227));
                        }
                    }
                }
                arr_35 [16] [i_2] [i_2] [i_0] = (!13909);
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_39 [i_11] [i_2] [i_11] = ((((!(arr_31 [i_0] [i_0] [i_11])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_46 [i_0] [i_2] [i_11] = arr_33 [5] [i_12] [18] [5] [i_2] [i_0];
                            arr_47 [i_0] [i_2] [i_2] [i_2] [i_2] [i_13] |= ((-((65535 ? 21381 : 4))));
                            var_20 = ((~(~65520)));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                arr_50 [16] [16] = 16;
                arr_51 [i_0] [i_0] [i_0] [i_2] = ((-(max(13918, (((arr_30 [i_2] [i_2] [i_2]) + 26))))));
                arr_52 [i_14] [i_2] [i_0] [i_0] = min((max((min(65504, 65505)), 6806)), 20752);
            }
        }
        arr_53 [i_0] |= 0;
    }
    var_21 = (min(var_21, ((min(((58730 ? ((61563 ? 65535 : 6785)) : (~59713))), var_12)))));
    #pragma endscop
}
