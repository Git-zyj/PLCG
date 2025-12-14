/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153325
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_15);
        var_19 -= ((/* implicit */unsigned int) ((((0ULL) * (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (unsigned short)16383))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (arr_1 [3LL] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) 993702351))))) : ((-(((/* implicit */int) var_3)))))))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned short)65519);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_13))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [6ULL] [i_1])) : (((/* implicit */int) var_1))))) ? (2878981953U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)18531)) : (((/* implicit */int) (unsigned short)7))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    arr_14 [i_3 + 2] [i_0] [i_1] [i_0] [i_0] = (!(((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_3 + 2])) && (((/* implicit */_Bool) var_6)))));
                    var_21 *= ((/* implicit */unsigned short) var_1);
                }
                var_22 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_11))))));
                var_23 = ((/* implicit */unsigned int) var_17);
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47003)) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) (unsigned short)47004))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)18532)), (4294967295U)))) ? (((((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3])) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) 6136058419215320234LL))))) : (max((((/* implicit */int) (unsigned short)19)), (((((/* implicit */_Bool) (unsigned short)18548)) ? (-610155514) : (((/* implicit */int) (unsigned char)109))))))));
                var_25 = 13495650187254419876ULL;
            }
            var_26 *= ((/* implicit */short) min((min((1397555170647325024ULL), (((/* implicit */unsigned long long int) -1747431139)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16383)))))));
            var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) -413668401))) ? (-826090347) : (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_11))))))), (201326592)));
        }
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (347630105) : (1747431138)))))))) >= (min((max((-9223372036854775802LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_11))))));
}
