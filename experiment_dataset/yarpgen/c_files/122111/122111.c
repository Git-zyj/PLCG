/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((((((arr_9 [4] [4] [i_0] [0]) * var_2))) ? ((min((arr_9 [i_0] [i_0] [i_0] [i_2]), (arr_9 [i_2] [6] [i_0] [6])))) : 8233288718448389163))));
                            var_12 -= (arr_2 [9]);
                            arr_12 [8] [2] [i_2] [7] [0] [i_1] = ((((min(10213455355261162469, 2207077229310919582))) ? (((min((arr_7 [i_0] [i_0] [i_0]), 2207077229310919568)) * ((max((arr_7 [i_0] [i_2] [i_3]), (arr_9 [i_1] [i_1] [i_1] [i_1])))))) : 1));
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = ((((-(arr_4 [i_0] [i_0] [2]))) < (((max((arr_6 [2] [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_13 = var_0;
    var_14 -= ((var_0 ? (var_9 == var_1) : 12630150922939744346));
    #pragma endscop
}
