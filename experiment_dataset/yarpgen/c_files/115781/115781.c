/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(20388, ((((max(-2, var_2))) ? (var_10 < var_6) : ((45137 ? -1 : var_7)))))))));
    var_15 = (max((((((var_10 ? var_1 : var_3))) / var_8)), (((-(var_9 * var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_3 [i_1])));

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    arr_9 [14] [i_2] [i_0] [i_2] = (arr_2 [i_2 - 3] [i_0]);
                    arr_10 [i_0] = (((((((arr_0 [i_0]) > -19)))) <= (min(((26 ? var_0 : var_8)), (((-(arr_1 [i_0]))))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_3] [i_0] [5] [5]);
                    var_17 = ((((-2 ? (arr_11 [i_0]) : (arr_8 [i_0] [i_0] [8])))) ? -var_12 : (arr_6 [8] [i_3 - 2] [i_3] [i_0]));
                    var_18 = (((arr_11 [i_0]) ? (arr_11 [i_0]) : 7));
                    var_19 -= (arr_3 [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, 44));
                                var_21 = 12987270213784136869;
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_22 = max(52870, ((min((arr_8 [i_0] [i_0] [i_6]), (arr_8 [i_0] [i_0] [i_6])))));
                    arr_23 [i_6] [14] [10] [i_0] = (arr_17 [15] [15] [i_0]);
                    var_23 = (i_0 % 2 == zero) ? (((((((max(var_7, (arr_20 [i_0] [i_0] [i_6]))) << (((min((arr_21 [4] [i_0]), 5459473859925414749)) - 21917))))) ? var_10 : (((((((((arr_20 [i_0] [18] [i_0]) != var_13)))) == ((var_8 - (arr_4 [i_0] [i_0])))))))))) : (((((((max(var_7, (arr_20 [i_0] [i_0] [i_6]))) << (((((min((arr_21 [4] [i_0]), 5459473859925414749)) - 21917)) - 5459473859925392827))))) ? var_10 : (((((((((arr_20 [i_0] [18] [i_0]) != var_13)))) == ((var_8 - (arr_4 [i_0] [i_0]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
