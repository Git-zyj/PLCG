/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127150
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
    var_20 *= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned short) 66977792);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_11)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 594031469848021307LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) >> (((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) - (7079)))))) : (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0 - 2])) | (((/* implicit */int) var_15))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18043)) ? (((((/* implicit */_Bool) (unsigned short)18070)) ? (8866461766385664ULL) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -594031469848021313LL))))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_3 [i_0]) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))));
        }
        arr_8 [i_0 - 1] = ((/* implicit */long long int) var_5);
    }
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_9 [i_2]), (((/* implicit */int) var_0)))), (arr_10 [i_2 + 3])))) ? (var_6) : (((/* implicit */unsigned long long int) (+(var_1))))));
        var_26 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))), (min((var_4), ((signed char)-90)))))), (var_5)));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_16 [(unsigned short)2] = ((/* implicit */int) arr_15 [i_3]);
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned short)65348)) : (-551232866)));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) var_3);
            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [(unsigned char)20])) >= (arr_12 [i_4]))))));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [8ULL])) : (((/* implicit */int) var_17)))))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_14 [i_5]))));
                    }
                } 
            } 
        } 
    }
}
