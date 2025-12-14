/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((1 ? ((max(((13418 ? 2554696121 : 52118)), ((13415 ? 2115661579 : 1270802251))))) : (((arr_0 [i_0]) ? (!792333702622699135) : (arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_11 = ((((min((((arr_4 [i_1]) ? var_2 : (arr_2 [i_0] [i_1]))), (var_4 < var_2)))) || (((arr_1 [i_0] [i_1 + 1]) == (arr_1 [i_0] [i_0])))));
            var_12 = ((!((min((arr_1 [i_0] [i_1 - 1]), (arr_1 [i_0] [i_0]))))));
            arr_5 [14] |= ((-(((arr_4 [i_0]) ? (arr_4 [i_1 + 1]) : var_3))));
            var_13 ^= (arr_4 [i_0]);
        }
        arr_6 [i_0] = max((arr_4 [i_0]), ((-(max((arr_3 [i_0] [0] [i_0]), (arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_14 = (arr_7 [i_2 - 3]);
        var_15 = (((arr_0 [i_2]) ? (arr_1 [i_2] [i_2 + 1]) : (arr_7 [i_2 - 1])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 &= ((-((((-(arr_10 [i_3]))) % ((min((arr_0 [i_3]), var_7)))))));
        var_17 = ((((((arr_1 [i_3] [i_3]) ? (52123 - 3024165016) : (((0 ? var_7 : -3303)))))) ? (max(3315569948212296823, (((50 ? (arr_7 [i_3]) : 1270802247))))) : (((((arr_2 [i_3] [i_3]) >= ((((arr_8 [i_3] [i_3]) ? (arr_7 [i_3]) : (arr_3 [i_3] [i_3] [i_3]))))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((var_2 ? (((!(arr_3 [i_4] [i_4] [i_4])))) : (!3024165016)));
        arr_14 [i_4] [i_4] = (15 > (arr_2 [i_4] [i_4]));
    }
    var_18 = (-((~(max(1270802247, var_5)))));
    #pragma endscop
}
