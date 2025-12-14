/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183245
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))) ? ((~(((/* implicit */int) ((short) (unsigned char)255))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((~(var_7))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)14))))))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) > (18446744073709551615ULL)))), ((+(((/* implicit */int) arr_0 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)4095);
                var_15 = ((/* implicit */long long int) min((11835327485705366100ULL), (((/* implicit */unsigned long long int) 3460825320U))));
                var_16 = ((/* implicit */_Bool) ((var_7) / (((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) -1);
    var_18 &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_7)) : (834141982U)))) > (max((8086120345160603010LL), (((/* implicit */long long int) var_11)))))))));
    var_19 &= ((/* implicit */unsigned short) (~(var_7)));
}
