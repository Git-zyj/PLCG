/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138370
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) (short)-8811))) : (((/* implicit */int) (short)7824))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_5 [i_0] [i_0]) : (1724239742U)));
            arr_7 [i_0] [8ULL] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8811)) || (((/* implicit */_Bool) (short)-8796))));
            var_18 ^= ((/* implicit */unsigned short) ((unsigned long long int) (short)-8811));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_2 + 1]))));
        var_20 -= ((/* implicit */unsigned int) ((_Bool) (unsigned short)23036));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) -7211649838848673604LL);
        var_21 -= ((/* implicit */unsigned int) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 1])))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3)))))))) ? (((var_5) ? (((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) var_14))))) : (min((var_15), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_23 = ((((/* implicit */_Bool) var_13)) && (((((/* implicit */unsigned long long int) 2550444939U)) >= (10881980855977336834ULL))));
}
