/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108188
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
    var_18 = ((/* implicit */unsigned short) ((int) (unsigned short)26616));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48162)) ? (max((((((/* implicit */_Bool) (unsigned short)17373)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967295U))), (((/* implicit */unsigned int) (unsigned short)38939)))) : (((((/* implicit */_Bool) ((3990302907949176326ULL) & (14456441165760375308ULL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))));
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_16))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)18696)))))) : (min((5156018190021601385LL), (((/* implicit */long long int) (signed char)107)))))), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (unsigned short)4096)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1] [i_1]) : (((arr_2 [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17373)))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-26243)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38907)) % (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) arr_2 [i_4] [i_2])) : ((~(14456441165760375301ULL)))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_3 [i_3] [i_3]))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])));
        var_27 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)26617);
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)21)) : (arr_9 [i_2] [i_5])))) ? (((((/* implicit */_Bool) (unsigned short)38907)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55305))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_2]) < (5204664404677617469LL)))))));
        }
        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) / (arr_16 [i_6 + 1] [i_6 + 1]))))));
            var_30 = ((/* implicit */unsigned int) ((int) (+(var_12))));
            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 70368744177663ULL)) && (((/* implicit */_Bool) 4294967295U)))) && (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_7)) << (((((((/* implicit */int) var_9)) + (135))) - (13)))))));
        }
    }
    for (long long int i_7 = 2; i_7 < 10; i_7 += 3) 
    {
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_12 [i_7 + 1] [i_7])) + (((/* implicit */int) var_2)))))))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7 - 1])) ? ((-(((/* implicit */int) (unsigned short)48192)))) : (((/* implicit */int) arr_21 [i_7]))));
        var_34 = var_17;
    }
}
