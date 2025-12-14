/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174064
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) var_17)), (var_1)))))) && (((/* implicit */_Bool) ((unsigned int) ((signed char) var_1)))))))));
    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (399659259U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (((((/* implicit */_Bool) 7267715915303415039LL)) ? (6874046085447018335LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) : (min((((/* implicit */unsigned long long int) var_3)), (min((var_1), (2181303387968479224ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_8 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1] [9ULL] [i_2] [i_2 + 1] [i_2])) ? (2053356171U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2])))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) 115968392)) && (((/* implicit */_Bool) 5191057268168571427ULL)))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (arr_2 [i_2 + 1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10345))))));
                        arr_13 [i_0] [6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((1806926539U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52889)))))) != (((var_11) / (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121)))))))));
                    }
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(arr_7 [i_0]))))));
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_16 [11ULL] [i_5] = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) var_12)), (arr_15 [i_5])))));
                    var_26 = ((/* implicit */signed char) ((int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_1] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_5])), ((unsigned char)198)))) >> (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_10)))))));
                }
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_19 [i_0] [i_1] [i_1] [(signed char)9] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4113108988U)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)93))))) || (((/* implicit */_Bool) (signed char)-90)))) ? (((/* implicit */int) ((unsigned short) 18446744073709551609ULL))) : (((((/* implicit */_Bool) (unsigned short)18872)) ? (var_12) : (var_12))));
                    var_27 -= ((/* implicit */unsigned char) arr_18 [i_0] [i_1] [i_6]);
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_24 [i_8] [i_8] [i_1] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) var_0);
                            arr_25 [i_0] [i_8] [i_7] [(unsigned char)4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8])) && (((/* implicit */_Bool) -115968388))))), (var_14)));
                            arr_26 [i_0] [i_8] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1801973741631592754LL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_0] [14ULL] [7LL] [i_1] [i_7] [i_8]))))), (((((/* implicit */_Bool) ((short) (short)-7513))) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) -115968389);
}
