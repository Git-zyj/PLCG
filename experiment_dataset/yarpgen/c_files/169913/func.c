/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169913
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)1020)))))) <= (min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)42886)) - (42881)))))))) ? (((/* implicit */int) var_5)) : ((((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) (!((_Bool)1))))))));
        var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((+(((unsigned long long int) (_Bool)1))))));
    }
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (((((/* implicit */_Bool) var_8)) ? ((~(346329983892253712LL))) : (var_8)))));
}
