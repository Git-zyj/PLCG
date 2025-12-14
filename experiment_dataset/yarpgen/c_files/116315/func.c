/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116315
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 117440512)) ? (((/* implicit */int) (short)29049)) : (((/* implicit */int) (signed char)121))));
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned char)190)), (2147483648U))), (((/* implicit */unsigned int) var_13))))) ? (max((arr_3 [i_1 + 3]), (arr_3 [i_1 - 1]))) : (((/* implicit */int) arr_4 [i_1]))));
                arr_6 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((((arr_8 [i_0] [i_1 - 2] [i_2 + 4] [i_1]) + (9223372036854775807LL))) >> (((196608) - (196571))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_0] [i_2 + 2] [i_2 + 2])) / (((/* implicit */int) arr_9 [i_1] [i_0] [i_2 + 2] [i_3])))))))) : (((/* implicit */short) ((((((((arr_8 [i_0] [i_1 - 2] [i_2 + 4] [i_1]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((196608) - (196571))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_0] [i_2 + 2] [i_2 + 2])) / (((/* implicit */int) arr_9 [i_1] [i_0] [i_2 + 2] [i_3]))))))));
                            arr_12 [i_1] [2U] [i_3] |= ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) arr_9 [(short)2] [i_1 + 1] [i_2] [i_3])), (arr_0 [i_3]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [2U]))))), (((-890853042745204219LL) < (-9223372036854775798LL)))));
                            var_18 = ((unsigned char) (~(((14866017658172153541ULL) >> (((((-2147483635) - (-2147483599))) + (52)))))));
                            arr_13 [i_0] [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) >= (5511261242692921194ULL)));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) 1152921504606846976LL)) ? (max((3444086185U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8076))) <= (arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_1])))))) : (((/* implicit */unsigned int) 189392696))));
                                var_20 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_3 [i_1 - 1])) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
                            }
                            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                arr_18 [i_1] [i_1] [i_1] [(signed char)2] [i_3] [9ULL] [i_5] = ((/* implicit */signed char) ((short) min((arr_8 [2] [2] [i_2] [i_1]), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (4294836224U)))))));
                                arr_19 [(signed char)4] [(signed char)4] [i_5] [(signed char)4] [i_5] |= ((/* implicit */long long int) max((((((/* implicit */int) arr_9 [i_5] [i_0] [i_1 + 3] [i_2 + 3])) * (((/* implicit */int) arr_9 [i_5] [i_1] [i_1 + 3] [i_2 - 1])))), (((/* implicit */int) (unsigned char)252))));
                                arr_20 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] = ((/* implicit */int) min((arr_1 [i_1 - 1]), (((((/* implicit */unsigned long long int) var_9)) % (arr_1 [i_1 - 3])))));
                            }
                            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_1])) || (((((/* implicit */_Bool) arr_22 [i_1 - 3] [(unsigned char)3] [i_1])) || (((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_1])))))) || (((/* implicit */_Bool) (unsigned char)52))));
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)145))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_3);
}
