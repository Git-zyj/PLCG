/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -7840549987021368121;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 += (((((arr_7 [i_1] [i_2] [i_3]) + var_9)) & (((~(arr_8 [i_0] [i_1] [i_1] [i_0] [i_4]))))));
                                arr_14 [i_0] [9] [i_3] [i_1] = (arr_4 [i_1]);
                            }
                        }
                    }
                    arr_15 [i_1] [1] [i_1] [i_2] = 22034;
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_5 + 2] [i_5 + 2] [9] = ((20 ? 72 : 124));
                        var_18 = 0;
                        arr_23 [i_1] = (((((((arr_16 [i_1] [i_6]) + 2147483647)) << (((((arr_2 [i_5] [i_6]) + 1540409407)) - 18)))) == ((((max((arr_10 [i_0] [i_1] [i_1] [i_5 + 2] [i_6]), (arr_4 [i_1]))) >= ((((15566 != (arr_0 [i_0]))))))))));
                    }
                    arr_24 [1] [i_1] [i_5] = ((~(((0 & (arr_11 [i_1]))))));
                    var_19 += ((~(((arr_21 [i_5] [12] [i_0] [i_0] [i_1] [i_0]) & (max(-4294280316431782229, (arr_6 [i_0] [i_0] [8] [i_5])))))));
                    arr_25 [i_1] [i_1] [i_5] = (min((0 == 30), var_8));

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_28 [i_7] [i_0] [i_0] [i_0] |= (arr_20 [i_5] [i_0]);
                        arr_29 [i_1] [i_1] [10] [i_1] = ((min(-1, (arr_26 [i_7]))) + ((((arr_26 [i_5]) - (arr_26 [i_1])))));
                        arr_30 [i_1] [i_1] = (((arr_2 [i_7] [i_5 - 1]) ^ (arr_6 [i_0] [i_1] [5] [i_0])));
                        arr_31 [i_0] [8] [i_0] [i_0] [i_1] = (arr_4 [i_1]);
                    }
                }
                arr_32 [i_1] [i_1] [i_1] = (min((((-127 - 1) ? 1024204184 : 946276840)), 1));
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
