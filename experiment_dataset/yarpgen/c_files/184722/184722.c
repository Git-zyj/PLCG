/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7;
    var_21 = (max(var_21, var_17));
    var_22 = max(var_0, var_16);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_23 = (max(var_23, ((min(((min((arr_2 [i_0 - 1]), var_16))), (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))))))));
        var_24 = (min((arr_1 [i_0 - 1] [i_0]), ((((arr_3 [i_0 + 1] [1]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))))));
        arr_4 [i_0] = (((1 ? (((arr_3 [i_0] [8]) ? var_15 : (arr_2 [20]))) : 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_14;
        var_25 = (min(var_25, (arr_6 [12])));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        var_26 = ((((min((3156155869524195407 - var_15), var_2))) || (arr_8 [i_2])));
        var_27 = (((((max((arr_8 [i_2]), (arr_8 [i_2]))))) >= (min((arr_8 [i_2]), ((var_4 ? var_8 : 1))))));
        var_28 *= (((max((arr_9 [i_2] [i_2 + 3]), (arr_9 [19] [i_2 + 3]))) ? ((min((arr_9 [0] [i_2 + 1]), (arr_9 [i_2] [i_2 - 4])))) : (arr_9 [18] [i_2 - 4])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_29 = (min(((((arr_3 [i_4 - 1] [i_4 - 1]) >> ((13 ? 1 : 1))))), (max(((min((arr_3 [i_4] [1]), (arr_8 [0])))), (max((arr_18 [i_4]), (arr_9 [i_3] [i_4])))))));
                    var_30 = (min(var_30, (arr_14 [i_3])));
                }
            }
        }
        arr_19 [i_3] = (arr_0 [i_3]);
    }
    #pragma endscop
}
