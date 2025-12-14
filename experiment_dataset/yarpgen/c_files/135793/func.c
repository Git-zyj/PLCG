/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135793
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
    var_20 ^= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) (~(((arr_2 [i_1]) >> (((8572415977369148545ULL) - (8572415977369148540ULL))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((signed char) max((var_2), (((((/* implicit */_Bool) -5809538789771673794LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (1585919225610482012LL)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [22] [(short)16] [(unsigned char)15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_7))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_0] [i_1] [i_1] [i_2 - 2] [i_3 + 1] [i_4] [i_4])))) * (max((3932970355U), (((/* implicit */unsigned int) (unsigned char)31))))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_15), ((_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_2 [i_1])))))))));
                                var_23 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) 9223372036854775807LL)))) + (max((((/* implicit */unsigned int) -1340601347)), (arr_0 [i_0]))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (short)-3068)) ? (var_14) : (((/* implicit */int) arr_5 [i_3 + 2] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                    arr_17 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1] [i_2])) << (((max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 4] [i_0] [i_0] [i_0] [i_1] [i_0]))) : (12409838392768035861ULL))), (((((/* implicit */_Bool) (signed char)127)) ? (18446744073709551605ULL) : (var_12))))) - (18446744073709551604ULL)))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_8)), (arr_7 [i_0 - 3] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((signed char) 27U))) : (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_1] [(short)12])) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_1] [i_0 - 4])) : (min((((/* implicit */int) arr_3 [i_1] [i_1])), (2147483647)))))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))))));
                    arr_20 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_5])) ? (((/* implicit */long long int) -1865178016)) : (arr_12 [i_5] [i_1] [i_5] [i_5] [i_1] [i_5 - 1] [(short)2])))) ? (((((/* implicit */_Bool) (unsigned short)22324)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (1251434720U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_1] [i_5 - 1])), (var_14))))))), (min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) 2085131273)) ? (((/* implicit */unsigned long long int) 23U)) : (18182396570054055871ULL)))))));
                }
            }
        } 
    } 
}
