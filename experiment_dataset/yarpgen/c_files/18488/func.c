/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18488
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((var_12), (var_8)))) : (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) min((min(((signed char)28), ((signed char)(-127 - 1)))), ((signed char)121))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            arr_13 [i_0 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)20), (arr_0 [i_4 + 2] [i_3 - 3])))) ? (((((/* implicit */_Bool) max((arr_5 [i_4] [i_3] [i_0]), ((signed char)39)))) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(signed char)10] [i_1] [i_2] [i_1] [i_4 + 1]))))))) : (((/* implicit */int) ((signed char) (signed char)59)))));
                            arr_14 [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_10)) + (((/* implicit */int) var_2)))) + (2147483647))) << (((((/* implicit */int) arr_10 [(signed char)14] [i_3])) >> (((((/* implicit */int) arr_8 [(signed char)15] [i_1] [i_1] [i_1])) + (65)))))))) ? (((/* implicit */int) min((arr_0 [i_4 - 1] [i_0 + 1]), (arr_0 [i_4 + 1] [i_0 - 1])))) : (((/* implicit */int) arr_2 [i_0 - 3] [i_1]))));
                            arr_15 [(signed char)10] [(signed char)10] [(signed char)22] [i_2] [i_3] [(signed char)22] [i_4] = max((var_12), (min((arr_5 [i_3 - 3] [i_0 + 1] [i_4 - 1]), ((signed char)(-127 - 1)))));
                        }
                        var_17 -= max(((signed char)20), (var_11));
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_2)))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_19 [i_3] [i_3] [(signed char)10] [i_1] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_3] [i_2]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-22)) == (((/* implicit */int) var_15))))), (min((var_9), (var_2))))))));
                            var_19 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)108))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_10)))), (max((((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)85)))), (((/* implicit */int) var_8))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_11 [i_3] [i_3] [(signed char)22] [i_3 - 1] [(signed char)21] [i_3] [i_3]), (arr_18 [(signed char)17] [i_3 - 1] [i_5] [i_3] [i_5])))), (max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (signed char)98)))), (((/* implicit */int) var_13))))));
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */signed char) max((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_0 - 2] [i_3] [i_5])))), (((/* implicit */int) max((var_7), (arr_18 [(signed char)19] [(signed char)15] [i_2] [i_3] [i_5]))))));
                        }
                        for (signed char i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_6 - 1]))) ? (((/* implicit */int) max((var_14), (arr_21 [i_0] [i_0] [i_0] [(signed char)8])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_0 + 1])) : (((/* implicit */int) var_9))))));
                            arr_24 [i_0] [(signed char)4] [i_2] [i_3] [i_3] = min(((signed char)-21), (((signed char) max((arr_11 [i_3] [(signed char)23] [i_1] [i_1] [i_3] [(signed char)14] [(signed char)22]), ((signed char)-110)))));
                            arr_25 [(signed char)1] [(signed char)4] [(signed char)1] [i_3] [(signed char)4] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) (signed char)-20))))) ? (((/* implicit */int) (signed char)-22)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_12 [i_1] [(signed char)20] [i_1] [i_1] [i_1]))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_29 [i_2] [i_1] [i_1] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(signed char)15] [(signed char)11] [i_2] [i_2] [i_7])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_7]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_5), (max((var_9), (arr_1 [i_0]))))))));
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_10 [i_0] [i_3]), ((signed char)31)))) > (((/* implicit */int) arr_22 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_3 - 2] [(signed char)11] [i_3] [i_3])) ? (((/* implicit */int) arr_17 [i_2] [i_7] [i_2] [(signed char)22] [i_7])) : (((/* implicit */int) max(((signed char)-112), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((signed char) arr_27 [(signed char)4] [(signed char)4] [i_0 + 1] [i_3 + 1])))));
                            arr_30 [i_1] [i_2] [i_2] [(signed char)12] [i_3] [(signed char)23] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_28 [i_0 + 1] [i_0 + 1] [i_3] [(signed char)10]), (arr_4 [i_3 - 1] [i_3 + 2])))) ? (((/* implicit */int) max(((signed char)(-127 - 1)), (arr_4 [i_3 - 3] [i_3 - 3])))) : (((/* implicit */int) max((var_4), ((signed char)98))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 24; i_8 += 2) 
        {
            var_23 += ((/* implicit */signed char) max((((/* implicit */int) (signed char)-23)), (min((((/* implicit */int) arr_9 [i_8] [i_8] [i_8])), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
            var_24 -= max((((signed char) max((arr_17 [i_0] [i_8] [i_0] [i_0] [i_0]), (arr_31 [i_0])))), (((signed char) var_7)));
        }
    }
    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)61)) != (((/* implicit */int) arr_21 [(signed char)2] [i_9] [(signed char)2] [(signed char)6]))))) ^ ((+(((/* implicit */int) min(((signed char)-19), ((signed char)-19))))))));
        arr_38 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-92), (var_5)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [(signed char)16] [(signed char)16])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_9] [(signed char)18])) > (((/* implicit */int) arr_10 [i_9] [(signed char)14])))))));
    }
    var_26 += var_13;
}
