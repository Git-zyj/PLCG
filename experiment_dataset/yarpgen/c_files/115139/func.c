/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115139
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
    var_19 += ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (var_17))) % (((/* implicit */unsigned long long int) 1318524224))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) (unsigned char)182)) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_20 *= ((/* implicit */signed char) ((unsigned char) arr_5 [i_1]));
            arr_9 [(short)5] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))))))) / ((+(((/* implicit */int) arr_10 [i_2 + 2] [11] [i_2 + 1] [11]))))));
                var_22 |= min((((unsigned long long int) (~(((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2]))))));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 15LL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5486)) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (arr_10 [i_0] [i_0] [4ULL] [i_3 - 2])));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_3] [i_3])) ^ (((/* implicit */int) arr_10 [i_0] [i_3 + 3] [i_3] [(unsigned char)11]))))) ? (((/* implicit */int) min((var_14), (arr_11 [i_0] [5LL] [i_3])))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6489))) : (min((((arr_1 [i_3]) - (((/* implicit */unsigned long long int) 2520547079878295423LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)11)), (2520547079878295409LL))))))));
            var_26 |= ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (short)2124)) : (((/* implicit */int) (signed char)-119))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_10 [9] [i_0] [i_0] [i_0]);
        var_27 = ((/* implicit */signed char) max((((((927234373454658342LL) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(signed char)11])) - (178))))) & (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) - (0ULL)))) ? (((/* implicit */int) max((arr_13 [(unsigned char)11] [i_0] [i_0]), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [(signed char)2]))))) : (((/* implicit */int) arr_0 [(short)12])))))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((unsigned char) 8ULL));
                                var_29 = ((/* implicit */unsigned long long int) ((_Bool) arr_11 [(_Bool)1] [i_6] [9ULL]));
                                var_30 = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_35 [i_10] [i_9] [i_6] [(unsigned short)12] [(short)4] [i_4] |= ((/* implicit */unsigned short) (unsigned char)249);
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)21895)), ((unsigned short)54020)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((561701260920439800ULL), (10ULL))))))) : (((/* implicit */int) min((arr_7 [i_4]), (arr_7 [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 &= ((/* implicit */short) arr_2 [i_4]);
    }
}
