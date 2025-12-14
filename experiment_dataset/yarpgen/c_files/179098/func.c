/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179098
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)16)) ? ((-(0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31348)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */long long int) ((/* implicit */int) max((max((var_11), ((short)-1))), (((/* implicit */short) ((_Bool) var_2)))))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (-(max((1152921504606846912LL), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-23401)))))))));
                    arr_9 [9LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (short)31350);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((long long int) (short)0)))));
}
