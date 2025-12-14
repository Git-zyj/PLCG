/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = (min((((((var_4 ? var_0 : (arr_6 [i_0])))) ? ((((((arr_6 [i_0]) + 2147483647)) >> (var_8 + 1019832385)))) : (arr_2 [i_0]))), (arr_1 [i_1])));
                            var_16 = (((((((((arr_1 [i_0]) / (arr_5 [i_0] [5] [i_0] [i_1])))) ? (arr_3 [i_2]) : (arr_3 [i_1])))) ? var_5 : (min(3, var_2))));
                            var_17 ^= (((((((min(var_4, (arr_7 [i_0] [i_1] [i_3])))) | (min(-6293, (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))))) * (min(((16771904131497885233 << (var_1 + 4335600298939329170))), ((min(var_4, 1)))))));
                            var_18 = arr_4 [i_3 - 3] [3] [i_3];
                        }
                    }
                }
                var_19 |= ((1 ? (((arr_3 [i_1 - 2]) ^ (arr_3 [i_1 - 1]))) : (arr_7 [i_0] [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                {
                    arr_14 [i_4] [i_5] [1] = (((((((var_1 + 9223372036854775807) << (var_3 - 5167856302581414694))))) && ((var_9 && (((32744 ? (arr_5 [i_4] [i_5] [i_4] [i_6]) : (arr_3 [i_4]))))))));
                    var_20 = ((-(((((arr_7 [i_4] [i_5] [i_4]) | (arr_4 [i_4] [i_5] [i_6 - 1]))) ^ (((min(var_4, (arr_10 [i_4] [13] [i_4])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 *= (~-1019937363);
                                var_22 = (min(609216102301629182, 4294967292));
                                arr_20 [i_8] [10] [i_4] [i_7] [i_8] [i_4] = ((~(arr_19 [i_4] [i_4] [3] [i_6] [i_6] [i_7] [i_8])));
                            }
                        }
                    }
                    var_23 = var_2;
                }
            }
        }
    }
    var_24 = (min((((~var_12) ? var_6 : var_3)), ((min((var_6 == var_12), (!var_6))))));
    #pragma endscop
}
