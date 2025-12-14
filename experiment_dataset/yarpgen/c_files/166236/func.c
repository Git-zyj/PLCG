/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166236
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
    var_14 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (unsigned char)213)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) % (1067007707U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [12U])), (3227959577U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (1067007703U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)13]))))))) : (max((((((/* implicit */_Bool) -5653333782176187683LL)) ? (1067007707U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (1633249366U))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 1]))) ? (((((/* implicit */_Bool) (signed char)96)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(short)8])) != (arr_7 [i_0] [i_0]))))))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)6)))))));
                    arr_9 [i_0 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_0 [i_0 - 1])))));
                    var_19 = arr_3 [i_1];
                }
                for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    arr_12 [(short)10] [(unsigned char)10] [i_2 - 1] [i_4 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)-25477))) < (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_2 [i_2 - 2])) : (((/* implicit */int) arr_1 [i_1 - 2]))))));
                    arr_13 [(short)0] [(short)0] [(short)0] &= ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_20 = ((/* implicit */_Bool) var_6);
                    var_21 = min((((/* implicit */unsigned long long int) (unsigned char)6)), (11799644947636646327ULL));
                }
                arr_14 [i_0] [i_1] [9U] [i_1] = ((/* implicit */unsigned long long int) min((((((((-163576830) * (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_0 + 1] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) -163576829)))) - (155422300U))))), ((+(((/* implicit */int) ((_Bool) 63ULL)))))));
            }
            /* vectorizable */
            for (unsigned short i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (short)508)))));
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0 + 3] [i_5 - 1] [i_1 + 2] [i_1 + 1]))));
                var_24 -= ((/* implicit */unsigned short) var_9);
            }
            /* vectorizable */
            for (short i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                arr_21 [i_0] [i_0] [i_6 + 2] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [(unsigned char)9])) ? (-1916262581) : (((/* implicit */int) arr_4 [i_0])))));
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)-23915))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
                arr_23 [i_6 + 2] [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_0 + 3]));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255)))))));
            }
            arr_24 [(unsigned short)2] = ((/* implicit */signed char) (-(max((arr_8 [i_0] [i_0] [i_1 - 1] [i_1] [(_Bool)1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        {
                            var_26 = (-(((((/* implicit */_Bool) arr_31 [i_1 - 2])) ? (arr_16 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_31 [i_1 - 2]))));
                            arr_36 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned char)6)))))))));
                            var_27 = (-(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_32 [i_7] [i_1] [i_1] [i_8] [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_11 [i_0] [13U] [i_0] [i_0] [i_9]))))));
                            var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)45)) ? (-163576827) : (((/* implicit */int) (unsigned char)245)))), ((-((-(((/* implicit */int) arr_1 [(_Bool)1]))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_29 = ((/* implicit */_Bool) ((((long long int) 18446744073709551590ULL)) * (((/* implicit */long long int) (((((_Bool)1) ? (var_5) : (((/* implicit */int) var_1)))) & (((/* implicit */int) ((_Bool) var_4))))))));
    var_30 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_2))))), (var_10))) * (max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551598ULL)))))));
    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((3227959608U) < (9U)))), (18446744073709551595ULL)))) ? (((/* implicit */int) ((((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) <= (((var_2) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19181)))))))) : (((((/* implicit */int) var_0)) + ((~(((/* implicit */int) (short)32767))))))));
}
