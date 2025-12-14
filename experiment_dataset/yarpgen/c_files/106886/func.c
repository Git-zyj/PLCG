/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106886
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
    var_11 |= ((/* implicit */signed char) max((((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */int) min((var_8), (var_8)))) + (42))))), ((+(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1])))) << (((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_2]))))));
                    arr_8 [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    arr_9 [i_0] [(signed char)7] [(signed char)3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_6)))), (((((((/* implicit */int) (signed char)-74)) + (2147483647))) << (((((/* implicit */int) (signed char)14)) - (14)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)39))))), (var_7)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0] [i_2]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(signed char)11]))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2])))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_2])) * (((/* implicit */int) (signed char)118))))))))));
                            arr_16 [i_3] |= (signed char)92;
                            arr_17 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) var_0)) | ((+(((/* implicit */int) (signed char)-124)))))), (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)126))))));
                        }
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            arr_22 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)2] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_5])) : (((/* implicit */int) (signed char)126))));
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_14 [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 1]), (var_9)))) + (2147483647))) >> (((/* implicit */int) max((arr_14 [i_5 + 2] [(signed char)7] [i_5] [i_5 + 1] [i_5 + 1]), (arr_14 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1]))))));
                            arr_24 [i_2] [i_1] [i_2] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) max(((signed char)-33), ((signed char)121))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1])) : ((+(((/* implicit */int) (signed char)12)))))) : (((((/* implicit */int) (signed char)89)) % (((/* implicit */int) (signed char)124))))));
                        }
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_3] [(signed char)14] = var_9;
                            arr_29 [i_0] = ((signed char) (+(((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_2]))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)60))))), (arr_4 [i_0] [i_2])))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_3] [(signed char)1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_3] [i_6])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_4))))));
                            arr_31 [i_0] [i_1] [i_0] [i_6] [i_6] = (signed char)-40;
                        }
                    }
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        arr_35 [i_7 + 1] [i_2] [i_2] [i_0] |= (signed char)21;
                        arr_36 [i_0] [i_7] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_32 [i_7 + 1] [i_7] [(signed char)3] [i_7] [(signed char)4] [i_7 + 1])))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-37))))));
                    }
                    for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        arr_39 [i_0] [(signed char)14] [i_2] [i_8] = max(((signed char)-68), ((signed char)7));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            arr_43 [i_1] [(signed char)0] [i_2] [i_2] [i_2] [(signed char)0] = var_6;
                            arr_44 [i_0] = ((signed char) (signed char)91);
                            arr_45 [i_0] [i_1] [i_1] [i_8] [i_0] = var_3;
                            arr_46 [i_0] [i_0] [i_0] = max((min((arr_4 [i_0] [i_8 + 3]), (max(((signed char)-1), ((signed char)5))))), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_8))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [(signed char)6] [(signed char)1] [i_1])))))))));
                        }
                        for (signed char i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            arr_49 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8 - 1] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) arr_6 [i_8 + 3] [i_8 - 1] [i_0]))));
                            arr_50 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_8 + 3] [i_10 + 2])) : (((((/* implicit */_Bool) arr_37 [i_0] [(signed char)7] [i_8] [i_8] [i_0])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_40 [i_0] [i_1] [i_2] [i_8] [i_10])))))) ^ ((-(((/* implicit */int) max(((signed char)95), ((signed char)-26))))))));
                            arr_51 [i_0] [i_0] [i_2] [i_8] [i_10 + 2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_2] [i_8 + 2] [i_8 + 3] [i_10 + 1])) ? (((/* implicit */int) arr_21 [i_8 + 2] [(signed char)11] [i_8 + 3] [i_10 - 2] [(signed char)11] [i_10 + 3])) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_8 - 1] [i_10 + 2])))), (((/* implicit */int) var_0))));
                        }
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    arr_55 [i_0] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1]))))) + (((((/* implicit */int) arr_18 [i_11] [i_11] [i_11 - 2] [(signed char)3] [i_11 - 2] [i_11 + 1])) << (((/* implicit */int) arr_18 [(signed char)5] [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 2]))))));
                    arr_56 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-39))));
                }
            }
        } 
    } 
    var_12 = var_9;
}
