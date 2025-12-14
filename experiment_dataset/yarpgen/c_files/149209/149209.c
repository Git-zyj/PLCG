/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 2));
    var_12 = (((((var_1 ? var_6 : (var_8 >= 1534909301)))) ? (max(1944554399, -949302063)) : 31575));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] &= arr_2 [i_0];

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_13 ^= (max((!var_6), (~var_6)));
                            var_14 = (min(var_14, (((!(((-((50717 >> (949302062 - 949302050)))))))))));
                        }
                        var_15 = (max(((max((arr_6 [i_0] [8] [1] [i_3]), var_1))), ((((~0) ? ((min((arr_6 [i_0] [i_0] [i_0] [i_0]), var_4))) : ((var_10 ? var_7 : (arr_11 [i_1] [i_1]))))))));
                        var_16 = (arr_11 [i_0] [i_0]);
                        var_17 ^= ((((max((min(18446744073709551608, (arr_5 [i_1] [i_1] [i_1]))), (arr_5 [0] [0] [i_0])))) ? (!231) : (arr_5 [i_0] [i_0] [i_0])));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_13 [5] [i_2] [5] [i_2] [7] [5] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_18 = ((-29765 ? -7014 : (1 + 7993)));
                            var_19 = (((((222 ? -26790 : var_5))) ? (((arr_5 [i_6] [i_6] [3]) / 16750)) : (-2483 / 25)));
                            arr_21 [i_0] [i_1] [i_0] [i_1] [i_6] = ((15971170142498758076 ? (arr_20 [i_0] [i_1 - 3] [9] [i_1 - 3] [7] [i_6]) : (arr_20 [6] [i_1 - 4] [i_6] [i_6] [i_6] [i_6])));
                            arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [3] = (-var_2 ^ (1 || var_6));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_0] [i_0] = (((arr_13 [i_0] [i_1] [i_0] [i_2] [i_2] [i_7] [i_0]) && (arr_16 [3])));
                            arr_26 [3] [i_1 + 1] [3] [3] [i_7] |= (!0);
                            var_20 = ((arr_7 [i_7] [5] [i_2] [i_1]) * (arr_24 [i_0] [i_0] [1] [i_5] [i_0] [i_5]));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_30 [9] [i_2] [9] [i_8] = -1377893562;
                            var_21 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                        }
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [0] = var_4;
                        var_22 *= ((~((~(arr_12 [2] [i_1] [2] [i_1])))));
                        var_23 += (arr_1 [i_0]);
                        arr_32 [4] [4] [i_2] [i_5] = ((-181 ? (!31575) : var_7));
                    }
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        var_24 = ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((-((var_1 ? 198 : (arr_33 [i_0] [i_0] [i_0]))))) : ((var_7 ? (15273376722780500555 != 4080) : 60)));
                        var_25 = ((((~(max((arr_15 [i_0] [i_0] [i_0]), (arr_7 [2] [i_1] [i_1] [i_1]))))) + (arr_1 [8])));
                    }
                    arr_35 [7] [i_1] [i_0] = ((-((~(arr_34 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
