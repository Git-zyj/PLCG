/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101675
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)219))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) var_4)));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned char)187))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16770))) - (var_2))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_8))))))));
    var_17 = ((/* implicit */signed char) var_7);
}
