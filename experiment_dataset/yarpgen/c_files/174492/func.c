/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174492
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
    var_15 ^= ((/* implicit */unsigned char) 665602322691580430ULL);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) & ((+(var_3)))))) || (((/* implicit */_Bool) ((unsigned short) ((var_12) & (((/* implicit */unsigned long long int) 1260782553U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [15LL] [16] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (arr_4 [i_1 + 1]))))) : (arr_2 [i_0] [i_0] [i_0]));
                arr_6 [i_0] = ((/* implicit */short) (unsigned char)29);
                var_17 = ((/* implicit */unsigned int) ((short) var_0));
                var_18 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-92)))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
}
