/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((~(arr_4 [i_0] [i_0] [10]))))) ? (arr_7 [i_2] [i_0] [i_0]) : (min(4294967295, (((~(arr_7 [i_0] [i_1] [i_0])))))))))));
                    var_12 ^= ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : 31705))) ? (min((arr_3 [i_0]), (arr_3 [i_2]))) : ((((arr_3 [i_1]) || (arr_3 [i_1]))))));
                    arr_9 [12] [i_1] = (max(((max((arr_4 [i_0] [i_1] [i_2]), 14950))), (((arr_3 [i_0]) + (arr_2 [i_1])))));
                    var_13 = (max(var_13, 4294967295));
                    arr_10 [i_0] [i_0] = (((arr_0 [i_0]) << ((((((63 ? -1012458919 : 235)) + 1012458948)) - 16))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            {
                var_14 += ((((((((arr_0 [i_3]) ? (arr_3 [i_3]) : -43))) ? 2147483647 : 189)) >= ((((arr_8 [i_3] [i_4 + 2]) < 192)))));
                var_15 ^= (((arr_4 [i_4 + 3] [i_4 - 1] [i_4]) ? ((max(203, (arr_6 [i_4] [i_4 + 1] [15] [i_4])))) : ((~(~2738358206)))));
                var_16 = (max(var_16, (max((((((-1 ? (-127 - 1) : var_4))) - (arr_15 [i_4 + 3] [i_4 + 2]))), ((((((-1 + 2147483647) >> (((arr_12 [i_3]) - 34610130)))) & ((63 << (((-2147483647 - -2147483646) + 3)))))))))));
            }
        }
    }
    #pragma endscop
}
