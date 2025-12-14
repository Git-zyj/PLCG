/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114227
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_4))));
        var_16 = ((/* implicit */unsigned short) ((_Bool) ((var_12) & (((/* implicit */int) arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (-6196602118464740033LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16613)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((~(((/* implicit */int) (short)-31671)))), (((/* implicit */int) (short)-16613)))))));
            var_19 = ((/* implicit */signed char) (-(0LL)));
        }
    }
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        arr_7 [i_2 - 2] = ((/* implicit */int) ((unsigned short) var_12));
        arr_8 [i_2 - 3] = arr_3 [(short)14] [(short)14];
        arr_9 [i_2] = ((/* implicit */_Bool) (short)-16637);
        arr_10 [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_10))) ? (((int) (short)-1)) : (((/* implicit */int) var_11))));
    }
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_2)))))));
    var_21 = ((/* implicit */signed char) (short)16619);
}
