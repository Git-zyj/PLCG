/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101797
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (4416471839763956666ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) var_12)) ? (15002157415914039670ULL) : (((/* implicit */unsigned long long int) 2147483631))))))) ? (max((((/* implicit */int) var_11)), (min((2147483631), (((/* implicit */int) var_17)))))) : ((~(98304)))));
    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))) : (((long long int) var_3))))) ? (((/* implicit */int) var_15)) : (min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_18))))));
    var_22 = (unsigned char)143;
    var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) 2199023253504LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-81))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (2199023253504LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_16), (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                        var_24 = ((/* implicit */unsigned short) ((_Bool) var_8));
                    }
                    var_25 &= ((/* implicit */_Bool) -2199023253513LL);
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_5 [i_1] [i_1 - 2] [i_1 - 1])), (((unsigned short) ((((/* implicit */_Bool) -1163552506)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (8796093018112ULL)))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (-(1163552523))))) ? (-999917892) : (((((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)10] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)60)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)101))))))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_1 + 1]) - (1303558275U)))))) - (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)80)), (2199023253508LL)))), (arr_9 [i_1 + 2] [i_1] [i_1] [i_1])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned int) max((arr_3 [(signed char)2] [(signed char)2]), (arr_3 [(unsigned char)8] [(unsigned char)8]))))))) ? (((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) arr_15 [(signed char)10] [(short)4] [i_1 - 1] [(signed char)10])) - (12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_15 [0ULL] [2] [i_0] [0ULL])))))))));
                    var_29 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1]), (((/* implicit */unsigned char) arr_3 [(unsigned char)2] [(unsigned char)2]))))), (((((/* implicit */_Bool) arr_11 [0LL] [i_1 - 1] [0LL])) ? (((/* implicit */int) arr_11 [(short)10] [i_1 + 2] [(short)10])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1]))))));
                }
                arr_17 [i_1] [i_1] = ((/* implicit */long long int) (+(((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_9 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 8; i_7 += 3) 
                    {
                        {
                            arr_23 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (890327665) : (((/* implicit */int) (unsigned char)252))));
                            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)55))));
                            var_31 = ((/* implicit */int) arr_9 [(short)3] [i_6] [(_Bool)1] [i_0]);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 1])))) ? ((-(((/* implicit */int) (short)-23697)))) : (((/* implicit */int) max((((short) var_6)), (((/* implicit */short) arr_16 [i_7 - 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
