/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149343
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [20] [i_0]);
        var_16 += ((/* implicit */int) (~(((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (15226675195382785072ULL))))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (4113092040U))), (((/* implicit */unsigned int) ((short) var_10)))))) ? (((/* implicit */long long int) ((((var_8) + (4113092056U))) << (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned char)154)))))))) : ((-(-6145422177135819238LL)))));
}
