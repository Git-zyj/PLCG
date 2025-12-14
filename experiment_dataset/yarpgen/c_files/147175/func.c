/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147175
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
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11023919184372176024ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)27188)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_0 - 2])) || (arr_0 [i_0 - 1] [i_1 + 1])))) : (var_4)));
                    arr_9 [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
            } 
        } 
    } 
}
