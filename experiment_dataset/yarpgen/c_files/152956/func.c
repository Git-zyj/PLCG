/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152956
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = min(((unsigned char)67), (((/* implicit */unsigned char) var_10)));
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)14279), (((/* implicit */unsigned short) var_0)))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) (unsigned char)52)))))));
                var_18 = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_11);
}
