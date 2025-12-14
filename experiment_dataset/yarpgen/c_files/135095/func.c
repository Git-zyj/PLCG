/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135095
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) * (((/* implicit */int) var_2))))), ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (9422617660146091761ULL) : (((/* implicit */unsigned long long int) 606324320U))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (0U) : (606324320U))))))));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) 2444650804265860083ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1484283632U))));
        var_17 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 + 1]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((68719476735ULL) - ((((_Bool)0) ? (((/* implicit */unsigned long long int) -1996709147)) : (68719476735ULL))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [(signed char)7])) ? (arr_2 [i_0]) : (arr_3 [i_1] [i_1])));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        }
    }
    for (int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = (~(559739105U));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_7 [6U] [(signed char)7]))));
    }
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        var_21 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)21173), (((/* implicit */short) (unsigned char)255)))))) * ((+(281474976710400ULL))))), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3])));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_4 + 2] [i_3 + 1]));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                var_22 = ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (short)8191)));
                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21173))) : (0ULL)))) ? (min((arr_10 [i_3 - 1] [i_3 - 2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21174)) ? (((/* implicit */int) arr_15 [i_3 - 1] [i_4] [i_4 + 3])) : (((/* implicit */int) arr_11 [i_5])))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 7049349496923641758LL)) % (2ULL))))));
            }
            var_25 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) | (5971835463033306561ULL)));
            var_26 = min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) ((4294967286U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13929)))))), (((721560087U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))))))));
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)-8191))), (arr_12 [i_3 - 1])))))))));
    }
    var_28 ^= ((/* implicit */unsigned long long int) ((signed char) 3688642977U));
}
