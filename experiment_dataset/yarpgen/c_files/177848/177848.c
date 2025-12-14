/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = ((((((8191 ? (arr_8 [i_0] [i_0] [i_0]) : 3)) & (arr_1 [i_0]))) > (~8193)));
                            var_19 ^= 31;
                            arr_12 [i_0] = ((-(min(8174, var_8))));
                            var_20 = (((((8191 <= (arr_5 [i_0 + 1])))) > (arr_5 [i_0 - 1])));
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3] = (((arr_4 [i_0] [i_2 + 3]) ? (((((arr_3 [i_0] [0] [i_0]) ? 4294967280 : var_7)) | ((((!(arr_1 [i_0]))))))) : (arr_8 [i_0 - 2] [i_0 - 1] [i_0])));
                        }
                    }
                }
                var_21 = ((~(((arr_2 [i_0] [i_0 + 1]) & (arr_3 [12] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = (((((((arr_5 [i_0 - 2]) ^ (((arr_7 [i_0] [i_1] [i_4]) ? (arr_6 [i_0]) : (arr_14 [i_5] [20] [i_1] [i_0]))))) + 2147483647)) >> ((((~(arr_4 [i_4 + 1] [i_0 + 1]))) + 31638))));
                            var_23 -= var_7;
                            var_24 = 8206;
                            var_25 = 18446744073709543425;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                            {
                                var_26 *= var_11;
                                arr_26 [i_0] [i_1] [i_1] [i_1] [i_8] [14] &= (((((((18446744073709543425 ? (arr_16 [4] [i_7]) : 8191))) ? -var_7 : ((-266076533 ? 3114293235 : (arr_11 [i_0] [i_1] [11] [i_7] [i_8]))))) ^ (arr_4 [i_0] [0])));
                            }
                            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                            {
                                var_27 -= ((arr_29 [5] [i_0 - 2]) ? (arr_0 [i_0 + 1] [i_7 + 1]) : (((max(var_10, (arr_3 [i_7 - 1] [i_7 - 1] [2]))))));
                                arr_30 [i_0 + 1] [i_1] [i_6] [1] [i_6] = ((~(arr_18 [i_0 - 2] [i_6] [i_6 - 1])));
                                var_28 = var_1;
                                arr_31 [i_0] [1] [i_0] [i_6] [i_0] = ((!(((arr_24 [i_6 + 1] [i_6] [i_7] [i_7 - 1] [i_7 + 1]) <= 8189))));
                            }
                            for (int i_10 = 2; i_10 < 21;i_10 += 1)
                            {
                                var_29 = -var_3;
                                arr_34 [i_0] [i_6] [i_6] [i_7] [i_10 - 1] = ((var_4 > ((((arr_6 [21]) || (arr_20 [i_0] [i_1] [11] [i_10]))))));
                                var_30 += 63;
                            }
                            var_31 = (max(var_31, (arr_20 [i_0 - 1] [i_0 - 1] [i_6] [i_7])));
                        }
                    }
                }
            }
        }
    }
    var_32 = var_16;
    #pragma endscop
}
