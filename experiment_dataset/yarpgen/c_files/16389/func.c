/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16389
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
    var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-4759404940520491554LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (-7517080396434092955LL))) * (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-44), (((/* implicit */signed char) (_Bool)1))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_7))))))) - (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (signed char)3);
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65)))))));
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2143842338) : (((/* implicit */int) var_5)))))))) < (((/* implicit */int) var_5))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
