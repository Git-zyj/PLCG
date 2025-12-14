/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114106
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) min((arr_0 [i_0] [i_1]), (arr_1 [i_0] [(unsigned short)1])))))));
                                var_10 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_2 + 1] [i_0]), (((/* implicit */short) arr_4 [(short)5])))))) - (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)10] [(_Bool)1]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))));
                                var_11 = min((((/* implicit */long long int) arr_11 [i_4])), (((((/* implicit */_Bool) min(((unsigned short)42909), ((unsigned short)2960)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)5] [(unsigned short)5] [i_2 - 1] [(unsigned short)1]))) : ((-(arr_2 [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [i_0] [(short)10] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_5] [i_1] [i_7])) > (((/* implicit */int) arr_16 [i_0])))))) : (arr_23 [9ULL] [(short)8] [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7])))) ? (max((((((/* implicit */_Bool) arr_5 [i_6] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [9ULL] [9ULL] [i_7 - 1]))) : (var_4))), (((/* implicit */long long int) (!(arr_4 [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1])))));
                                var_13 *= ((/* implicit */signed char) arr_1 [i_0] [i_5]);
                                var_14 |= ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1]);
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((arr_23 [i_7] [i_7 + 1] [(unsigned short)0] [i_7 - 3] [i_7] [i_7 - 1] [i_7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_19 [(unsigned char)11] [(unsigned char)11] [i_5] [i_5] [(unsigned char)11] [i_7 - 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)62574), (((/* implicit */unsigned short) (short)-1))))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [(short)6] [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_0 [i_0] [(short)6]))))))))))));
                                var_16 = ((/* implicit */long long int) arr_8 [i_7 + 1] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((arr_6 [i_0] [i_8]), (max((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_8]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_33 [(unsigned char)3] [i_1] [i_9] [(short)6] [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) (-(-64516110138826487LL)));
                                arr_34 [i_8] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)8] [i_9] [i_10])) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_16 [i_8])))))))) ? (((long long int) (short)512)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_9])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_8])))))));
                                var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_8] [(unsigned short)1] [1ULL]))))) - (min((arr_26 [i_0] [i_0] [i_0] [i_10]), (((/* implicit */long long int) var_5)))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_8), (((/* implicit */unsigned long long int) arr_5 [8LL] [i_8] [i_9])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_9] [i_10])))))) ? (((((/* implicit */_Bool) max(((unsigned short)2961), ((unsigned short)2965)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_9])), (var_0))))) : (max((((((/* implicit */_Bool) arr_25 [(unsigned short)4])) ? (arr_20 [i_8] [i_1] [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * (18014398509481983LL))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))) >> (((((arr_20 [i_0] [(unsigned short)3] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)10] [i_1] [(unsigned short)10]))))) - (69506626931891ULL))))) : (((/* implicit */int) ((short) ((arr_32 [i_0] [i_1] [(short)9] [(short)9] [i_1] [1LL] [(unsigned short)5]) <= (arr_20 [i_0] [i_1] [i_8]))))))))));
                }
                arr_35 [i_0] [5LL] [i_1] = ((/* implicit */unsigned char) max((max((var_1), (arr_23 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_0] [(unsigned short)3] [i_0]))), (((/* implicit */unsigned long long int) max(((unsigned short)2969), ((unsigned short)42921))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((arr_3 [i_0] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_1] [(unsigned short)8])), (arr_7 [i_0] [(unsigned char)2] [8LL] [i_1]))))))) + (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [(short)0] [(short)1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [8LL] [i_1] [i_1])) && (arr_4 [i_0]))))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((var_6), (((/* implicit */long long int) var_3)))), (max((((/* implicit */long long int) var_9)), (var_6)))))) ? (var_8) : (((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))))))));
}
