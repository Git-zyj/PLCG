/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11454
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((((((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) + (82))))) == (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) (_Bool)0))))) | (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) var_13)))))));
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42)))) : (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (signed char)62)))))) | (((/* implicit */int) ((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_1 [i_0] [(signed char)13]))))) != (((var_5) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_13)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_1 [i_0] [(signed char)8])) + (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)104)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-90)) * (((/* implicit */int) (signed char)-1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */signed char) (((_Bool)1) || ((_Bool)1)));
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [(_Bool)0])) || (((/* implicit */_Bool) arr_5 [(signed char)4])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_1] [(_Bool)1]) ? (((/* implicit */int) arr_7 [i_1] [(signed char)4])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-100)) || (((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) arr_4 [i_1] [(signed char)3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
            arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (_Bool)1))));
            arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)104)) - (((/* implicit */int) (signed char)-16))));
            arr_12 [i_2] [(signed char)15] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)(-127 - 1)))))) - (((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))))));
        }
        arr_13 [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) == (((/* implicit */int) var_12)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_0))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_4 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_18 [i_1] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_19 [i_1] [i_3] [i_3] [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_8 [(_Bool)1]))))));
                        arr_22 [i_1] [i_3] [(_Bool)1] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) > (((/* implicit */int) ((arr_7 [i_1] [(_Bool)1]) || (var_6))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_20 = ((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11)))) || ((((_Bool)0) || ((_Bool)1))));
                            var_21 *= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (1)))));
                            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_23 [i_1] [i_5] [i_4] [(signed char)13] [i_6] [i_4] [i_5])) : (((/* implicit */int) arr_5 [i_6]))))) ? (((/* implicit */int) ((var_1) || (arr_20 [i_3] [(signed char)7] [i_5] [(signed char)7])))) : (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [(signed char)13] [i_4] [i_4])) >> (((/* implicit */int) (signed char)17))))) && (((((/* implicit */int) arr_14 [i_5] [i_1])) == (((/* implicit */int) (signed char)5))))));
                        }
                        for (signed char i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_30 [i_1] [(_Bool)1] [i_3] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_18 [i_7] [(_Bool)1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (_Bool)0)))) : (((arr_26 [i_1] [i_3] [i_4] [(_Bool)1] [i_7]) ? (((/* implicit */int) arr_8 [(signed char)12])) : (((/* implicit */int) var_1))))));
                            var_24 = ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_6)))) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_2)))));
                        }
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_35 [i_1 - 1] [i_3] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_4] [i_5] [(signed char)18] [i_8])) : (((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116)))) : (((((/* implicit */int) arr_24 [i_5] [i_4] [i_1])) | (((/* implicit */int) var_10))))));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) arr_15 [i_3] [i_4] [i_8])) : (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-122))))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_3)) << (((/* implicit */int) arr_31 [i_5] [i_4] [i_3] [i_3] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)8)))))));
                    }
                } 
            } 
            arr_36 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))));
        }
    }
    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) >> (((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) - ((((((_Bool)1) || (((/* implicit */_Bool) (signed char)89)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) var_5))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_11))))))))))));
    var_28 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))) | (((((/* implicit */int) var_12)) | (((/* implicit */int) var_4)))))) ^ (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)112))))) ? (((((/* implicit */int) (signed char)-116)) & (((/* implicit */int) (signed char)-127)))) : (((((/* implicit */int) (signed char)3)) & (((/* implicit */int) (signed char)124))))))));
}
