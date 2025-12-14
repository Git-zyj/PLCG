/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118842
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
    var_16 = ((/* implicit */unsigned long long int) (short)-20678);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (+(1346754110U)));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(arr_4 [i_2 + 1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)25416)))))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2948213185U)) && (((/* implicit */_Bool) (short)18295))))) : (((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */signed char) (short)(-32767 - 1));
    var_20 = ((/* implicit */short) var_9);
}
