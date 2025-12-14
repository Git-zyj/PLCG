/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135044
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 16975040351311115768ULL);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_17 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(var_1)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((arr_1 [(unsigned short)2]), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16975040351311115780ULL)) ? (1471703722398435816ULL) : (1471703722398435835ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_0 [i_1])) : (arr_4 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))))), ((+(arr_1 [i_1]))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((1471703722398435864ULL), (arr_1 [(_Bool)1])))))) && (((/* implicit */_Bool) (+((-(arr_3 [i_0] [i_0]))))))));
            var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_7 [(signed char)4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_7), (var_10)))), (arr_4 [i_0] [i_2])))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)27526))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((1471703722398435816ULL), (arr_3 [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_21 &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3])) && (((/* implicit */_Bool) var_0)))));
                var_22 += ((/* implicit */short) arr_6 [i_2]);
                var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-31023)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (signed char)-42)))));
            }
        }
        var_24 = ((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned short)16] [(unsigned short)16]);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) -660857841)), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_10 [13U] [i_5] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */long long int) 4109994064U)) != (arr_5 [i_4]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 4; i_7 < 13; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? (((/* implicit */int) arr_21 [i_6] [i_4] [i_6] [i_6] [i_7 - 1] [i_6] [i_7 + 3])) : (((/* implicit */int) ((arr_20 [i_0] [i_4] [i_5] [i_4] [i_5]) > (((/* implicit */unsigned long long int) arr_5 [i_6])))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6] [i_7])) ? (((/* implicit */int) arr_14 [i_0] [i_7])) : (((/* implicit */int) arr_14 [i_0] [i_5])))))));
                            arr_23 [i_4] = ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_14 [i_0] [i_4])));
                        }
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_15 [i_0] [i_4] [i_4] [i_4]))));
                        var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_17 [i_6] [i_4] [i_0] [i_4] [i_4] [i_0])) : (((/* implicit */int) arr_8 [i_6] [(unsigned short)2] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) > (-1061144978518745570LL))) ? (max((((/* implicit */unsigned long long int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])), (((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_1 [1]) : (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_8]))))))));
        var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))) : (arr_6 [i_8]))) << (((arr_3 [i_8] [i_8]) - (782097699325387110ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_5 [i_8]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_16 [(unsigned char)4] [(unsigned char)4] [i_8] [(unsigned char)4] [i_8] [i_8]))))))))) : (max((11111612489437953844ULL), (((/* implicit */unsigned long long int) -999365213))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
        {
            var_30 ^= ((/* implicit */int) var_6);
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_10] [i_10 + 1] [i_10 + 1])) == (((/* implicit */int) arr_30 [i_9] [i_10 - 1] [i_10]))));
            arr_31 [i_9] = ((/* implicit */unsigned int) arr_30 [i_10 + 1] [i_10 + 1] [i_9]);
        }
        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) ((unsigned int) arr_28 [i_11 - 1]));
            arr_36 [i_11] [i_11 + 1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_33 [i_9] [i_9] [i_9]))))));
        }
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((arr_32 [i_9] [i_9]) < (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])))))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9] [(unsigned short)13] [i_9])) ? (var_2) : (((/* implicit */unsigned long long int) arr_32 [i_9] [i_9]))))) ? (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])) : (((((/* implicit */_Bool) arr_33 [i_9] [(short)7] [i_9])) ? (((/* implicit */int) arr_27 [i_9])) : (((/* implicit */int) arr_30 [(unsigned short)3] [18U] [i_9]))))));
    }
    var_35 = ((/* implicit */long long int) var_2);
}
