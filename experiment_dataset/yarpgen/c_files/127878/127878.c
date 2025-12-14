/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 |= (((~var_1) ^ (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : -1))));
        var_13 = ((0 % (var_6 != 2)));
        var_14 = (max(var_14, (((arr_1 [i_0] [i_0]) / ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 78)))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_15 = ((((((((arr_2 [i_1 + 2]) + 2147483647)) << (9 - 9)))) ? (((arr_2 [i_1 + 2]) ? 4849442849502504105 : (arr_3 [i_1 + 1]))) : (((max(var_10, (arr_2 [i_1 + 2])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    arr_8 [i_3] [i_3] [i_1] = ((((!(arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) ? ((((((arr_5 [i_3] [i_2] [i_1]) / var_0))) ? (max((arr_5 [i_3] [i_3] [i_3]), (arr_1 [i_1] [i_2]))) : (7 && -17))) : var_4));
                    var_16 = ((max((arr_1 [i_1 + 2] [i_3 + 1]), (arr_7 [i_1 - 1] [i_1]))) / ((((min(7, 2325370446))) ? ((4849442849502504124 ? (arr_2 [i_1]) : 12)) : 255)));
                }
            }
        }
        var_17 = (min(var_17, ((((((((var_6 - (arr_1 [i_1] [i_1]))) | (var_8 || 1)))) ? (~2047) : ((((((arr_4 [i_1]) ? 0 : -122)) == ((~(arr_7 [i_1] [1])))))))))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_12 [i_1] = (((((arr_9 [i_1] [i_4]) <= (((arr_1 [i_1] [i_4]) ? var_9 : (arr_2 [i_4]))))) ? 9223372036854775807 : (((((-(arr_11 [i_1] [i_4])))) ? (arr_9 [i_1] [i_4]) : (arr_6 [i_1] [i_1] [i_4] [i_4])))));
            arr_13 [i_1] [i_4] [i_4] = ((arr_5 [i_1] [i_1] [i_4]) ? -829590388 : (max((arr_1 [i_1 - 1] [i_1 - 1]), ((((arr_4 [i_1]) <= (arr_7 [i_1] [i_1])))))));
        }
        var_18 = (((((arr_11 [i_1] [i_1 + 2]) ? (arr_11 [i_1] [i_1 + 2]) : (arr_11 [i_1] [i_1 + 2])))) ? (((arr_11 [i_1] [i_1 + 2]) ? var_7 : (arr_11 [i_1] [i_1 + 2]))) : (max((arr_11 [i_1] [i_1 + 2]), 31180)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_19 = (i_5 % 2 == 0) ? ((max(((((max((arr_1 [i_5] [i_5]), (arr_2 [i_5])))) ? var_9 : -var_5)), ((((255 >> (((arr_7 [i_5] [i_5]) + 827904055)))) ^ (~var_7)))))) : ((max(((((max((arr_1 [i_5] [i_5]), (arr_2 [i_5])))) ? var_9 : -var_5)), ((((255 >> (((((arr_7 [i_5] [i_5]) + 827904055)) - 494462234)))) ^ (~var_7))))));
        arr_16 [i_5] = (arr_6 [i_5] [i_5] [i_5] [i_5]);
        var_20 &= (((!(((4849442849502504112 ? (arr_2 [i_5]) : 254))))) ? ((2047 ? (arr_9 [i_5] [i_5]) : var_9)) : ((((arr_11 [i_5] [i_5]) < (arr_11 [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (((((((((arr_10 [i_6] [i_6] [i_6]) ? (arr_6 [i_6] [6] [i_6] [i_6]) : var_0))) || (((34 + (arr_17 [i_6]))))))) == ((max((73 != var_0), (arr_3 [i_6]))))));
        var_21 = (((((arr_17 [i_6]) == (arr_10 [i_6] [i_6] [i_6])))));
    }
    var_22 = (min(var_22, 9227348118882674077));
    #pragma endscop
}
