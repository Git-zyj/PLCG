/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113319
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
    var_17 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (max((4294967295U), (((/* implicit */unsigned int) (short)32738)))) : (min((4294967292U), (((/* implicit */unsigned int) (short)-6086))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((arr_5 [2] [i_1] [3U]), (((/* implicit */short) var_6)))))))) : (min((min((var_4), (((/* implicit */long long int) arr_0 [(unsigned char)4])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1)), (arr_1 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_2 - 3]))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((unsigned short) var_3)), (((/* implicit */unsigned short) var_3)))))));
                    arr_10 [i_1] [i_1] [(short)8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [8LL]), (arr_2 [i_1] [i_1]))))) % (max((4294967295U), (((/* implicit */unsigned int) (short)25454)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_3] [i_2 - 2] [i_1] [i_3] = ((/* implicit */long long int) max((((short) arr_11 [i_2 - 2] [(unsigned short)6] [i_2] [i_0])), (arr_7 [i_0] [i_0])));
                        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [7U] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 3] [(short)5])) : (((/* implicit */int) (unsigned char)240))))) ? (max((9223372036854775792LL), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 3])))))));
                        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11896)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (short)-11899))));
                        arr_15 [7LL] [1LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) <= (((/* implicit */int) arr_2 [i_0] [(short)4]))))), (((((/* implicit */int) arr_4 [i_1] [i_2] [i_3])) & (((/* implicit */int) (signed char)127))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)6] [i_0])))))))));
                        arr_16 [i_0] [(signed char)2] [i_0] [(short)2] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (5308690101897326016LL))))) ? (min((((((/* implicit */_Bool) arr_3 [i_3] [(signed char)4])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (min((0U), (((/* implicit */unsigned int) var_14)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [(unsigned char)3] [8U] [5] = ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned char) arr_4 [i_0] [(unsigned char)8] [(unsigned char)8])), (arr_18 [6] [2U] [(short)3] [i_4]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_5))))) : (arr_12 [i_2 - 1]))));
                        arr_20 [i_2 - 2] [i_2 - 2] [4] [(signed char)7] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [(signed char)8] [(signed char)8])), (((4294967278U) | (((/* implicit */unsigned int) -179645333))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 3] [i_0] [(short)3])) % (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)32767)))))))) ? (((((/* implicit */_Bool) 1586827455U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9077))) : (2587826098U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                        arr_21 [i_0] [i_0] [i_2 - 1] [(unsigned short)7] = ((/* implicit */short) 255U);
                    }
                }
            }
        } 
    } 
}
