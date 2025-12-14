/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186291
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))) == (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [i_3] [5U] [5U])) / (arr_15 [i_0] [i_1] [i_4] [i_3] [i_4])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_7 [i_3 + 1] [i_1])))))));
                                arr_16 [i_0] [18ULL] [i_0] [(unsigned char)22] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [19U] [i_2] [i_3 - 1] [i_0 + 1])) << (((long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (arr_10 [i_0] [i_0] [(short)9]))))));
                                arr_17 [i_4] [i_4] [(short)0] [i_2] [i_4] [i_4] = arr_8 [i_4] [i_3] [i_2] [i_0];
                                arr_18 [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [20ULL] [i_2] [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_13 [i_4] [i_1] [9ULL] [(_Bool)1] [i_1]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) (signed char)119))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_26 [i_5] [i_5] = ((/* implicit */int) var_8);
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                            {
                                arr_31 [i_7] [i_5] [i_5] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)76))))) ? (min((1337084151713322605ULL), (((/* implicit */unsigned long long int) (signed char)119)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned short)41473)) : (((/* implicit */int) arr_25 [18LL]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)244), (((/* implicit */unsigned char) arr_1 [i_6])))))))))));
                                arr_32 [i_0 - 2] [20LL] [19ULL] [i_5] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_5] [i_0 + 2] [i_5 + 1] [i_5 + 2]))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_21 [i_5 + 1])) <= (((/* implicit */int) (signed char)-10))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0 - 2] [i_5 + 2])))))));
                                arr_33 [i_0] [i_1] [(_Bool)1] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9)))))))));
                            }
                            arr_34 [i_5] [i_1] [i_5 - 1] [i_6] = ((/* implicit */long long int) (((((+(((/* implicit */int) (signed char)-10)))) + (2147483647))) << ((((+(((/* implicit */int) ((((/* implicit */int) (signed char)1)) != (((/* implicit */int) (signed char)114))))))) - (1)))));
                            /* LoopSeq 1 */
                            for (long long int i_8 = 3; i_8 < 21; i_8 += 4) 
                            {
                                arr_38 [i_0] [i_1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) max((max((max((((/* implicit */int) (unsigned char)48)), (-31977020))), (((((/* implicit */int) (unsigned short)24063)) >> (((((/* implicit */int) var_10)) - (14228))))))), (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)114)) <= (((/* implicit */int) (signed char)-51))))) : (((((/* implicit */_Bool) arr_28 [i_6] [i_1] [i_5] [i_1])) ? (((/* implicit */int) arr_20 [i_5] [(_Bool)1] [(unsigned char)3] [i_5])) : (((/* implicit */int) var_0))))))));
                                arr_39 [i_8] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */short) (~((((-(((/* implicit */int) (unsigned short)41473)))) & (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                                arr_40 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */short) ((262143U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))));
                            }
                        }
                    } 
                } 
                arr_41 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)116)))) >= (max((((/* implicit */unsigned int) (signed char)-48)), (var_2))))) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)97)), (min((((/* implicit */unsigned char) arr_1 [12])), (var_7))))))));
                arr_42 [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_0 - 3] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_30 [i_1])))))) & ((-(8493952471199345299ULL))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_3);
}
