/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143043
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
        var_11 = ((/* implicit */signed char) (_Bool)1);
        var_12 = ((/* implicit */unsigned char) ((18446744073709551612ULL) * ((~(18446744073709551612ULL)))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) var_2);
        var_14 &= ((/* implicit */long long int) var_8);
        var_15 = ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14023)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (18446744073709551594ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)14027))) : (((((/* implicit */_Bool) 3ULL)) ? (-883627733969363114LL) : (var_2)))))));
    }
    var_17 = ((/* implicit */int) (short)14027);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? (((/* implicit */unsigned long long int) var_7)) : ((+(18446744073709551612ULL))))));
                arr_12 [i_3] [i_3] [(unsigned char)16] = ((/* implicit */signed char) (-(max(((~(2147483637))), ((~(((/* implicit */int) arr_10 [i_3] [i_3] [11LL]))))))));
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */short) max((130252456073964652ULL), (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)255)) - (255))))))));
            }
        } 
    } 
}
