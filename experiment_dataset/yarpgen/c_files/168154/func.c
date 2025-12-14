/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168154
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */_Bool) max((((((/* implicit */int) (short)11)) << (((((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))))) - (11206428797818298636ULL))))), (0)));
                        var_20 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
                        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((17136058346837782107ULL) ^ (((/* implicit */unsigned long long int) 213567450U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) : (var_11)));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1446906771060719094LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63164))) : (-252692521013543482LL)))) ? (max((1446906771060719093LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) (unsigned char)134)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned char)230)))))))));
    }
    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_1) | (var_1))), (((int) var_5))))) && (((/* implicit */_Bool) arr_11 [(short)7]))));
        arr_14 [8LL] = (-(((/* implicit */int) (unsigned char)0)));
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_16 [i_5]), ((+(((/* implicit */int) (unsigned char)163))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19883)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)19892), ((unsigned short)39790))))) : (((((/* implicit */_Bool) var_6)) ? (5735800952271638347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))))))) : (((/* implicit */unsigned long long int) 1369687790))));
        var_24 = ((/* implicit */short) (+(((/* implicit */int) max((arr_15 [i_5]), (arr_15 [i_5]))))));
        arr_17 [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_15 [(signed char)13])) && (((/* implicit */_Bool) (unsigned char)123)))), ((!((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [13])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_15 [(short)12])) ? (3184869210054453616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39804))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (var_10))))))));
        var_25 *= ((/* implicit */unsigned long long int) arr_15 [i_5]);
    }
    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) max(((~(max((1563538018U), (((/* implicit */unsigned int) var_12)))))), (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)19892)))))))));
        arr_21 [i_6] = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_1)) ? (arr_18 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_16 [i_6])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_16 [8U])) : (arr_19 [i_6]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_6])))))));
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) & (var_15))), (((((/* implicit */_Bool) var_13)) ? (var_11) : (var_14))))))))));
    var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))) ? ((-(var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)10886))))))) >> (((/* implicit */int) (((~(var_4))) >= (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
}
