/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104422
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
    var_13 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_0)) : (var_2)))), (max((var_11), (((/* implicit */unsigned int) (unsigned char)16)))))) < (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)240)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) min(((~(((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) var_7)))))), (arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~((-(max((arr_3 [i_3]), (var_3))))))))));
                                var_17 = ((/* implicit */long long int) var_3);
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) arr_0 [14])), (-6099410877692395789LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_0] [i_4 + 3] [i_4 - 2] [i_4 - 2]), (min(((short)32767), (((/* implicit */short) var_10)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4] [i_3] [(unsigned char)12] [i_1] [i_0])) >> (((262112ULL) - (262109ULL)))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) var_5))))));
                            }
                        }
                    } 
                } 
                var_19 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 971047434))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) arr_14 [i_0] [i_1]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0])) % (((/* implicit */int) arr_15 [(short)12]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : ((-(arr_2 [i_5])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((unsigned short) (signed char)64));
                            var_23 = ((/* implicit */signed char) arr_11 [(_Bool)1] [1U] [(short)4]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (735436182) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                            var_25 = ((/* implicit */long long int) ((unsigned short) (unsigned char)178));
                        }
                        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_26 [13ULL] [i_1] [i_5] [i_6] = ((/* implicit */long long int) max(((unsigned char)234), (((/* implicit */unsigned char) ((signed char) (unsigned char)14)))));
                            arr_27 [i_6] = ((/* implicit */unsigned int) min((var_12), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_1] [i_1])))))));
                            arr_28 [i_0] [i_1] [i_6] = ((/* implicit */long long int) arr_18 [i_1]);
                            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((3723719461135394189LL), (arr_17 [i_1] [i_1] [(unsigned short)17])))) ? (((/* implicit */int) ((_Bool) var_1))) : ((-(((/* implicit */int) (signed char)46)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)46)) <= (((/* implicit */int) (signed char)78)))))));
                        }
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (signed char)33))))), (((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (arr_20 [i_0] [i_0] [(signed char)3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_6]))))))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_0] [i_1] [(signed char)12] [i_0] [i_1] [6]), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_5] [i_6]))))))))));
                    }
                    arr_29 [i_0] [(unsigned short)12] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)69))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) (-(max((var_8), (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69)))))))));
    var_29 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) -1866154922)) <= (12311103309993435218ULL)))))), (((/* implicit */int) max(((signed char)78), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53620)) == (((/* implicit */int) (unsigned char)153))))))))));
}
