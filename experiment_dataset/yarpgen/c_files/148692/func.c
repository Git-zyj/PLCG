/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148692
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_16 -= (_Bool)0;
        var_17 = var_4;
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) ((_Bool) (-2147483647 - 1)))))))));
    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -804368475)) ? (max((((/* implicit */int) var_13)), (var_14))) : (((int) var_8))))) ? (((((_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (var_5) : ((~(((/* implicit */int) (signed char)75))))))))));
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) != ((+((((_Bool)1) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (_Bool)1))))))));
}
