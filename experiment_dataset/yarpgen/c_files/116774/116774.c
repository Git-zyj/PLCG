/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] &= (((((-(arr_0 [i_0] [i_0])))) ? ((-4096 ? (arr_1 [i_0]) : 4)) : (((max(-1, 250))))));
        var_12 += ((~(arr_0 [i_0] [i_0])));
        var_13 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((((min(var_10, (arr_0 [i_0] [i_1])))) ? (((arr_0 [i_0] [i_1]) ? var_4 : (arr_8 [i_0] [i_1]))) : ((var_6 ? (arr_4 [i_0] [i_2]) : (arr_8 [i_0] [i_0])))))) ? 18446744073709551615 : (max((arr_7 [i_0] [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_1] [i_2] [i_0]))))))));
                    arr_9 [i_0] [i_1] = (arr_3 [i_0] [i_1] [i_2]);
                    var_15 ^= ((((min(((var_8 ? 18446744073709551615 : 5)), ((((arr_5 [i_2] [i_1] [i_0]) ? var_5 : var_8)))))) ? (((((3 ? (arr_5 [i_0] [i_1] [6]) : 65535))) ? (((arr_1 [7]) * (arr_7 [i_0] [i_1] [i_2] [i_2]))) : ((var_7 ? (arr_0 [i_1] [i_2]) : (arr_1 [i_0]))))) : ((min(var_9, ((((arr_3 [i_0] [i_1] [i_2]) ? var_3 : (arr_8 [i_0] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
