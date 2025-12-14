/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183644
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
    var_13 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)40951))))));
    var_14 &= ((/* implicit */unsigned char) max((((short) var_2)), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (_Bool)1))))))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40951))) <= (1344937212U))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_7)))) ? (max((var_4), (((/* implicit */long long int) (unsigned short)65535)))) : ((((_Bool)1) ? (var_10) : ((-9223372036854775807LL - 1LL)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                var_16 = (~(((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_1 [i_0]))))) & ((~((-9223372036854775807LL - 1LL)))))));
                var_17 = ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((short) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_2))))));
}
