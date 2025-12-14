/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18175
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((unsigned long long int) var_16);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((144114638320041984LL) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63708)) && (((/* implicit */_Bool) (short)4095)))))))) : ((+(3529692377U)))));
    }
    var_18 = ((((/* implicit */_Bool) ((unsigned char) max(((short)4101), ((short)15))))) || (((/* implicit */_Bool) (unsigned char)105)));
}
