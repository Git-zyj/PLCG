/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133715
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
    var_12 = ((/* implicit */long long int) var_9);
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_10))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)15)))) >> (((/* implicit */int) ((_Bool) var_0)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)17596)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) <= (arr_4 [i_0] [i_0 - 1] [i_1]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))))), (2250533439082926884LL)))));
                var_15 -= ((/* implicit */unsigned short) min((min((((int) (unsigned char)15)), (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) ((short) (_Bool)1)))));
                var_16 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-2239876951395290572LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) + (9223372036854775807LL))) >> ((((-(arr_1 [i_0 + 1] [i_1 + 1]))) - (4713210537634072600LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_6);
}
