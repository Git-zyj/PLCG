/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102216
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
    var_16 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)5830)) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)23864)) : (((/* implicit */int) (short)-23864))))) ? ((~(4721002141875068874LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-23864)) - (((/* implicit */int) (short)-5838)))))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5916049672030944850LL)) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((((((/* implicit */int) (short)-5815)) + (2147483647))) >> (((63U) - (34U)))))));
            var_18 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15577))));
            arr_7 [i_1] [18U] [i_0] = ((/* implicit */long long int) ((10076220346117342605ULL) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)59195)))))))));
            var_19 -= ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59206)) ? (((/* implicit */int) (unsigned short)59224)) : (((/* implicit */int) (short)5847))))), (2096640U));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_21 = ((/* implicit */long long int) var_5);
                arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10076220346117342610ULL)) ? (((/* implicit */int) (unsigned short)3182)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */unsigned long long int) 3401987805U)) - (8370523727592209010ULL))) : (((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((4294967295U) - (4294967280U))))), ((~(((/* implicit */int) (short)-6638)))))))));
                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 + 4] [i_5 + 2] [i_5]))));
                    var_23 -= ((/* implicit */signed char) (~((~(892979490U)))));
                    arr_21 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_0 + 2] [i_2] [i_5] [i_2]))));
                }
                var_24 |= min((((/* implicit */long long int) arr_11 [i_4] [(short)16] [i_0 + 3] [i_0 + 3])), (((((/* implicit */_Bool) ((((/* implicit */int) (short)4624)) >> (((/* implicit */int) (unsigned char)1))))) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (short)5303)) >> (((((/* implicit */int) (short)-5862)) + (5886)))))))));
            }
            var_25 = ((/* implicit */unsigned char) (+(arr_18 [i_0 + 1] [i_0 + 1] [i_2] [i_2])));
            arr_22 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30899))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_14))));
        }
        var_27 = ((/* implicit */short) (unsigned char)1);
    }
    var_28 = ((/* implicit */_Bool) var_7);
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_1))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(var_10))) - (((/* implicit */unsigned int) 1353158752))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((1445799208) >> (((/* implicit */int) var_7)))))))));
}
