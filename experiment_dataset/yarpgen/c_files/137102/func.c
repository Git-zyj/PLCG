/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137102
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) min((var_13), (var_7)));
                        arr_9 [i_3] [i_3] [5] [i_1] [5] [i_0] = arr_5 [14];
                        var_14 = max((((((1586482919) < (arr_6 [i_0] [i_2] [i_2] [i_3]))) ? (arr_4 [i_1]) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (arr_1 [i_0]) : (var_5))))), (((int) arr_3 [i_0] [i_1] [i_2 - 2])));
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        arr_12 [3] [i_1] [i_2] [i_4] [0] [i_1] = arr_4 [i_4];
                        var_15 = ((/* implicit */int) min((var_15), (min(((~((~(arr_5 [i_4]))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [10] [i_2 - 1] [i_4])) ? (215700623) : (arr_11 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_1])))) || (((var_9) < (arr_7 [i_0] [0] [i_4]))))))))));
                        var_16 ^= min((((var_10) >> (((max((arr_1 [i_0]), (arr_5 [4]))) - (1623235892))))), (min((max((var_0), (arr_7 [i_0] [6] [i_4]))), (min((arr_2 [i_0] [i_1] [i_2]), (arr_4 [i_4]))))));
                        arr_13 [i_4] [i_1] [9] [i_4] [i_4] [i_4] = var_11;
                        var_17 &= var_12;
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_2] [i_5] [i_5] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0] [9] [i_0])) ? (var_8) : (var_1))), ((-(var_4)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_1] [i_2] [3]))) : (((((/* implicit */_Bool) 215700623)) ? (arr_6 [i_5] [i_2] [i_1] [i_0]) : (arr_2 [i_5] [11] [11]))));
                        var_18 = ((/* implicit */int) (!(((min((arr_7 [0] [i_1] [i_1]), ((-2147483647 - 1)))) > (max((arr_0 [i_0] [i_1]), ((-2147483647 - 1))))))));
                    }
                    arr_17 [11] [i_1] [i_2] [i_1] = ((max((var_1), ((-(arr_5 [i_2]))))) | ((+(max((arr_14 [9]), (var_3))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((int) (!(((var_1) > (arr_3 [i_7] [i_6] [i_2]))))))));
                                arr_22 [i_7 - 2] [i_6] [i_2] [i_1] [i_0] = var_4;
                                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((((arr_20 [i_0] [i_2 + 1] [15] [i_6] [i_7] [i_0] [i_2 - 2]) + (2147483647))) >> (((var_4) - (348114640)))))) ? (min(((-(arr_11 [i_7] [14] [i_6] [i_2] [i_1] [i_0]))), (var_1))) : (min((max((var_10), (var_0))), (((int) arr_1 [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_0;
}
