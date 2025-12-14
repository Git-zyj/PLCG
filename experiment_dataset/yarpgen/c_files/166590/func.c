/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166590
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
    var_18 = ((/* implicit */unsigned short) var_3);
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_9)))) & ((+(((((/* implicit */int) var_6)) << (((((/* implicit */int) var_6)) - (38049)))))))));
    var_20 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) * (((((/* implicit */_Bool) arr_3 [i_0])) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)6])))))))) ? ((+(8766670917269004000LL))) : (min((268435455LL), (((/* implicit */long long int) (unsigned char)161)))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -268435455LL)) && (((/* implicit */_Bool) (unsigned char)255)))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_0])))))) || (((((((/* implicit */_Bool) 821605202410544605LL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)2])))) || (((/* implicit */_Bool) 268435455LL))))));
                var_21 = arr_3 [i_0];
            }
        } 
    } 
}
