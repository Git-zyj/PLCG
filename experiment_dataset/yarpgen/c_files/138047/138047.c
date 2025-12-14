/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [4] = (max((((arr_1 [i_2]) ? 14 : var_15)), (arr_1 [i_1])));

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] = (!var_16);
                        var_19 |= ((((arr_6 [i_1] [i_1] [i_1 - 1] [i_1]) ? 3773963659241135287 : (((214 ? (arr_4 [i_0] [14] [i_3]) : 8))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (max((max(2147483647, (arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 - 1] [i_1 - 1])));
                        arr_16 [i_0] [i_0] [0] [i_2] [i_2] [i_2] = ((((max((13234 ^ 51510), 13234))) ? ((max(13224, 65126))) : ((((max(-74, 67108863)) < (arr_13 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_20 ^= -var_10;
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [5] = -182;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_21 = ((((max(var_17, (arr_5 [i_6])))) ? ((~(arr_1 [i_1 - 1]))) : var_8));
                            var_22 = (max(var_22, ((((((-(min(var_16, (arr_1 [11])))))) > ((((arr_9 [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_6]) : var_4))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = 3773963659241135299;
    #pragma endscop
}
