/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162288
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned char) 1322616458);
        arr_2 [i_0] = min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)41388)) / (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) / (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : ((-(2669774745U))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_0 [i_0] [1LL])), (arr_1 [i_0]))) | (min((((/* implicit */long long int) var_14)), (arr_1 [i_0]))))))));
        var_20 = ((/* implicit */unsigned short) ((((min((-1613746103268197223LL), (((/* implicit */long long int) (unsigned short)24762)))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 300681194U)) : (var_11))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((54955149U) >= (var_5))))) != (arr_1 [i_0])))) : (((/* implicit */int) (short)-27853))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))));
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                arr_10 [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 1625192551U);
                arr_11 [i_0] [i_1] [i_2] [i_1] = ((arr_8 [(short)12] [i_1] [i_2 - 1]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1])) : (((/* implicit */int) (signed char)37)));
                arr_12 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2] [i_0]))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_1])) * (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2]))));
                var_22 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)3137)) ? (((/* implicit */unsigned long long int) -1385404695)) : (var_9))));
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_3])), (var_16)))) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_3] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)94)))))), (((((/* implicit */_Bool) (unsigned short)3147)) ? (((((/* implicit */unsigned long long int) 8774305360172804121LL)) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-3371913863565797895LL) : (arr_9 [i_3] [5LL] [i_0]))))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_3] [i_4] [i_5] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_3] [i_5]))));
                        var_24 -= ((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1322616459)))))));
                        arr_20 [6LL] [i_0] [i_0] [15] [i_0] = ((/* implicit */int) var_4);
                        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_3] [i_4]))))) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((int) arr_0 [i_3] [i_3]))));
                    }
                } 
            } 
            var_26 = ((/* implicit */short) ((_Bool) (~(((unsigned int) (unsigned short)3137)))));
            arr_21 [3U] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 4959981238694542433LL)), ((-(var_9)))));
        }
    }
    var_27 = ((/* implicit */unsigned long long int) (unsigned char)8);
}
