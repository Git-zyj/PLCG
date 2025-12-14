/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137541
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
    var_16 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 11325547661207282782ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775807LL)))))));
    var_17 = ((/* implicit */int) min((7121196412502268833ULL), (((/* implicit */unsigned long long int) (unsigned short)7594))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (-(((unsigned int) arr_3 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */long long int) 630301742U)) ^ (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) / ((-(((/* implicit */int) (short)21208))))))))))));
                var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)12772)))) && (((/* implicit */_Bool) min((11325547661207282782ULL), (((/* implicit */unsigned long long int) (short)-6552)))))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0] [i_1]));
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_13)))));
    var_22 = (-(((long long int) var_9)));
}
