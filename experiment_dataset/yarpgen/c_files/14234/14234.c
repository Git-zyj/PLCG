/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min((((var_7 ? 24185 : (-32767 - 1)))), (min(16777152, 6368771759435142006)))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_10 ^= (6368771759435142006 == 1650994528);
        var_11 = -8651451094490915037;
        arr_8 [i_1] [i_1] = ((((((arr_6 [0]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1])))) ? (arr_5 [i_1] [i_1]) : ((max((arr_6 [i_1]), (arr_5 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_12 ^= (arr_9 [16]);
        var_13 ^= ((((max((arr_10 [i_2]), (arr_9 [18])))) ? ((((arr_10 [i_2]) == (arr_9 [4])))) : 1));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = (max(var_14, ((((((arr_1 [i_3]) / (arr_1 [i_3]))) + (((arr_1 [i_3]) ? (arr_1 [i_3]) : 51663)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_15 = (max(var_15, ((132044840 ? (arr_13 [i_4]) : ((-(((arr_5 [i_5] [i_4]) ? var_4 : (arr_5 [1] [i_4])))))))));
                    arr_17 [0] [i_4] [i_3] = (min(((var_0 ? (arr_14 [i_3]) : (arr_14 [i_3]))), ((((!(arr_0 [i_3]))) ? (~132044870) : (((arr_7 [1]) ? (arr_15 [i_3]) : (arr_16 [i_5] [i_4] [i_3] [2])))))));
                    var_16 = (((((((((arr_1 [i_4]) ? var_0 : (arr_13 [i_3])))) ? (max(var_1, 4762778747514906467)) : (arr_10 [i_5])))) ? (max((((arr_10 [i_4]) ^ (arr_1 [i_3]))), (arr_10 [i_5]))) : (((!(arr_11 [i_3]))))));
                    var_17 = (arr_1 [i_5]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_18 = (min(var_18, (((((((arr_21 [i_6 + 1] [i_6 + 1]) && (arr_22 [i_6 + 1] [16] [20])))) % (((1 != var_9) ^ (arr_21 [i_6 + 2] [i_7]))))))));
                var_19 = (((7156 != ((4278190144 + (arr_19 [i_6] [i_6]))))) ? ((16777146 ? (arr_19 [i_6 + 1] [5]) : ((~(arr_19 [i_6] [i_6]))))) : var_7);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_20 = (((((arr_16 [i_8] [i_8] [3] [0]) + 2147483647)) << ((((arr_5 [0] [i_9]) == (arr_20 [i_9]))))));
                arr_31 [i_9] [i_9] = (arr_22 [i_9] [23] [23]);
                var_21 += (-var_4 ? ((min((!13858), (((arr_25 [i_9]) ? (arr_6 [4]) : 152))))) : (arr_11 [i_8]));
            }
        }
    }
    var_22 = (((var_8 ? ((min(var_0, var_9))) : 122)) != 1);
    var_23 = (!2147483632);
    #pragma endscop
}
