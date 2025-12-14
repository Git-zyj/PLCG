/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106246
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
    var_14 = var_5;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */_Bool) var_9);
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 18446744073709551615ULL))));
                    arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? ((~(-1187295127091597468LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_0] [i_1])), ((signed char)91))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_6 [i_0] [i_1] [i_2 - 2])))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_10)))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [6ULL] [i_2 + 1]))) != (-6164060321024371722LL))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_0))))) : (arr_5 [i_2 + 2] [i_2 + 3] [i_3 + 3])));
                        arr_15 [i_1] [i_3 + 1] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) arr_13 [(_Bool)1] [9U] [i_1] [i_2] [i_2] [i_3]);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_1] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_12 [i_2 + 2] [i_1] [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) arr_12 [i_2 + 4] [i_1] [i_3 - 1] [i_3 + 1]))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3644)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [(short)5] [i_0] [i_2] [i_3])) != (((/* implicit */int) arr_2 [i_0])))))) : (var_6)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) var_3);
                            arr_21 [i_0] &= ((/* implicit */unsigned int) ((_Bool) var_3));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_22 *= ((/* implicit */_Bool) ((long long int) arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_2 - 2] [8LL] [i_1]));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_12))));
                        }
                        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? ((~(arr_19 [i_0] [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 2] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_2])), ((short)3630))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_4])))))) != (((/* implicit */int) min(((unsigned char)30), (((/* implicit */unsigned char) var_1))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))) : ((((_Bool)1) ? (3122977260U) : (((/* implicit */unsigned int) 1675933313))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_3))) ? (((unsigned long long int) (short)-3658)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_7))))))))));
                        var_26 = ((/* implicit */short) (~(max((((/* implicit */int) arr_25 [i_0] [i_7] [i_2 + 3] [i_0] [i_2])), (var_2)))));
                        var_27 = ((/* implicit */_Bool) ((long long int) ((1801372405704050651ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                        var_28 = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    } 
}
