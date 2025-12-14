/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144392
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
    var_10 = ((/* implicit */signed char) (short)-18094);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) (unsigned char)192);
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) << (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min(((unsigned short)63684), (((/* implicit */unsigned short) var_2))))))))));
                var_13 = (i_0 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) arr_0 [i_0])) + (14632)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 10830593695048931956ULL)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((((/* implicit */int) arr_0 [i_0])) + (14632))) - (12356)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 10830593695048931956ULL)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0]))))));
            }
        } 
    } 
}
