/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138509
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_11)))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_5))))))) : (var_13)));
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_0 [i_0]))));
        arr_2 [i_0] = ((((/* implicit */_Bool) max((14927252938879789809ULL), (((/* implicit */unsigned long long int) (short)19265))))) ? ((+(((((/* implicit */_Bool) (unsigned short)13)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (((/* implicit */int) ((((/* implicit */_Bool) (short)19266)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)19266)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-19242))))) ? (((/* implicit */int) (unsigned short)27232)) : (((/* implicit */int) (short)-19267))))));
        arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((unsigned long long int) var_7)))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-63))))), ((~(arr_0 [i_1 + 1])))));
                arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) min((arr_0 [i_2 - 2]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-19271)), ((unsigned short)2408))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_18 [16] [i_3] |= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_0 [i_1 + 1]))))), (((unsigned char) arr_15 [(unsigned char)8] [i_2 - 1] [(unsigned short)8] [(unsigned short)8] [i_1] [i_1]))));
                            /* LoopSeq 3 */
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                var_23 |= ((unsigned short) ((((/* implicit */int) arr_14 [(signed char)6] [i_3 - 1])) + (((/* implicit */int) arr_14 [i_1] [i_3 - 1]))));
                                arr_22 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_2] [15] [i_2] [i_2])), (1509721024705339109ULL)))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(arr_17 [i_1] [i_1] [i_3] [i_4] [i_2])))))));
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_0)) == (var_1)))), (arr_7 [i_2])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1]))))) : (var_6)))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                            {
                                arr_27 [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_14)) + (((/* implicit */int) var_7))))));
                                arr_28 [i_1] [i_2] [i_2] [i_1] [i_6] [i_1] [i_1] = (+((+((+(arr_25 [i_1] [i_2] [6LL] [i_4] [i_6]))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) 1743385501)))));
                                arr_32 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_31 [i_1] [i_4] [i_3] [i_4] [i_7])) - (((/* implicit */int) var_14))))));
                                var_26 = ((/* implicit */signed char) var_6);
                            }
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_2 + 3] [i_3] [i_4])) ? (((((/* implicit */_Bool) var_2)) ? (((arr_0 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (1739669182)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [(unsigned char)15] [i_1 - 2] [i_1 + 1]))))))))));
                            arr_33 [i_2] [i_3 + 1] [(unsigned char)14] [i_2] [i_2] [i_2] = ((/* implicit */short) var_4);
                            var_28 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 2])) ? (((/* implicit */int) arr_14 [i_3 - 2] [i_2])) : (((/* implicit */int) arr_12 [i_2 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
