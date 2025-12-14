/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140286
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((/* implicit */int) var_4)) & ((+(((/* implicit */int) var_12)))))), ((~(((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_18))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)37)) && (((/* implicit */_Bool) (signed char)37))));
                arr_6 [i_0] [12U] [(_Bool)1] = ((/* implicit */long long int) max(((signed char)107), ((signed char)-32)));
                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (short)-9589)) : (((/* implicit */int) (unsigned char)28))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
    var_24 = ((/* implicit */long long int) ((unsigned long long int) ((var_14) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
}
