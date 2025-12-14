/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124315
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [2U] [i_0] = ((((int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 1123835292U))))) & ((+(((/* implicit */int) arr_0 [i_0])))));
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) & (1123835292U)));
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1123835298U))))) >= (((/* implicit */int) (_Bool)0))))), ((((-(var_17))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65529)))))));
        var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(arr_3 [i_1])));
        arr_6 [i_1] = ((/* implicit */long long int) min((((unsigned int) 1123835307U)), (((/* implicit */unsigned int) ((int) min((33554304U), (((/* implicit */unsigned int) (unsigned char)243))))))));
        var_23 = ((/* implicit */long long int) var_10);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_16))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_25 = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) + (2147483647))) << (((((/* implicit */int) (signed char)1)) - (1)))))) ? ((+(((/* implicit */int) (signed char)-118)))) : (1498569338));
        var_26 = ((((/* implicit */int) arr_0 [i_2])) ^ (((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_0 [8LL])))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_5] [i_5] [i_6])) || (((/* implicit */_Bool) 226424293U))))) < (((/* implicit */int) (signed char)22)))))));
                                var_28 = ((/* implicit */unsigned short) max((((var_0) ? (((/* implicit */long long int) arr_10 [i_2] [i_4] [i_5])) : (var_6))), (((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3] [i_2]))));
                                var_29 -= arr_9 [i_2] [i_2];
                            }
                        } 
                    } 
                    var_30 += ((/* implicit */unsigned int) ((-8931391157705175933LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    var_31 = ((/* implicit */int) max((((((/* implicit */_Bool) 1123835311U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [(short)11] [i_3] [(signed char)3] [(signed char)3]) != (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2] [i_4])))))) : (((unsigned int) var_7)))), (((/* implicit */unsigned int) arr_4 [i_2]))));
                    var_32 -= ((/* implicit */signed char) ((unsigned int) (+(arr_10 [i_4] [10U] [i_4]))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)33020)) ? (1123835304U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) | (max((((/* implicit */long long int) arr_8 [i_2])), (var_14)))))));
                }
            } 
        } 
        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1123835292U))))) | (((((/* implicit */int) arr_11 [0LL])) ^ (((/* implicit */int) var_0))))));
    }
    var_35 += ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) : ((-(((((/* implicit */_Bool) 1123835299U)) ? (((/* implicit */unsigned int) -1498569315)) : (0U)))))));
}
