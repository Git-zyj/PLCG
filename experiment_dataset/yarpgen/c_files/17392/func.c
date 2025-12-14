/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17392
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
    var_15 += ((((/* implicit */_Bool) ((((var_9) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | (var_3)))) ? (((((/* implicit */_Bool) (+(3063758477U)))) ? (1LL) : (((/* implicit */long long int) 3063758477U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3063758452U)) & (-2LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (((3400011411U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [1U] [i_0 + 1])) ? (((((/* implicit */_Bool) -19LL)) ? (7082843648621167035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2] [i_1 + 1])) : ((-(((/* implicit */int) (unsigned char)255))))));
                    var_20 = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) var_8);
                        var_22 = ((/* implicit */unsigned char) ((short) arr_3 [i_1] [i_2 - 1] [i_3 + 1]));
                        arr_12 [i_0] [i_0] [i_1] [0ULL] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)209)) ? (19LL) : (((/* implicit */long long int) 4192598568U))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)65535));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (7082843648621167054ULL)))))))));
                            arr_16 [i_0] [6] [i_1] [i_0] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) 4294967273U)) : (-7LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_0 + 1])))));
                        }
                        for (short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_2] [(_Bool)1] [i_2] |= ((/* implicit */unsigned short) ((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3]) ? (((var_9) ? (((/* implicit */long long int) 2681878722U)) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_5 - 1])))));
                            arr_22 [i_1] [i_1] [(unsigned short)10] [i_3] [i_5] = ((/* implicit */long long int) ((arr_6 [(short)12] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [14ULL]))) : (((((/* implicit */_Bool) (short)12267)) ? (3063758484U) : (2714105420U))))))));
                            var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (4139559181458044260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105)))))) ? (((/* implicit */int) (unsigned short)62947)) : (((/* implicit */int) arr_24 [(signed char)8] [i_3 + 2] [i_2] [i_3] [i_0] [i_2 + 1] [14]))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_12))));
                            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1264777096U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_1 - 2] [i_2 + 2] [i_2 + 2] [i_3 - 1] [i_3 + 1] [i_6 - 1]))) : (var_2)));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_1] = (((!(((/* implicit */_Bool) 4389715242656004025ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) / (var_4))) : (var_2));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-18941)) : (((/* implicit */int) (_Bool)1)))))));
        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)16742))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)14] [(short)14]))) : (40LL)))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 3) 
    {
        arr_29 [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_28 [i_7])) * (((((/* implicit */_Bool) ((2110003942U) - (((/* implicit */unsigned int) arr_28 [i_7 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 19LL)))))) : (arr_27 [i_7] [7U])))));
        var_31 = ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) -4464354527792909061LL))));
        var_32 ^= max((((/* implicit */long long int) ((arr_28 [i_7 + 1]) - (arr_28 [i_7 + 1])))), (((-20LL) % (((/* implicit */long long int) arr_28 [i_7 + 1])))));
        var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_27 [i_7 - 2] [i_7 + 1]))), (((/* implicit */long long int) arr_28 [i_7 - 2]))));
    }
    var_34 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) * (2462490945U))), (var_11)));
}
