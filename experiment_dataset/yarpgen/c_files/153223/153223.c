/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (max(((77 ? 183 : 77)), (arr_1 [i_0])));
                var_14 = (((((9951 & (!0)))) ? ((max((arr_0 [i_0]), (arr_2 [i_0] [i_0])))) : ((4294967280 ? ((((!(arr_3 [i_1] [1]))))) : (min((arr_2 [i_0] [i_1]), var_8))))));
                arr_5 [i_0] = ((((max((max((arr_0 [i_0]), var_1)), (arr_0 [i_1])))) ? (arr_1 [i_1]) : (arr_3 [i_1] [i_0])));
                arr_6 [i_0] [5] = (arr_1 [i_0]);
                arr_7 [i_0] [i_1] = ((~(max(((44 ? 3291897074 : 1)), -14681))));
            }
        }
    }
    var_15 = ((((var_11 + (var_11 / var_8))) ^ ((max(var_6, ((62444 ? 1003070222 : var_4)))))));
    var_16 *= (((max(var_8, var_5)) >> (((min(var_13, ((1003070244 ? var_1 : 18446744073709551602)))) - 4257692273))));
    var_17 = (((((max(var_8, 1))) != var_7)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            {
                var_18 = (arr_3 [i_2] [i_3]);
                var_19 ^= ((((((max((arr_8 [i_2] [i_3]), (arr_12 [i_3] [i_2]))) << (((arr_1 [i_2 + 1]) - 192))))) ? ((((max(var_4, (arr_12 [i_2] [i_3])))) ? (arr_10 [i_3 - 2] [i_2]) : (arr_13 [i_3]))) : ((+((var_13 ? (arr_2 [i_2] [9]) : -9952))))));
                var_20 = (max(64, 1));
                var_21 *= ((((((arr_12 [i_3 - 2] [i_2 - 1]) << (arr_12 [i_3 + 1] [i_2 + 1])))) || (max((arr_12 [i_2 + 1] [i_3]), (arr_12 [i_2 - 1] [5])))));
            }
        }
    }
    #pragma endscop
}
