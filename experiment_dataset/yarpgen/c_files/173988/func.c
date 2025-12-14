/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173988
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (arr_1 [i_0]) : (var_13))), (min(((~(1088825881))), ((~(-472888884)))))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_0)))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
        {
            arr_7 [i_2] = ((/* implicit */int) var_5);
            /* LoopSeq 3 */
            for (short i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                var_16 -= ((var_12) ^ (arr_3 [i_1]));
                var_17 = ((/* implicit */int) min((var_17), ((~((-(min((((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [(short)1])), (var_9)))))))));
                var_18 = arr_4 [(short)11];
            }
            /* vectorizable */
            for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) /* same iter space */
            {
                var_19 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [(short)2] [16])))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) 89276686)) : (var_11)));
            }
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
            {
                var_21 += ((/* implicit */unsigned int) -7);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (472888888) : (((/* implicit */int) var_8)))), (arr_8 [i_1] [(short)7] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(3676891556U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (((/* implicit */int) (short)30528)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1036076737)) ? (2369893966U) : (var_0)))) ? (((((/* implicit */_Bool) 472888887)) ? (((/* implicit */unsigned int) 2147483638)) : (arr_5 [10U] [(short)15] [(short)1]))) : (((/* implicit */unsigned int) max((arr_14 [i_2]), (var_3))))))));
                arr_16 [i_1] [i_2] [8U] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 2147483638)) && (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_5])) && (((/* implicit */_Bool) arr_5 [9U] [i_1 - 1] [10U]))))));
            }
        }
        for (short i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
        {
            arr_19 [(short)5] = ((/* implicit */int) arr_13 [(short)12]);
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_22 [i_7] [i_6] [2U] = arr_14 [i_7];
                var_23 = arr_5 [5] [10] [i_7];
            }
        }
        var_24 -= var_10;
        var_25 = min((((/* implicit */int) arr_10 [i_1])), (var_9));
        var_26 = ((/* implicit */unsigned int) arr_6 [16]);
    }
    var_27 = ((/* implicit */short) (((-(min((((/* implicit */unsigned int) -472888889)), (324740260U))))) | ((+(var_12)))));
}
