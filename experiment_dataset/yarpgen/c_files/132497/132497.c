/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 *= var_5;
        var_12 = var_1;
        var_13 = ((!(arr_0 [i_0] [i_0])));
        arr_3 [i_0] &= -1872521583;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = ((var_8 | (arr_2 [i_1])));
        var_15 = 60009;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_16 = ((((max((arr_8 [i_3] [i_1]), (arr_9 [i_1] [i_2] [i_3]))))) == ((var_5 - (arr_8 [i_1] [i_2]))));
                    var_17 &= 210;
                    var_18 = (max(((((((3491864735779137036 ? (arr_1 [i_2]) : 1443962175))) + 673683782))), ((var_7 + ((((arr_5 [i_1] [i_2]) - (arr_10 [i_2] [i_2]))))))));
                    var_19 = (max(var_19, ((min(((((14697537521823921526 && (arr_11 [i_3] [1] [1] [i_1]))) ? (((arr_12 [i_1] [5] [7] [1]) ? (arr_11 [i_1] [i_2] [0] [4]) : (arr_12 [i_1] [i_1] [i_1] [i_1]))) : 14697537521823921526)), (arr_5 [i_1] [i_3]))))));
                    var_20 = var_8;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 = (((arr_2 [i_4]) & (((((192 ^ (arr_1 [i_4]))) & (arr_0 [i_4] [i_4]))))));
        var_22 = ((((137 ? (var_8 || 173) : -283611559737145126)) & (4096 | 64866)));
        arr_16 [i_4] [2] = (arr_2 [i_4]);
    }
    #pragma endscop
}
