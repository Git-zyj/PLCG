/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17865
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((+(var_7))) >= (var_17)))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)54))))));
        arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))) / (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned int) 2107931088))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_9 [(unsigned short)9] [i_1] = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0]))))) || (((3744208394U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-13019))))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((unsigned int) var_17)) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0])))))))));
                arr_13 [i_0] [1] = ((/* implicit */unsigned char) var_0);
            }
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) (short)(-32767 - 1));
            arr_16 [i_3] [i_3] = ((/* implicit */short) arr_14 [i_0] [i_3]);
            arr_17 [i_0 - 1] [(unsigned short)1] [(unsigned short)3] = ((/* implicit */unsigned short) 0U);
        }
        arr_18 [i_0] &= ((/* implicit */int) var_15);
        var_23 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 3] [(unsigned char)0])) : (((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 3]))))), (max((var_13), (((/* implicit */long long int) arr_8 [i_0 - 3] [i_0 - 3]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) min((arr_20 [(unsigned short)2]), (arr_20 [i_4])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (arr_20 [i_4])))))), (((/* implicit */int) max((arr_20 [i_4]), (((/* implicit */unsigned short) arr_19 [i_4])))))));
        arr_21 [i_4] = ((/* implicit */long long int) arr_19 [i_4]);
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_5 + 1] [i_4]))));
            var_26 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_24 [i_5 - 1] [i_5 - 1])))) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [9LL])), (arr_22 [i_4]))))));
        }
    }
    var_27 &= ((/* implicit */long long int) var_2);
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)27972)))))));
}
