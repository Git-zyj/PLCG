/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117537
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned char) var_2);
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) * (0LL));
        var_14 = ((/* implicit */unsigned short) 3003936028254134726ULL);
        var_15 *= ((/* implicit */_Bool) var_5);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned int) arr_0 [i_1]);
        var_17 *= ((/* implicit */signed char) (unsigned char)2);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_2 [i_1]))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [9U])) * (((/* implicit */int) (unsigned short)29027))))))));
    }
    var_19 = ((/* implicit */unsigned char) (-(((var_11) | (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (255U))))))));
    var_20 = ((/* implicit */signed char) var_7);
}
