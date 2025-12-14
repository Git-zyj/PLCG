/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107575
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = arr_3 [i_0];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
                            {
                                var_12 = var_7;
                                arr_11 [i_2] [(signed char)21] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_10 [i_2] [i_0] [i_4 - 3] [i_3] [(signed char)12])) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_4 - 1] [i_0] [i_2])))) + (((/* implicit */int) ((signed char) arr_8 [i_1] [i_2] [i_4 + 2] [i_3] [(signed char)16])))));
                                var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) max((var_2), (arr_2 [i_3] [i_2]))))), ((+(((/* implicit */int) min(((signed char)-67), ((signed char)-118))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_2] [i_4 + 3] = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)104)))), (((/* implicit */int) min((min((arr_3 [i_3]), (var_7))), (arr_4 [i_4 + 3] [i_4 - 3] [i_4 + 1] [i_2]))))));
                            }
                            var_14 = (signed char)-62;
                            var_15 = var_8;
                            arr_13 [i_0] [i_0] [i_2] = arr_3 [(signed char)17];
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) var_1)))) > (((((/* implicit */int) (signed char)15)) / (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_9 [i_0])))) > (((/* implicit */int) arr_2 [i_0] [i_1]))))) + (max(((-(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))))));
                var_17 = ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)0] [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) arr_3 [i_1]))));
            }
        } 
    } 
    var_18 = var_6;
}
