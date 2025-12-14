/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1] = ((~(((arr_1 [i_1 + 3]) ^ (arr_1 [i_0])))));
            arr_5 [i_1] = ((((((arr_1 [i_1]) ? (arr_2 [i_1 - 1] [i_1] [i_0]) : (arr_3 [i_1] [i_1])))) ? (arr_0 [i_0 + 2] [i_1 + 1]) : (((arr_3 [i_1] [14]) ? (arr_2 [20] [1] [i_1 + 3]) : (arr_3 [i_1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_10 -= (!1);
            var_11 = 1;
        }
        arr_10 [i_0] = (((arr_3 [2] [i_0 - 1]) ? (((arr_1 [i_0 + 2]) ? ((18093 ? -18076 : (arr_0 [i_0 - 1] [i_0 + 2]))) : ((max(52845, 18080))))) : (arr_9 [i_0 + 2] [7])));
        arr_11 [11] = (arr_1 [i_0]);
        arr_12 [i_0 + 1] [i_0 + 2] = (((((arr_1 [i_0 + 2]) - (arr_1 [i_0 + 2])))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((max((arr_0 [i_3 + 2] [i_3 + 2]), (((arr_0 [i_3 + 2] [i_3 + 2]) ? (arr_0 [i_3 + 1] [i_3 + 1]) : (arr_0 [i_3 + 2] [i_3 + 2]))))))));
        arr_16 [i_3] = ((~((1 ? ((max(64377, 1))) : ((min(1, 3)))))));
        arr_17 [i_3] = ((!(arr_0 [i_3 + 2] [i_3])));
        var_13 -= ((((min(1992131630, 1595588980)))) ? (min(((((arr_1 [i_3]) ? (arr_1 [i_3 + 2]) : (arr_3 [20] [i_3])))), (((arr_7 [i_3] [i_3 + 1] [i_3 - 1]) / (arr_15 [i_3]))))) : (((((max((arr_13 [16]), (arr_8 [i_3 + 1] [i_3]))) > (((1 ? 3630281191 : 12696))))))));
        var_14 = (max(var_14, ((max((arr_13 [6]), ((min((1 - 1), (((arr_2 [i_3 - 1] [i_3] [i_3]) + (arr_0 [i_3] [i_3])))))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_22 [i_4] [11] = ((-7792 ? (((12716 ? -1529053264 : 21808))) : (arr_15 [i_4])));
        arr_23 [i_4] = (((arr_21 [i_4]) ? (((arr_3 [i_4] [i_4]) ? (arr_14 [i_4]) : (arr_13 [i_4]))) : ((((arr_20 [i_4] [i_4]) ? (arr_20 [i_4] [i_4]) : (arr_7 [i_4] [11] [i_4]))))));
    }
    var_15 = -1;
    #pragma endscop
}
