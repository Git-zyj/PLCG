/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100216
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) (short)7676);
                arr_7 [15ULL] [i_0] [i_0] = ((/* implicit */int) ((((int) arr_3 [i_0 + 1])) == (min((arr_3 [i_0 + 1]), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (min((((/* implicit */unsigned int) min((var_17), (((/* implicit */signed char) (_Bool)1))))), (1407554866U))))))));
    var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */int) min(((signed char)71), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)61978)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (_Bool)1)))))), (((int) max((var_17), (var_14))))));
}
