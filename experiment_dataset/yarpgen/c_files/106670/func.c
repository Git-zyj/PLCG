/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106670
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_6;
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_18 += ((/* implicit */short) var_16);
            arr_7 [i_0] = ((unsigned char) var_2);
            var_19 = var_2;
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_7))));
            var_21 = ((/* implicit */long long int) var_6);
            var_22 = ((122076323) & (((/* implicit */int) (short)-2761)));
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 4; i_4 < 12; i_4 += 3) 
            {
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_4 - 1] [i_3 + 1] [i_3 + 1]))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_4 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_4 + 3]))) : (var_15)));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), ((unsigned char)251)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_3] [i_0] [i_4] [i_0] [i_3] [i_0] = ((/* implicit */short) arr_16 [i_6 - 2] [i_3 - 1]);
                        var_26 = ((-21986842) / (((/* implicit */int) (short)2760)));
                        var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (951977414) : (671872034)))));
                        arr_24 [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) arr_17 [i_0] [i_3] [i_5] [i_5]);
                    }
                    var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) var_14))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2761))))) == (((/* implicit */unsigned long long int) var_15))));
                    var_30 += ((/* implicit */unsigned long long int) arr_26 [i_7]);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_29 [i_8] [i_8] [i_3] [i_0] [i_0] = ((/* implicit */short) arr_19 [i_4 - 4] [i_8] [i_8] [i_4 - 4] [i_3 + 1] [i_3]);
                    var_31 = ((/* implicit */int) min((var_31), (arr_21 [i_3 + 1] [i_3] [i_3 + 1] [i_4 - 2] [i_4 - 2])));
                    var_32 -= ((/* implicit */int) var_7);
                }
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    arr_32 [i_3] [i_4] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_3]);
                    var_33 |= ((/* implicit */short) ((3723876874946876030ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10543159935263332164ULL)) ? (((/* implicit */long long int) 122076310)) : (9223372036854775807LL))))));
                    arr_33 [i_0] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0] [i_0] [i_3])))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                arr_36 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_34 [i_3] [i_3]);
                arr_37 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (var_8) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_10] [i_10] [i_10] [i_10]))))) ? (arr_5 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -671872035)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_10] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_3] [i_3] [i_3] [i_0])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1])) ? (((arr_17 [i_0] [i_3] [i_3] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_0] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                arr_38 [i_0] [i_0] [i_10] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_34 [i_3] [i_3 + 1])) > (arr_3 [i_3 - 1] [i_3] [i_3 - 1]))) ? (((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_3 [i_3 - 1] [i_3] [i_3 - 1]) : (((/* implicit */int) arr_34 [i_3] [i_3 - 1])))) : ((~(((/* implicit */int) arr_34 [i_3] [i_3 + 1]))))));
            }
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1]))));
        }
    }
    var_35 = ((/* implicit */long long int) var_7);
}
