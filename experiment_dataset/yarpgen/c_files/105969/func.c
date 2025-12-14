/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105969
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)56671))))))), (var_8)));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1])))), (((unsigned long long int) arr_4 [i_1] [i_1]))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 187260946)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17690))) : (4082232445894953489LL)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_1])) + (var_10))) & (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (var_10)))))) : ((+(((((/* implicit */_Bool) 528482304)) ? (4294967295U) : (1812752426U)))))));
            arr_12 [i_1] [3ULL] = ((/* implicit */unsigned short) arr_10 [10] [i_1]);
            var_15 = ((/* implicit */signed char) (((!(((var_8) >= (((/* implicit */long long int) 2482214870U)))))) ? (var_4) : (var_10)));
            var_16 = min(((-((-(((/* implicit */int) arr_2 [i_1])))))), (arr_5 [i_1]));
        }
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -696376295)) ? (9223372036854775807LL) : (-4082232445894953481LL)));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                arr_18 [i_1] [i_1] = arr_17 [i_1] [i_3] [i_3] [i_1];
                var_18 = ((/* implicit */signed char) arr_15 [i_4 + 1]);
            }
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_2))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_24 [i_6] [i_5] [i_1] [6LL] [i_1] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (signed char)114)), (2482214894U))));
                    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_6]))))) ? (((((/* implicit */_Bool) arr_22 [i_1] [i_5] [i_5] [i_1])) ? (arr_17 [i_1] [i_3] [i_5] [i_6]) : (((/* implicit */unsigned long long int) arr_14 [i_5])))) : (((/* implicit */unsigned long long int) ((int) arr_2 [i_3]))))), (((/* implicit */unsigned long long int) arr_5 [i_6]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_21 = min((((/* implicit */int) (short)-2779)), (arr_19 [i_1] [i_5] [i_6]));
                        arr_29 [i_1] [i_1] [9] [i_1] [i_7] = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-99))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_32 [(signed char)1] [i_3] [i_3] [i_1] [i_8] = ((/* implicit */unsigned long long int) arr_23 [i_1] [i_1]);
                        var_22 = ((/* implicit */long long int) arr_9 [i_5] [(short)11]);
                        arr_33 [i_3] [i_3] [i_1] = ((/* implicit */int) arr_15 [i_1]);
                    }
                    for (int i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) min((arr_0 [i_9 + 2] [i_9 + 1]), (((/* implicit */long long int) arr_30 [i_3] [i_9 + 3] [i_9] [i_9] [i_9 - 1] [i_9 + 4]))))) ? ((-(((/* implicit */int) arr_30 [i_3] [i_9 + 4] [i_9 + 4] [i_9] [i_9 + 2] [i_9 + 4])))) : (((/* implicit */int) ((-696376276) >= (((/* implicit */int) (unsigned short)32768))))));
                        arr_36 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_26 [i_6] [i_3] [i_3] [i_3] [1LL] [i_6] [i_5]);
                    }
                    arr_37 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) 0);
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    arr_42 [i_5] [8LL] [i_5] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-99)) + (((/* implicit */int) (unsigned short)52451))))), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_26 [i_10] [i_5] [i_3] [(signed char)8] [i_3] [i_1] [i_1])))))));
                    var_24 = ((/* implicit */long long int) arr_26 [i_1] [(unsigned short)7] [i_10] [(unsigned short)7] [i_3] [i_3] [i_10]);
                    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_41 [i_1] [i_1] [i_1] [i_1])), (arr_20 [i_10] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_30 [i_1] [4U] [i_5] [i_1] [i_1] [i_1])) : ((+(arr_19 [i_3] [i_5] [(unsigned short)7])))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_48 [i_1] [(_Bool)1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (var_11) : (((/* implicit */int) var_0))));
                        var_26 += ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) (unsigned short)1817)))))))), (((max((var_8), (((/* implicit */long long int) (unsigned short)9224)))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))));
                        var_27 = max((((int) arr_35 [(unsigned short)6] [i_11] [i_1] [(unsigned short)6] [i_12] [i_3] [(unsigned short)6])), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        var_28 = ((/* implicit */int) arr_15 [i_3]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_29 |= ((/* implicit */short) arr_28 [i_1] [i_1] [i_3] [i_3] [i_3] [i_11] [i_13]);
                        var_30 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)9224)), (1812752426U)));
                        var_31 = ((/* implicit */int) (_Bool)1);
                        arr_53 [i_1] [i_3] [i_5] [2LL] [2LL] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_3] [i_5]);
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3300)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)96))));
                    var_33 = 15735753492013174320ULL;
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_43 [(unsigned short)10] [(unsigned short)10]))));
                }
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_27 [i_1] [(signed char)11] [i_1] [i_1] [9LL] [9LL]), (((/* implicit */long long int) (short)-14010))))) ? (((/* implicit */int) (signed char)114)) : (arr_52 [i_5] [i_3] [0U] [i_5] [i_3] [i_1] [i_5]))))));
            }
            arr_54 [i_1] [i_3] [i_3] = ((/* implicit */signed char) (unsigned short)16099);
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1] [i_3] [i_1])) && (((/* implicit */_Bool) var_10))))) : (arr_5 [i_1])))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (unsigned short)36733)))) : (((int) min((((/* implicit */int) (unsigned short)0)), (var_10))))));
        }
    }
    var_37 = var_11;
}
