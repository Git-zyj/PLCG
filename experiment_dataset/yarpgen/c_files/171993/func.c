/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171993
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
    var_13 = ((/* implicit */unsigned char) ((var_7) | ((((~(var_4))) & (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((-2579728767364236809LL) + (2579728767364236817LL))))))))));
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3470))) : (arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) & ((~(arr_0 [i_0])))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)125))))))) : (arr_1 [i_0])));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_4);
    }
}
