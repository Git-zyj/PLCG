/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147269
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))));
                var_10 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)16422))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) | (arr_5 [i_0] [i_1 - 4])))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (((~(((var_5) << (((((var_7) + (1635278043))) - (11))))))) ^ ((~(((/* implicit */int) (short)-2537)))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned char) var_5);
}
