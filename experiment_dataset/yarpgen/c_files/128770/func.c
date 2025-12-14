/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128770
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 ^= ((unsigned char) (~(((/* implicit */int) arr_2 [i_0 - 2]))));
                var_19 = ((/* implicit */_Bool) 1279329580U);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_15))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_8)))) ? (((((/* implicit */_Bool) 2304331586U)) ? (((/* implicit */long long int) var_4)) : (-6892891348055651097LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
