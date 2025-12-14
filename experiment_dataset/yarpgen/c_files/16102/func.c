/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16102
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)44666)) ? (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_1] [i_1]))) ? (((((/* implicit */_Bool) var_6)) ? (536870656U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44666))))) : (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44672))))))));
                var_17 ^= ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 18422285382046386078ULL))))) | (var_11)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (+(min((((var_7) & (((/* implicit */long long int) arr_3 [i_0] [i_2] [i_3])))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_6 [12U] [i_0] [i_2])))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) var_1);
                                var_20 ^= ((/* implicit */unsigned char) arr_11 [i_2]);
                            }
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) -1258131508)) < (9223372036854775807LL)));
                                var_22 ^= ((/* implicit */unsigned short) ((((arr_12 [2LL] [i_0 - 1] [i_2] [i_3 + 1] [i_5] [i_5]) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_2] [i_3 + 1] [i_5] [0])) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_3] [i_3 + 1] [i_3] [i_5 + 1])))) + (((((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_3] [i_3 + 1] [i_5] [i_5])) % (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_3 + 1] [i_3 - 1] [i_5 + 1]))))));
                                var_23 = ((/* implicit */int) min((var_23), (arr_16 [i_0])));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])) >= (var_7))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_12)))))))), (min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1]))))));
                                arr_18 [i_3] [i_0] [i_0] [(unsigned short)10] = ((((unsigned int) min((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_5] [i_5]), (var_4)))) >= (max((((/* implicit */unsigned int) (unsigned short)20870)), (2484623921U))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (+(arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_6])));
                                var_24 = ((/* implicit */_Bool) ((((arr_16 [i_0 - 1]) >= (arr_16 [i_0 - 1]))) ? (((((/* implicit */_Bool) -1775965685384346739LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22004))) : (var_5))) : (((((/* implicit */_Bool) arr_16 [i_0 - 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            }
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)17)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 3878937718U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 4; i_7 < 12; i_7 += 4) 
                {
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (_Bool)1))));
                            var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_7 - 4] [i_8 + 1]))) > (var_16))) ? (((/* implicit */int) ((88949172180884198ULL) > (((/* implicit */unsigned long long int) 9223372036854775807LL))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_1] [i_7] [i_8] [i_8 + 2])) : (((/* implicit */int) arr_26 [i_1] [i_8] [i_8] [i_8 + 1]))))));
                            arr_27 [i_0 - 1] [i_0] [i_8 + 2] [i_0] = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) -4890987082876090035LL)) && (((/* implicit */_Bool) (unsigned char)132))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                            {
                                arr_31 [i_0] [i_1] [i_7 - 2] [i_8 - 1] [i_9] = ((/* implicit */int) ((_Bool) var_13));
                                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((88949172180884179ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_0 - 1] [i_1] [i_8] [i_0]))))))))));
                                var_29 ^= ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44666)))))) / (arr_2 [i_0 - 1]))) << (((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_1] [i_9] [i_0 - 1] [i_1] [i_7 - 3] [i_9])), (var_10)))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(_Bool)1] [i_1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [(unsigned char)9] [i_7]))) : (var_13))))) - (18446744071579661839ULL))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 ^= ((/* implicit */long long int) var_15);
}
