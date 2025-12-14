/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_15 = (((var_9 ? 1867736522 : ((var_2 ? var_11 : -20180)))));
            var_16 = (min(var_16, (((-((var_1 ? (arr_3 [i_1]) : (((arr_3 [i_0 + 1]) - var_5)))))))));
        }
        var_17 &= (min(((((32305 >= (arr_0 [9] [i_0]))) ? (arr_2 [i_0] [i_0] [i_0]) : (min(var_0, 131072)))), ((((15512 <= (arr_0 [i_0] [i_0]))) ? (max(var_7, var_2)) : var_12))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2] = (((((var_5 ? ((max((arr_6 [i_2]), (arr_5 [i_2])))) : ((20159 ? var_10 : 20180))))) ? (((var_11 - 1072693248) ? (arr_5 [i_2]) : ((var_2 ? -18939 : (arr_5 [i_2]))))) : (max((arr_5 [i_2]), (arr_5 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [2] [i_3] [i_2] = (arr_5 [i_2]);
                    arr_15 [4] [i_3] = var_11;
                    arr_16 [i_4] |= ((~(((!var_1) ? (arr_8 [i_2]) : ((1072693256 ? (arr_6 [i_3 - 2]) : 37567))))));
                    var_18 = (max(var_18, var_11));
                }
            }
        }
        var_19 *= (((((var_12 + (arr_11 [i_2] [1])))) ? var_5 : (arr_9 [i_2] [i_2])));
        var_20 = (((+(max((arr_10 [i_2] [i_2] [i_2]), var_2)))));
        arr_17 [10] [1] = ((((var_12 || (arr_11 [13] [i_2]))) ? (!var_12) : (((arr_13 [i_2] [1] [i_2]) ? ((37567 ? var_10 : (arr_12 [i_2] [8]))) : var_13))));
    }
    #pragma endscop
}
