/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114201
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_2 [i_0])))) != (((((/* implicit */_Bool) var_2)) ? (((arr_2 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] [0] [9U] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [(_Bool)1]))))) : (((unsigned int) (+(((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */short) (((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))) != (((((/* implicit */_Bool) arr_0 [(signed char)0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_2 [i_0])))))));
                                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [0] [i_0])), (min((arr_10 [(_Bool)1] [i_2] [(signed char)7] [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
                            }
                        } 
                    } 
                    var_12 = ((arr_13 [i_2] [i_2 - 1] [(unsigned char)4] [i_1] [i_1] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)2] [i_2])))))));
                    var_13 = ((/* implicit */_Bool) arr_14 [7U] [7U] [i_2] [7U] [7U]);
                }
                arr_15 [i_0] [i_0] [i_0] |= ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0])));
                arr_16 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) var_5))))) ? (((var_5) ? (arr_10 [(unsigned char)1] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_0]))))) ^ (((((var_1) + (arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1]))))))));
                arr_17 [i_1] = ((/* implicit */signed char) (((~(((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) - (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [(_Bool)1] [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 |= (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))));
    var_15 = ((/* implicit */short) var_5);
}
