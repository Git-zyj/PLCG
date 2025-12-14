/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153441
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
    var_18 += ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_0)))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((max(((-(((/* implicit */int) arr_5 [i_1] [i_1] [(signed char)10])))), (((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_0 [i_0] [i_1])))))), (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))) : (((/* implicit */int) min((arr_9 [i_2] [i_2] [i_2] [(signed char)8] [i_3]), (arr_1 [i_2]))))))) ? (((((/* implicit */_Bool) min((var_10), (arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) : (((((/* implicit */_Bool) max((var_0), (var_14)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [(signed char)2] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_1] [i_1])))))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_3] [i_2] [(signed char)6]), (max((arr_4 [i_0] [i_0]), (arr_0 [(signed char)6] [i_1])))))) ? ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_15)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_0]))))), ((-(((/* implicit */int) arr_10 [i_0] [i_3] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
