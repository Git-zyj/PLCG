/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172416
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) | (-3260826355066951222LL))) % ((~(9223372036854775801LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)107)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)-117))))));
                var_18 = ((/* implicit */signed char) min((var_18), (arr_4 [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -9223372036854775801LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */short) var_14);
}
