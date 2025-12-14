/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156551
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
    var_12 = ((/* implicit */_Bool) ((var_8) & (((long long int) ((var_7) & (var_3))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_1);
        var_13 = ((/* implicit */long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned short) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (unsigned char)62))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5423))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned short)21368)) : (((/* implicit */int) (unsigned char)254))));
        arr_8 [i_1] = var_7;
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_16 = ((/* implicit */signed char) var_0);
        var_17 = ((/* implicit */long long int) arr_5 [i_2] [i_2]);
        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (((long long int) arr_5 [i_2] [i_2]))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_1 [i_2]) & (((((/* implicit */_Bool) (unsigned short)21368)) ? (2648932211U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) & (((var_8) & (var_8)))));
        var_19 *= ((/* implicit */unsigned short) (_Bool)1);
    }
}
