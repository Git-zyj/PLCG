/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128354
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)65529))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (unsigned short)46507))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [7ULL])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 3975567788U)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) ((unsigned short) var_11)))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) ((signed char) var_9));
}
