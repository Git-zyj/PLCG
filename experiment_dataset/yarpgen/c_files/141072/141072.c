/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 ^= (((arr_1 [i_0] [i_0]) + (arr_0 [i_0] [i_0])));
        arr_2 [8] = (((arr_1 [i_0] [i_0]) != (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (((arr_5 [i_1]) && (arr_5 [i_1])));
        var_20 = arr_3 [i_1];
        var_21 = (((3533685611 * 4213611220) * (arr_5 [i_1])));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_22 = (((((((arr_5 [i_3]) > (arr_5 [i_3]))))) * (81356061 | 4213611244)));
            var_23 = (((((arr_10 [i_3]) / (arr_10 [i_3]))) + ((((arr_9 [i_2] [i_3] [i_3]) && (arr_9 [i_2] [i_3] [i_3]))))));
            arr_11 [i_2] [i_3] = (((((((arr_3 [i_3]) && (arr_9 [i_2] [i_3] [i_3]))))) ^ (3 - 0)));
            arr_12 [i_3] [i_3] = (min(((min((arr_9 [i_2] [i_2] [i_3]), (arr_9 [i_3] [i_3] [i_3])))), (((arr_9 [i_2] [i_3] [i_3]) / (arr_3 [i_3])))));
            var_24 = (min(var_24, (arr_5 [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_2] = (arr_5 [i_4]);
            var_25 = (min(var_25, ((((arr_9 [i_2] [i_2] [14]) == (arr_13 [i_2] [i_2] [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_26 = (((((((arr_5 [i_5]) && (arr_6 [i_2]))) && (arr_6 [i_2]))) && ((((min(0, 4213611244))) || (7693527522099385068 || 13365033801827581539)))));
            var_27 *= (((((((3592744599 * (arr_18 [i_5] [i_5])))) * (min((arr_17 [i_2] [i_5]), (arr_6 [i_2]))))) * (((((min((arr_9 [i_2] [i_5] [0]), (arr_13 [i_5] [i_5] [i_5])))) * (((arr_5 [i_5]) / (arr_10 [12]))))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_28 &= (((((((((arr_3 [8]) & (arr_10 [12]))) == (81356075 | 7))))) & (arr_14 [i_2] [i_2] [i_6])));
            arr_21 [i_2] [i_6] [1] = (((min((min(-1703090994, (arr_20 [i_2] [i_6] [i_6]))), ((((arr_13 [i_2] [i_6] [i_6]) >= (arr_3 [10])))))) / (arr_10 [14])));
        }
        var_29 = (((~(arr_9 [i_2] [i_2] [0]))) >= (((((((arr_19 [i_2] [i_2]) || (arr_3 [4])))) != (arr_8 [i_2])))));
        var_30 = (min(((((arr_9 [0] [i_2] [14]) && ((min((arr_20 [i_2] [i_2] [8]), (arr_16 [i_2] [i_2]))))))), (min((arr_10 [2]), ((((arr_10 [16]) > (arr_8 [12]))))))));
    }
    #pragma endscop
}
