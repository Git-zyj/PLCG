/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179487
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((_Bool) ((long long int) arr_3 [i_0] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) ((((unsigned long long int) 9223372036854775807LL)) | (((/* implicit */unsigned long long int) max((1296473979), (((/* implicit */int) var_1)))))));
                    var_16 = (i_2 % 2 == 0) ? (((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)9305))))) << (((max((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_10))), (max((((/* implicit */unsigned long long int) arr_5 [i_2])), (var_10))))) - (18446744073143078613ULL)))))) : (((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)9305))))) << (((((max((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_10))), (max((((/* implicit */unsigned long long int) arr_5 [i_2])), (var_10))))) - (18446744073143078613ULL))) - (16738874573024647879ULL))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38452))) - (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_0))) + (((/* implicit */int) (unsigned short)38452))));
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9320)) ? (((((/* implicit */_Bool) var_12)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_0))));
        arr_15 [i_4 - 2] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) 1U)) ? (arr_6 [i_4 - 2] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)50587)))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)158)))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) (unsigned short)1792))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1275883748)))))) : ((((_Bool)1) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) % (((/* implicit */long long int) 4294967291U))));
                    arr_21 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */short) (~(((arr_6 [i_4] [i_4 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned int) (~(min((((/* implicit */long long int) var_8)), (8589681013205244758LL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)50588)), (((((/* implicit */_Bool) arr_24 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (13461969524217527548ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4 - 1] [i_4 - 1]))))))))));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_5] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(var_12)))) || (((/* implicit */_Bool) ((long long int) (unsigned short)63743))))))));
                            }
                        } 
                    } 
                    arr_28 [i_4 + 1] [i_4] = ((/* implicit */unsigned char) (+(((unsigned int) var_9))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) max((((/* implicit */int) ((short) max((var_1), (((/* implicit */unsigned short) var_7)))))), (((int) min((var_9), (var_4))))));
    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) 384236383U))) ? (min((var_4), (((/* implicit */long long int) (unsigned char)101)))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_11))))))), (((/* implicit */long long int) var_0))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_0))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) : ((-(var_9)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
}
