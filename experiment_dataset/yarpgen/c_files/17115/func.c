/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17115
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */unsigned int) (unsigned char)37);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) max((arr_0 [i_0] [i_1]), ((signed char)-127)))), (var_11))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_0 [i_0] [i_1]), ((signed char)35))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1 - 2])))) : ((+(((/* implicit */int) (unsigned char)141))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)114)) >> (((((((/* implicit */int) (unsigned char)116)) << (13LL))) - (950262)))))));
}
