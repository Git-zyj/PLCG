/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147510
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) << ((((-(((/* implicit */int) arr_0 [i_1])))) + (28))))) : (((/* implicit */int) var_4))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) arr_9 [i_0])) / (min((((/* implicit */unsigned long long int) (short)32757)), (var_9)))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [8LL])) ? (min((((/* implicit */unsigned long long int) (short)-11279)), (16872895722702117192ULL))) : (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */unsigned int) ((int) (signed char)98))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-99)) + (-297255459)))), (arr_9 [2LL])))));
                        var_18 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [16LL] [i_0])))) && (((/* implicit */_Bool) ((arr_7 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))), (min((((/* implicit */unsigned int) 2080374784)), (((unsigned int) 0U)))));
                        arr_12 [i_0] [10ULL] [i_2] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0])) ? (var_8) : (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3 + 2])) ? (((/* implicit */int) ((signed char) arr_11 [i_0] [21ULL] [i_1] [21ULL] [i_3]))) : (((/* implicit */int) (signed char)0)))))));
                        var_19 = ((/* implicit */unsigned char) var_13);
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1)))))))), (max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)8367)) : (((/* implicit */int) (signed char)123)))), (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) var_4)))))))));
                        var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) arr_14 [i_4] [6U] [i_1] [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) var_14)), (var_9)))))));
                        var_22 *= ((/* implicit */short) var_7);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2349649234049842984LL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)11279))))) ? (((4275510336318396788LL) + (2349649234049842984LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        arr_18 [i_5 - 2] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_5]))))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (arr_8 [i_1] [i_5 - 2] [(short)16])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) var_13));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_2 [i_0] [i_0])));
                            var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)38946)) ? (arr_7 [(unsigned char)20]) : (arr_7 [(unsigned char)10])));
                        }
                        for (int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_2)))));
                            arr_27 [i_8] [i_5 - 2] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(151220546)));
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5 - 1]))) : (var_9)));
                        }
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (arr_25 [i_0] [i_0] [16LL] [20U] [i_2] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != ((-(4294967281U))))))));
                    }
                }
                for (long long int i_9 = 4; i_9 < 22; i_9 += 3) 
                {
                    var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))))));
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */int) (((((-(var_8))) * (((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-11181)))))))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((-(((((/* implicit */_Bool) (short)31480)) ? (4003216283U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16291))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                }
            }
        } 
    } 
    var_33 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4275510336318396788LL)) && (((/* implicit */_Bool) 157944049030833059LL))))) : (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_4)) - (214)))))))) ? (var_3) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (var_14)))));
}
