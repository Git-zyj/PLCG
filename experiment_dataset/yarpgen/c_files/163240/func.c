/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163240
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
    var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)102))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? ((-(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_3)))) : (var_13)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) (-(arr_0 [i_0] [i_1 + 2])))), ((-(var_5))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [2U] [i_1 + 2])))) - (((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */int) arr_2 [i_0 - 2] [i_2]))))))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [(signed char)3] [i_2] [i_3] |= ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) min((arr_1 [i_3]), (arr_1 [i_0 - 2]))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            arr_13 [3] [i_2] [i_2] [3] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? ((((_Bool)1) ? (((1816205193U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_3] [i_2])) : (arr_0 [i_2] [i_0 - 1]))))))));
                            var_22 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)3)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_11 [8] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_9 [i_0] [i_4 - 1] [(signed char)0] [i_3])) ^ (((/* implicit */int) arr_6 [2] [i_1] [i_1 + 3] [14U]))))))));
                        }
                        var_23 = (!(((/* implicit */_Bool) min((arr_4 [i_2] [i_0 - 2]), (((/* implicit */int) var_9))))));
                        var_24 = ((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]);
                    }
                    for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_5] [(signed char)7] = ((/* implicit */int) arr_12 [i_0] [i_1 - 2] [(_Bool)1] [i_5] [i_1 - 2] [i_1] [i_5]);
                        arr_17 [i_5] [i_5] [14] [i_1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((3832460334U) >> (((268435456) - (268435432))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (signed char)32)))))))) ? (min((((/* implicit */unsigned int) (+(arr_0 [9U] [i_5])))), (((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (462506965U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)64)) << (((((/* implicit */int) arr_11 [i_5] [i_2] [i_1 - 1] [i_0 + 1])) - (80)))))) ? (arr_4 [i_0] [i_0 - 2]) : (((/* implicit */int) (signed char)64)))))));
                        var_25 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) min((arr_9 [i_5] [i_0] [i_1] [i_0]), ((signed char)-64)))), (((var_4) ? (var_13) : (((/* implicit */int) var_19)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [(signed char)2]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (899403256)));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0 - 2] [12] [(_Bool)1])))) && (((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_15 [i_6])))))));
                        }
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            arr_26 [i_0] [i_8] [i_2] [i_6] [(signed char)12] = ((/* implicit */unsigned int) arr_6 [i_8] [i_8 + 3] [i_1 - 2] [i_0 - 2]);
                            arr_27 [i_8] = arr_21 [(signed char)9] [i_6 - 2] [i_2] [i_1 + 3] [i_0];
                            arr_28 [(signed char)4] [i_1 - 1] [i_1] [i_1 + 1] [i_8] = ((/* implicit */int) var_14);
                        }
                        var_28 = ((/* implicit */_Bool) (((((-(var_1))) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)0)) ? (1141817896) : (-1683806967))) + (1683806970)))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? (arr_18 [i_0 + 1] [i_1 - 2] [i_6 - 3]) : (arr_19 [i_0 - 1])))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_9] [1U] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118))));
                        var_30 = ((/* implicit */int) min((66584576U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_4))))))))));
                        arr_32 [(signed char)15] = ((int) arr_2 [i_0] [i_1]);
                        var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) arr_29 [i_9 - 3] [i_9 - 3] [i_9 + 1]))))));
                    }
                }
            } 
        } 
    } 
}
