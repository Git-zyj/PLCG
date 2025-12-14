/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131554
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((short) (unsigned short)40019);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 2])))) ? (((683126109) << (((arr_1 [i_0 + 2]) - (17948129098016995619ULL))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)10729)) < (arr_0 [i_0 + 1])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) arr_0 [i_0])) < (((((/* implicit */long long int) arr_0 [i_0])) & (-8920304067958521288LL))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 11265215436726698558ULL))) ? (arr_0 [i_0 - 1]) : ((~(((/* implicit */int) (short)2152)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 += ((/* implicit */unsigned short) (-(1055947977)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        arr_14 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = min((((/* implicit */long long int) ((((/* implicit */_Bool) max((-1899193092), (((/* implicit */int) (unsigned short)24929))))) ? (((/* implicit */int) ((((/* implicit */int) (short)2153)) != ((-2147483647 - 1))))) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5] [i_5 - 2] [i_5 - 1]))))), (((long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2157)))))));
                        arr_15 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_7 [i_4]);
                        var_21 *= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 813948093131452547LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) arr_10 [i_5 - 2] [i_4] [i_3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_5 + 2] [i_5] [i_5] [i_3]))))));
                        var_22 ^= ((/* implicit */unsigned long long int) arr_10 [i_5] [i_4] [i_3] [i_2]);
                    }
                    arr_16 [i_2] [i_3] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1186)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_9), (((/* implicit */long long int) arr_8 [i_2])))) > (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_8 [i_2]))))))))) : (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2017612633061982208ULL)))) : (min((((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_3] [i_4])), (arr_7 [i_2])))))));
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_3] [i_3] [i_3] [i_4]))));
                    arr_18 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1806198166144442294ULL)) ? ((+(((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_2] [i_4] [i_4])))) : (((/* implicit */int) (unsigned short)65535))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)72)))) - (489040122)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_23 [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_22 [i_2] [i_6] [i_7])) : (((/* implicit */int) (unsigned short)10729)))))), ((-(((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (signed char)-127))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) < (6343123579295731649ULL)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7200157719469529189LL)) ? (var_3) : (2146959360)))) ? (((/* implicit */int) (short)-28015)) : (((/* implicit */int) ((short) (unsigned short)38978))))) + (28037)))));
                                arr_32 [i_6] [i_6] [i_7] [i_8] [i_9] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) && ((_Bool)0)))))))));
                                var_25 = ((/* implicit */unsigned int) max((arr_29 [i_2] [i_6] [i_7] [i_2] [i_9]), (max((((/* implicit */signed char) (_Bool)1)), (arr_29 [i_2] [i_6] [i_7] [i_8] [i_9])))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) arr_29 [i_2] [i_6] [i_7] [i_7] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 10522798831506429460ULL)))) : (var_10))))))));
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */signed char) (~(max((((1901906528866586685LL) >> (((/* implicit */int) var_0)))), ((-(10LL)))))));
                    arr_33 [i_2] [i_6] [i_6] [i_7] = ((/* implicit */short) ((long long int) arr_6 [i_2] [i_6 - 1]));
                }
            } 
        } 
    }
    var_28 *= ((/* implicit */unsigned int) var_2);
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((/* implicit */int) (((!(var_5))) || ((!(((/* implicit */_Bool) 469762048))))))), (max((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (short)-19119)) : (((/* implicit */int) (signed char)-6)))), (((/* implicit */int) (short)2156)))))))));
}
