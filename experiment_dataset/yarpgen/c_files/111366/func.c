/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111366
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)109)), ((+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)2)), ((unsigned short)40524))))))));
    var_21 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))) : (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned short)8927)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) ((unsigned char) min((var_4), (((/* implicit */unsigned int) var_18)))))) : (((/* implicit */int) arr_1 [(signed char)7]))));
                arr_5 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))))));
            }
        } 
    } 
    var_23 = max((var_1), (((/* implicit */unsigned long long int) (+(-1079271499)))));
    var_24 -= ((/* implicit */signed char) var_1);
}
