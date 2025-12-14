/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139849
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(var_5))))));
        var_17 = ((/* implicit */short) var_15);
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_3)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) var_4)))))) || (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5526131078965984137LL)), (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_4))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
