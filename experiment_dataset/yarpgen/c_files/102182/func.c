/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102182
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
    var_18 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)210))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_2 + 1]));
                    var_20 = ((unsigned char) arr_2 [i_0]);
                    var_21 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_12)));
                    var_22 = ((/* implicit */long long int) (+(arr_4 [i_0] [i_0] [5ULL])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2686559425U))))) | ((-(((/* implicit */int) arr_3 [i_0]))))));
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned char i_7 = 4; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                            var_26 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)48254));
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_8 = 3; i_8 < 18; i_8 += 4) 
            {
                var_28 = ((/* implicit */_Bool) arr_10 [4] [i_8 - 3] [i_3]);
                var_29 *= ((/* implicit */signed char) arr_15 [i_4 + 1] [i_8 - 1] [(short)5] [i_8 - 3] [i_3] [i_8]);
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((unsigned int) (short)-8330)))))));
                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)17281))));
            }
            for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                var_32 += ((/* implicit */short) (unsigned short)48241);
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_9 + 1] [i_3] [i_4 - 1] [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)48264)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_4 + 1] [i_3])) : (((/* implicit */int) (signed char)-59)))) : ((+(((/* implicit */int) (signed char)-50))))));
            }
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)50)) ? ((+(3012751684U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])))));
        }
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    var_35 = ((/* implicit */short) (signed char)69);
                    var_36 += ((/* implicit */short) var_7);
                }
                var_37 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)39))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) ((unsigned char) arr_24 [(short)11] [i_10]));
                var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)25555))))) ? (((arr_16 [i_3]) << (((((((/* implicit */int) var_8)) + (137))) - (17))))) : ((-(((/* implicit */int) arr_10 [(short)12] [i_10] [i_13]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_18 [i_3] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_16))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-25))))) || (((((/* implicit */int) arr_21 [i_3] [i_3] [i_3])) < (var_7))))))));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_3] [i_10]), (var_14))))) : (var_10)))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((short) arr_21 [i_3] [i_10] [i_10])))))))));
            }
            var_42 = ((/* implicit */int) min((var_42), (max((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_10]) : (arr_2 [i_3]))), (((/* implicit */int) var_14))))));
            var_43 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-32615)) + (2147483647))) << (((4288115889427691388LL) - (4288115889427691388LL)))));
        }
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)23418))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_9)) == (((/* implicit */int) var_6)))))))) : (((min((3012751687U), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_3] [(short)8] [i_3] [i_3])))) | (((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3]))))));
    }
}
