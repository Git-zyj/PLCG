/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101747
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
    var_10 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned long long int) 3448490623U))));
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_9))));
    var_12 &= ((/* implicit */short) -229435232);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (arr_1 [i_0] [i_0])))) >> (((/* implicit */int) (_Bool)1))));
        var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 2774475183U)) ? (max((((/* implicit */unsigned long long int) (unsigned short)42207)), (((((/* implicit */_Bool) -408824612)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (18446744073709551606ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_7))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_16 *= ((/* implicit */_Bool) max((((unsigned int) (-(((/* implicit */int) (unsigned short)45500))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-70)))))))));
                var_17 *= ((/* implicit */unsigned int) var_7);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3647739232688429726LL)) ? ((+(3448490608U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_1])))))));
                    var_19 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_3] [i_1] [i_1]);
                }
                for (int i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5] [i_3] [i_1] [i_1])) ? (((/* implicit */int) (signed char)32)) : ((~(((/* implicit */int) arr_12 [i_3] [i_5 - 1]))))));
                    var_21 |= ((/* implicit */short) (+(((/* implicit */int) var_3))));
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_1]))))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                }
                var_24 ^= ((/* implicit */unsigned int) var_2);
            }
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+(((arr_5 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_2])))))))));
        }
        var_26 = ((/* implicit */signed char) (~((~(var_5)))));
        arr_18 [i_1] [i_1] |= ((/* implicit */int) (_Bool)1);
        arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_5)));
    }
}
