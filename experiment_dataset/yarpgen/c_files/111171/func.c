/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111171
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) <= (((/* implicit */int) ((((/* implicit */int) var_11)) != (var_0))))))) | (((((/* implicit */_Bool) (unsigned short)2248)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_10)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((var_8) ? (7618439964856628951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)9460)) == (((/* implicit */int) var_7)))) ? (2147483647) : (((/* implicit */int) var_9)))))));
        var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (unsigned short)2248)) : (((/* implicit */int) (unsigned short)63305)))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((/* implicit */int) var_8))))) : (((((/* implicit */int) var_8)) - (var_0)))));
    }
    var_16 = ((/* implicit */_Bool) var_0);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    arr_9 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_8 [i_3] [i_2 + 2] [i_2]))))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (arr_6 [i_2] [i_3 - 1] [i_3 + 1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (-607717611)));
                        arr_12 [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)16943)) >= (((/* implicit */int) arr_5 [i_2 + 2] [i_4])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63305))) == (arr_4 [i_2 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_3] [i_3] [i_2])) || (((/* implicit */_Bool) arr_5 [i_4] [i_2 - 2])))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2 + 2])) ? (((((/* implicit */int) var_7)) ^ (607717602))) : (((/* implicit */int) var_9))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_6 [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 3] [i_2 + 3] [i_4] [i_5] [i_5])) ? (var_13) : (var_5))))));
                            var_20 += ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1])) + (2147483647))) << (((((/* implicit */int) (unsigned char)86)) - (86)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_18 [i_1] [i_2] [i_3 - 1] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) (signed char)-54))));
                            var_21 *= ((/* implicit */unsigned char) ((1512501329U) - (((/* implicit */unsigned int) 1636320608))));
                            arr_19 [i_6] [i_2] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_1] [i_2 - 1] [i_6] [i_2])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (_Bool)1))));
                            var_22 -= ((/* implicit */short) ((arr_6 [i_6] [i_3 - 1] [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))));
                        }
                        for (unsigned int i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            arr_24 [i_2] [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2]))) >= (2782465967U)))) << (((((/* implicit */int) arr_21 [i_1 - 3] [i_1 - 3] [i_3] [i_3 - 1] [i_7 - 1] [i_1 - 3])) + (75)))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_2] [i_3 + 1] [i_7])) : (((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_4]))));
                            var_24 = ((/* implicit */int) min((var_24), (((((var_0) + (((/* implicit */int) arr_23 [i_4] [i_2 + 3])))) / (((/* implicit */int) arr_3 [i_1 - 1]))))));
                            arr_25 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_26 [i_1] [(short)3] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_11 [i_2 + 1]))));
                        }
                    }
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_29 [(_Bool)0] [i_2] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_28 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) arr_23 [(unsigned char)10] [i_1 + 1])) : (((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) 3207283501560059987ULL)) ? (((var_8) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_8]))))))));
                        arr_30 [0LL] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_3 - 1] [i_8 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)2248)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_1))))))) : (((((/* implicit */int) arr_5 [i_3 - 1] [i_8 + 1])) | (((/* implicit */int) arr_16 [i_1 - 2]))))));
                    }
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    arr_34 [i_9] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)49)) ? (((var_13) & (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 2] [i_1] [i_1])))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_2] [i_2 + 3] [i_2 - 1]) ? (((/* implicit */long long int) var_0)) : (var_13)))) ? (11836530090555076883ULL) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_1] [i_2 - 2] [i_2 + 2] [i_9 - 1])) ? (-519611619) : (((/* implicit */int) arr_27 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1]))));
                }
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_2] [i_2])) / (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)77)) : (var_0))) : (((((/* implicit */_Bool) 1490164069)) ? (((/* implicit */int) var_10)) : (arr_33 [i_1 + 1] [i_1] [i_2 + 3] [i_2])))));
            }
        } 
    } 
}
