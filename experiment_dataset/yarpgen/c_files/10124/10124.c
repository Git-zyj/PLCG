/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_11 = ((4083423359 || ((((arr_3 [i_0]) / (arr_2 [i_2]))))));
                        var_12 -= (((~934511206) && 2147483648));
                        var_13 = (max(var_13, (arr_7 [i_3] [i_1] [i_0 + 2])));
                        var_14 = (max(var_14, ((3360456090 / (arr_0 [18] [18])))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_15 = ((arr_13 [i_0 + 2] [i_1] [i_2 - 1] [i_4 + 1] [i_0 + 2] [i_5]) & (arr_9 [i_0] [i_0] [i_0] [i_0 + 3]));
                                var_16 ^= (520876702 ^ 869991871);
                                arr_19 [i_0] [i_1] [11] [i_4 - 1] [i_4] [i_5 - 3] = arr_8 [i_0] [i_0] [i_0 + 4] [i_0 + 3];
                                arr_20 [16] [i_1 + 1] |= (((-(((arr_6 [i_0] [i_0] [i_2]) * (arr_11 [i_2 - 3] [i_2 - 3]))))) % (arr_1 [i_0] [i_1]));
                                var_17 |= (((((((((2147483647 == (arr_0 [i_0] [i_0]))))) < (((arr_7 [i_0] [i_0] [i_0]) / (arr_16 [i_5] [i_4 - 1] [0] [0] [i_0] [i_0]))))))) ^ ((~(min((arr_4 [i_4] [18] [2]), (arr_2 [i_0 + 4]))))));
                            }
                        }
                    }
                }
                arr_21 [i_1] = (-(arr_3 [i_1 + 2]));
                var_18 |= 596703502;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_19 = ((-(((3360456090 == (arr_3 [i_0]))))));
                            var_20 = arr_3 [i_0 + 2];
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    var_22 = ((((var_9 + var_0) + (var_0 - var_0))) + 736726476);
    #pragma endscop
}
