/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168761
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
    var_11 = ((var_4) | (((/* implicit */unsigned long long int) var_0)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_8);
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) var_8);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_6)) ? (arr_10 [i_1] [i_1 + 1] [i_1 + 1]) : (var_1))) + (9223372036854775807LL))) << (((min((32767U), (((/* implicit */unsigned int) (short)8584)))) - (8584U)))));
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((var_9) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0]))))) : (arr_10 [i_0 - 1] [(signed char)1] [i_0 - 1]))), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned short) var_4);
                                arr_17 [(unsigned char)0] [i_1] [i_2] [i_0] [i_4] [i_2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((var_8), (((/* implicit */short) arr_6 [i_0 + 1])))))));
                                arr_18 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_6)) > (((((/* implicit */_Bool) var_2)) ? (arr_16 [i_0] [i_1] [(signed char)0] [i_0] [(signed char)0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)11] [i_0] [i_0] [i_0]))))))) << (((min((max((var_2), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_15 [i_0] [i_1] [i_2])) - (7318)))))))) - (189734905U)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1]))))) ? (((((/* implicit */_Bool) (short)24779)) ? (137438953471ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [8])))) : (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18446743936270598126ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) ((arr_7 [14ULL] [i_0] [i_0 - 2]) ? (((/* implicit */int) min((var_8), (((/* implicit */short) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((1415785353U), (((/* implicit */unsigned int) (signed char)-125))))))))));
    }
    for (int i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_15 ^= ((/* implicit */long long int) ((min((18446743936270598142ULL), (((/* implicit */unsigned long long int) ((8832347983259406459LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39697)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_8))))))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [i_5 - 2])) ? (((/* implicit */int) arr_20 [i_5] [i_6])) : (((/* implicit */int) arr_28 [i_5] [i_6] [i_7] [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_5 - 1])) != (((/* implicit */int) arr_21 [i_5 - 2])))))) : (var_3));
                    arr_29 [i_7] [(signed char)20] [17LL] [i_7] = min((((/* implicit */unsigned long long int) (short)-7848)), (min((min((((/* implicit */unsigned long long int) arr_21 [i_5])), (17457494766164493858ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25838)) == (((/* implicit */int) arr_27 [i_5] [i_7] [i_7]))))))));
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_5] [i_6])) ? (((var_1) ^ (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_6])))));
                }
            } 
        } 
        arr_30 [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) arr_21 [i_5]))))) : (var_1))), (((/* implicit */long long int) arr_19 [i_5]))));
    }
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) ((((var_1) / (-1LL))) != (((/* implicit */long long int) 2048790737U))));
                    var_19 = ((/* implicit */long long int) arr_32 [i_8]);
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_10])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8] [(signed char)8] [i_10] [i_10 - 1] [i_9] [i_9]))))) | (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_13 [(unsigned short)12] [i_9] [i_10] [i_10 - 1] [i_8] [i_8])))))));
                    arr_39 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
}
