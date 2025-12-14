/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138341
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_15)), (var_4))) >= (((unsigned long long int) -5565604531819369556LL)))))) > (max(((~(var_11))), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [(unsigned char)23] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23259)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5565604531819369570LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))) && (((/* implicit */_Bool) var_7)));
            var_17 += ((/* implicit */long long int) 18446744073709551610ULL);
            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65529))));
            var_19 = ((/* implicit */unsigned int) (-(2076337054)));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)0] [i_0]))));
                var_21 *= ((/* implicit */signed char) ((unsigned char) arr_9 [i_0] [i_0]));
                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) -1362134159)) & (-3858213824124821698LL)));
            }
        }
        var_24 ^= (~(((/* implicit */int) arr_9 [i_0] [i_0])));
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (((!(var_2))) || (((/* implicit */_Bool) arr_2 [i_0]))));
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (5565604531819369542LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_8 [i_3] [i_3] [16LL] [i_3]))));
        var_26 += ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */_Bool) -7326619659447894499LL)) ? (5565604531819369542LL) : (((/* implicit */long long int) 1953221551U)))))));
        var_27 = min((max(((-(518493891U))), (((/* implicit */unsigned int) ((_Bool) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19621)) * (((/* implicit */int) arr_1 [i_3]))))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) arr_9 [0U] [i_3]);
    }
    var_28 = ((unsigned long long int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)));
}
