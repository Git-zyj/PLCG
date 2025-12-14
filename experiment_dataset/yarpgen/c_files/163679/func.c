/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163679
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */signed char) arr_3 [i_1]);
                var_20 *= ((/* implicit */signed char) max((((unsigned long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (5251269913425738015ULL)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_1])), (max(((~(((/* implicit */int) (unsigned char)4)))), ((+(((/* implicit */int) (unsigned short)65408)))))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */short) var_6);
    var_23 += ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
    var_24 ^= ((/* implicit */long long int) var_4);
}
