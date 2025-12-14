/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142766
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)29725);
        var_12 -= ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)246)))) * (((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) | (arr_0 [i_0])));
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_1] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) arr_4 [i_1] [i_2]);
            arr_8 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [(unsigned char)2]);
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) ((arr_6 [i_1 + 1] [i_1 - 3] [i_1]) || (((/* implicit */_Bool) var_1))))), (var_2)));
        }
        arr_10 [i_1] = ((/* implicit */signed char) (-(4294967295U)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 3] [(unsigned short)14])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 4] [(unsigned char)0])) : (((/* implicit */int) arr_5 [i_1 - 4] [i_1 + 3] [8U]))))) ? (max((max((arr_3 [(short)14]), (((/* implicit */int) var_7)))), (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2])))) : (min((0), (arr_3 [i_1]))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1])) : (arr_3 [i_1 - 2])))) ? (arr_3 [i_1]) : (((/* implicit */int) arr_4 [i_1] [i_1 + 2])))))))));
    }
    for (short i_3 = 2; i_3 < 15; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_19 [i_3 + 1] [i_3] [i_5] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_15 [i_4] [13ULL] [(unsigned short)10]))))));
                    var_16 = ((/* implicit */unsigned short) ((var_7) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7329)))))), (((((/* implicit */_Bool) arr_13 [(short)0] [i_3])) ? (((/* implicit */unsigned long long int) arr_3 [i_5])) : (var_11))))) : ((+(((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */unsigned short) arr_12 [i_3] [i_3]);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [(short)13] [(short)13] [(short)13] [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) (signed char)127)))))))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31315))) : (arr_13 [(_Bool)1] [i_3 + 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (_Bool)0))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_12 [i_8] [5ULL]);
                        var_20 = ((/* implicit */unsigned short) (signed char)-127);
                    }
                } 
            } 
        }
        arr_27 [i_3] = ((/* implicit */signed char) var_10);
    }
    for (short i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_9] [(unsigned char)14] [i_9])) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (unsigned short)31323))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_9] [2U] [(unsigned short)8])) : (((/* implicit */int) arr_28 [i_9] [i_9]))))) ? (((arr_25 [i_9] [(signed char)8] [(signed char)8] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9] [i_9] [14U]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)48)))))))));
        var_22 *= ((/* implicit */unsigned int) 196519352);
    }
}
