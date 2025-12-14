/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max((max(((var_10 ? var_15 : var_15)), var_0)), (min(((var_0 ? var_14 : var_13)), ((var_5 ? var_8 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max((max(((-(arr_5 [i_1] [i_1] [10]))), ((min((arr_4 [i_0] [i_1]), (arr_0 [i_0] [i_1])))))), var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((((var_15 ? (((!(arr_2 [i_2])))) : ((min((arr_9 [i_2] [i_2] [i_2] [8] [i_3]), (arr_1 [i_2]))))))) ? ((((min(var_10, (arr_0 [i_0] [i_0])))) ? ((~(arr_5 [i_3] [i_3] [i_3]))) : (!var_17))) : ((((max(var_0, var_14))) ? ((var_16 ? (arr_10 [2] [i_1] [i_1]) : (arr_1 [i_0]))) : ((var_7 ? (arr_3 [i_3] [i_2] [i_0]) : (arr_9 [i_1] [i_3] [i_2] [i_1] [i_1]))))))))));
                            var_21 = ((((max((arr_5 [i_3] [i_2] [6]), (max((arr_4 [i_0] [i_0]), (arr_0 [6] [i_1])))))) ? ((+((var_17 ? (arr_7 [i_0] [i_1] [i_2]) : var_15)))) : (max((((!(arr_10 [i_3] [i_3] [i_0])))), ((-(arr_10 [i_0] [i_3] [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
