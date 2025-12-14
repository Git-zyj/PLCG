/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14109
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_7) ^ (var_8))) ^ (max((8589934591LL), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) var_5)) ^ (min((11ULL), (((/* implicit */unsigned long long int) -8589934615LL))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_6 [i_3]);
                        var_15 |= ((/* implicit */unsigned long long int) var_9);
                        arr_12 [i_0] [4ULL] [i_2] [i_2] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) * (((((/* implicit */unsigned long long int) min((-8589934612LL), (-8589934604LL)))) * (arr_3 [i_0] [i_0] [i_0 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) -8589934598LL);
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)21))))) ? (((unsigned long long int) arr_8 [i_0] [i_1] [i_4] [i_1])) : (((/* implicit */unsigned long long int) -8589934586LL)))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((var_7), (8589934600LL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_6), (var_10)))), ((~(2147483647)))))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_0] [i_0 + 1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_2]), (var_6))))) : ((~(10941389870102965523ULL)))))));
                                var_19 = ((/* implicit */int) ((unsigned int) (short)-29657));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((8589934589LL) <= (8589934615LL)))), (arr_0 [9] [i_2])));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_6 + 1] [i_0 + 1]))));
                                var_22 = ((/* implicit */int) (((~(min((6595512774731996055ULL), (((/* implicit */unsigned long long int) -458358515)))))) >> ((((-(435066413))) + (435066457)))));
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_1 + 1] [i_2] [i_1] [i_7] [i_7])) ^ (((/* implicit */int) (unsigned short)33397)))))))), ((+(arr_2 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((-1) + (((/* implicit */int) arr_22 [i_0 - 2] [i_1 + 1] [i_1 + 1]))));
                        arr_25 [i_0 - 2] [i_1 + 2] [i_1] [i_0 - 2] = ((/* implicit */int) var_6);
                    }
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) arr_27 [i_2] [i_1] [i_2] [i_9] [i_2] [i_2]);
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) 8589934605LL))));
                        arr_28 [i_0] [(short)10] [i_0] [i_1] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_2] [4LL] [i_1 + 1]);
                        var_27 = ((/* implicit */_Bool) var_0);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1] [i_2] [i_9])) || (((/* implicit */_Bool) -8589934604LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-108))))))) ? (((6425966755875496401ULL) / (((/* implicit */unsigned long long int) min((8589934620LL), (((/* implicit */long long int) (unsigned char)8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [7LL] [i_0 - 2] [i_1] [i_2] [i_9])))));
                    }
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (short)-32762))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_0] [i_1] [i_2])), (620798718)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) 3523897199U)), (10941389870102965550ULL)))))));
                        var_30 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_10 - 1] [i_10]))) * (arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 2])))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_10 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_26 [i_0] [i_1] [i_2]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22962))) & (max((((/* implicit */unsigned int) (unsigned short)27430)), (13U))))))))));
                        var_32 = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) -458358526)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_8))))) + (9223372036854775807LL))) << (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (min((((/* implicit */unsigned int) var_0)), (0U))) : (arr_13 [i_1] [i_2] [i_10 - 1])))));
                    }
                }
            } 
        } 
    } 
}
