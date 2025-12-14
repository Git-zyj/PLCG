/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173352
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
    var_11 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)14336)) ? (5426983995699425246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))))) != (((var_8) >> (((((/* implicit */int) (unsigned short)65525)) - (65511)))))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_12 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)4088))))) || ((!(((/* implicit */_Bool) var_5))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_4))))))));
}
