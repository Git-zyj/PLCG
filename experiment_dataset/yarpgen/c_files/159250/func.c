/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159250
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)30522)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_10 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0]))))))) >= (((/* implicit */long long int) (+(((/* implicit */int) (short)15894)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (arr_13 [0U] [i_1] [0U] [i_3] [0U])))))) < (((/* implicit */int) arr_7 [i_4 - 2] [i_1] [i_1])))))));
                                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (var_5))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_0])))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] |= ((/* implicit */short) ((long long int) arr_0 [i_0]));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) max((arr_9 [i_5] [i_1] [i_2] [i_5]), (((/* implicit */long long int) ((short) arr_1 [i_1])))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_2 + 3] [i_5] [i_6 + 2] [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (4106750925U) : (((/* implicit */unsigned int) 364691385)))));
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_2 + 4] [i_6 + 2] [i_2 + 4] [i_1]))) / (arr_16 [i_6 + 2] [i_2 + 4] [i_2 + 4] [i_2 + 4])));
                            var_21 &= ((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] [i_6 + 2]);
                        }
                        for (signed char i_7 = 3; i_7 < 14; i_7 += 4) 
                        {
                            var_22 = ((signed char) max((((/* implicit */int) max((arr_22 [i_0] [i_1] [i_0] [i_0] [i_7]), (((/* implicit */unsigned char) var_12))))), ((-(((/* implicit */int) arr_11 [i_7] [i_7]))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((min((((((/* implicit */int) var_1)) % (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) arr_6 [i_0])))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-15894)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (short)-30522)))));
                            var_26 = ((/* implicit */short) ((((((((/* implicit */_Bool) 2005150561554724525ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8]))) * (((/* implicit */long long int) ((/* implicit */int) min(((signed char)12), (arr_30 [i_8]))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20361)) + (((/* implicit */int) var_1))))) ? (524256U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_8] [i_8] [i_5] [i_2 + 1] [i_1] [i_0])) % (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_2 + 4] [i_0] [i_8] [i_1])))) | (max((((((/* implicit */_Bool) arr_8 [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_8] [i_1] [i_1] [i_5] [i_5])))), ((+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_2 + 3] [i_2 - 2] [i_5] [i_0]))))))));
                            var_28 |= ((/* implicit */short) arr_10 [i_2 - 2]);
                            var_29 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_21 [i_8] [i_5] [i_2] [i_0] [i_1] [i_0])))))) * (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_5] [i_5] [i_8]))))))), (((/* implicit */long long int) ((arr_8 [i_1] [i_2 + 3] [i_2 - 2] [i_2 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)7), ((signed char)-12))))))))));
                        }
                    }
                    for (short i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)56))));
                        var_31 = ((/* implicit */unsigned char) ((short) arr_9 [i_0] [i_0] [i_0] [i_0]));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_9 + 3])), (4294967279U)))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) var_13)) - (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_9] [i_2] [i_9] [i_9 + 1])))))))) : (min((((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])), (((unsigned int) arr_13 [i_9] [i_9] [i_2 + 2] [i_1] [i_9]))))));
                    }
                    var_33 = ((/* implicit */long long int) max((var_14), (((/* implicit */short) (signed char)-1))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_15))));
}
