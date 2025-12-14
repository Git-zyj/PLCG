/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133348
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((var_15) >> (((/* implicit */int) var_3))))), (((unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_4)))), (((((/* implicit */int) var_14)) / (((/* implicit */int) var_13)))))))));
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) (signed char)-97)) == (((/* implicit */int) var_5))))) >> (((((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */int) var_10)))) + (1009270214))))), (((/* implicit */int) (unsigned char)61))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)60)) >> (((((/* implicit */int) var_13)) - (170))))), (((((/* implicit */int) var_1)) / (var_18)))))) ? (16140901064495857664ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) (unsigned char)152)) - (135)))))) ? (((((/* implicit */_Bool) var_17)) ? (-2147483647) : (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) var_16)))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (0ULL)))) ? (((/* implicit */int) var_9)) : (var_18)));
                    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))));
                    arr_12 [i_0] = var_3;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_19 [(unsigned short)3] [i_0] [(unsigned short)3] [(unsigned char)9] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_11))));
                                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 4; i_7 < 18; i_7 += 4) 
                    {
                        for (signed char i_8 = 2; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_25 &= ((/* implicit */_Bool) (signed char)(-127 - 1));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))) * (((/* implicit */int) ((unsigned short) (unsigned char)104))))))));
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)104)) / (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_14)) / (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)61849), (((/* implicit */unsigned short) var_8))))) ? (((((/* implicit */int) (short)-512)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)15))))) : (((((((/* implicit */_Bool) var_12)) ? (10326742038069095146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                                var_29 = (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127)))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)128))))), (max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_8))));
                    var_30 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) min((var_9), (var_2)))))) >= (((/* implicit */int) min(((unsigned char)0), ((unsigned char)255))))));
                }
                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((unsigned char)77), ((unsigned char)156)))), ((~(((unsigned int) var_12))))));
            }
        } 
    } 
    var_32 *= ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (max(((~(((/* implicit */int) var_1)))), ((+(((/* implicit */int) (unsigned char)62))))))));
}
