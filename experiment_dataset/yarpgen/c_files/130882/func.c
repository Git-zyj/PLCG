/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130882
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
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max((var_5), (((/* implicit */short) (!((_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
                            arr_14 [i_0] [i_0] [i_4] [21U] [i_0] = ((/* implicit */int) arr_2 [i_2]);
                            arr_15 [i_4] [i_1] [i_2] = ((/* implicit */short) max((arr_6 [i_0] [i_1] [i_2]), (max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_2])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) ^ (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2868290464U)) & (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_5])) || (((/* implicit */_Bool) arr_10 [i_3 - 1])))))) | (var_7)))));
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-19))))), (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_3])), (var_8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_1] [i_2] [i_2] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))))))))));
                            arr_24 [i_0] [i_6] = ((/* implicit */_Bool) ((long long int) (signed char)-19));
                            arr_25 [i_0] [i_1] [i_0] [i_6] [i_6 - 1] [i_6 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18505))) & (7702641499808677138ULL))) | (((/* implicit */unsigned long long int) arr_22 [i_1] [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_6]))))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_3] [i_6 - 1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3 - 1] [i_1])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [(unsigned short)14])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3])) >> (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))))) : (((unsigned int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_2)))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((10744102573900874459ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3 + 2] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_3 + 2] [i_2])) ? (arr_12 [i_0] [i_3 + 2] [i_2]) : (arr_12 [i_0] [i_3 - 1] [i_2]))))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        arr_30 [i_1] = ((/* implicit */int) (~(max((((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_7] [i_7 + 1] [i_7 - 3] [i_7 - 3])) + (2147483647))) << (((((/* implicit */int) (signed char)26)) - (26)))))), (-3111676141816802391LL)))));
                        arr_31 [(_Bool)1] [i_7 - 2] = ((1950160828618936470LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-31);
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_18 = 7702641499808677132ULL;
                            var_19 ^= ((/* implicit */unsigned char) ((7702641499808677157ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2])) >> (((((((((/* implicit */int) (short)-26011)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (31453))))) - (481))))))));
                        }
                        arr_38 [i_0] [(unsigned short)18] = ((/* implicit */unsigned int) var_10);
                    }
                    var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
                    arr_39 [i_0] [(unsigned char)16] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26011)) || (((/* implicit */_Bool) 990868215))))), (max((15330622120991116240ULL), (((/* implicit */unsigned long long int) (unsigned char)55))))));
                    arr_40 [i_0] = arr_37 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
}
