/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167305
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
    var_16 |= ((/* implicit */short) var_6);
    var_17 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 10042262399274310666ULL)))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (unsigned char)104)) ^ (((/* implicit */int) (unsigned char)192))))))) ^ ((-(((/* implicit */int) var_8))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) ((arr_2 [i_2]) + (((/* implicit */int) (unsigned char)123))))) ? (4194376182U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1] [i_1 - 1])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_4 [(unsigned short)16])))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1610612736U))))), (((((/* implicit */_Bool) ((long long int) arr_8 [i_1] [(short)0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [(short)20])) <= (10042262399274310668ULL))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) | (arr_0 [i_1 - 4])))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((((((/* implicit */long long int) arr_2 [i_1 - 3])) > ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 - 2])) : (((((/* implicit */unsigned long long int) arr_2 [i_1 - 2])) - (17878231760541503599ULL)))));
                        var_23 = var_15;
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_11 [i_1] [(short)17] [16LL] [i_1 - 1] [(unsigned char)0]) : (arr_11 [i_5] [21U] [i_5] [i_1 - 1] [(unsigned short)17])));
                        var_25 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_5]);
                    }
                    var_26 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (((unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))));
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)27))))) ? (max((arr_17 [i_0] [(unsigned char)5] [18ULL] [4LL]), (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2004))))))) : (((long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (9111759726415534713LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17865)))))))))));
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((-8029510926263775900LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((1ULL) - (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2010)) & (((/* implicit */int) var_7))))) ? (((unsigned int) (_Bool)1)) : (var_1))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) (_Bool)0);
                    var_30 = ((/* implicit */unsigned int) var_10);
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_17 [(unsigned short)21] [i_6] [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ^ (((unsigned int) (_Bool)1)))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) ^ (((/* implicit */int) (unsigned short)47671)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) arr_24 [8ULL] [i_1] [(short)2] [i_1] [i_10] [i_9]);
                                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [(short)17] [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_9] [i_9]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-104)) * (((/* implicit */int) var_7))))))))) <= (arr_6 [i_1 - 1] [i_9])));
                                var_34 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]);
                                var_35 = (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)38698)), (arr_10 [i_0] [(signed char)16] [(unsigned short)20] [(short)13] [i_0])))) ? (((((/* implicit */_Bool) arr_26 [i_9] [(unsigned short)0] [(unsigned short)0] [i_9] [(unsigned short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [5] [i_9] [i_9]))) : (arr_28 [i_0] [i_0] [i_6] [21U] [i_10] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) 4294967295U)) ? (428553815246397792ULL) : (((/* implicit */unsigned long long int) arr_24 [i_1] [(unsigned short)5] [i_1] [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
}
