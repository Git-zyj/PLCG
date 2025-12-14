/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169018
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_12))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((+(((/* implicit */int) var_13)))), ((+(((/* implicit */int) arr_0 [i_0]))))))), ((((-(var_9))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */short) max(((-(((/* implicit */int) arr_6 [i_4] [i_2])))), (((/* implicit */int) max((arr_13 [(short)21] [i_2] [i_2]), (((/* implicit */signed char) arr_7 [i_2])))))));
                            arr_17 [i_4 - 1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((/* implicit */unsigned long long int) arr_14 [i_0])), (((((/* implicit */_Bool) arr_8 [i_0] [18LL])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_5 [i_3] [i_3])))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max((468232037351874265ULL), (((/* implicit */unsigned long long int) (signed char)127)))) - (arr_5 [i_3 + 2] [i_4 - 1])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)127))) : (4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)122))))))), (4294967295U)));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            arr_27 [i_0] [i_5 + 1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0] [(signed char)17]), (arr_6 [i_5 - 3] [i_1])))) ? (((/* implicit */unsigned long long int) min((((arr_11 [i_0] [i_1] [i_6] [i_7]) ? (arr_16 [i_0] [i_1] [i_5 - 1] [i_6] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) var_3))))) : (max((arr_5 [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_5] [i_6] [i_0]))))));
                            arr_28 [i_0] [i_0] [i_0] [i_1] [(signed char)18] [i_6] [i_7] = (signed char)122;
                        }
                    } 
                } 
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_3 [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
                var_22 = ((((/* implicit */int) max((arr_19 [i_1] [i_5 + 1] [i_0]), (arr_19 [i_1] [i_5 - 1] [i_0])))) | (((/* implicit */int) arr_11 [i_1] [i_5 - 3] [18U] [i_5 - 2])));
            }
            for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                arr_32 [i_0] [i_0] [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) max((arr_22 [i_0] [i_1] [i_8 + 1] [i_8]), (((/* implicit */short) arr_14 [i_0]))))), (min((((/* implicit */int) arr_6 [i_8] [i_1])), (var_10))))), (((((/* implicit */_Bool) (short)18220)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_1] [i_8 + 1])) : ((+(((/* implicit */int) (signed char)122))))))));
                arr_33 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((arr_9 [i_8] [i_8] [i_8] [i_8]) | (((/* implicit */unsigned long long int) var_10)))) < (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))) | (arr_16 [i_8 - 1] [12U] [i_1] [i_8] [i_0])));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0] [i_1])))) ? (max((((/* implicit */unsigned long long int) max((arr_14 [i_0]), (((/* implicit */unsigned char) arr_8 [i_0] [i_1]))))), ((-(arr_9 [i_0] [i_1] [i_1] [i_8]))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) arr_20 [i_0] [i_1] [17LL] [i_8 - 1]))))));
            }
            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) 2598850634475327392ULL)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_6))))));
        }
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            arr_37 [i_9] &= ((((((/* implicit */_Bool) arr_19 [i_0] [i_9] [i_9])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))) | (((/* implicit */int) arr_22 [i_0] [i_9] [i_0] [i_9])));
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_34 [(unsigned short)19])))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)12))))));
            var_26 = arr_35 [i_0];
        }
    }
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        arr_41 [i_10] = ((/* implicit */int) min((arr_39 [i_10]), (((/* implicit */unsigned long long int) arr_40 [i_10]))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_10])))))));
        arr_42 [i_10] [i_10] |= ((/* implicit */unsigned long long int) var_11);
    }
    var_28 = ((/* implicit */unsigned int) var_10);
}
