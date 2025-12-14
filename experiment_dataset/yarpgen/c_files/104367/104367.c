/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(var_14, 4200109608532880755));
    var_16 = (((((36841762 / var_3) >= (((var_7 >> (var_8 + 94)))))) ? (max(((var_0 ? var_11 : var_8)), (((var_2 ? 159 : var_10))))) : (((((max(159, 36841762)) >= var_2))))));
    var_17 = (((((((var_2 <= var_12) != var_4)))) >= var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [18] [i_2] = (((~-15644) - (((var_11 - 24995) ? (arr_1 [14]) : ((max((arr_7 [i_0] [i_1] [i_2]), (arr_0 [i_2]))))))));
                    var_18 = (max(4251127439, -8444452264607507651));
                    arr_10 [i_1] [i_1] [i_2] = var_14;
                    arr_11 [i_0] [1] [i_2] [i_2] = (arr_6 [6] [i_1] [i_0] [i_0]);
                    var_19 = (min(((((arr_1 [i_0]) * ((59713 ? var_8 : (arr_6 [i_0] [1] [i_0] [i_2])))))), ((-(((arr_2 [i_0] [5]) ? (arr_2 [i_0] [0]) : var_14))))));
                }
            }
        }
    }
    #pragma endscop
}
