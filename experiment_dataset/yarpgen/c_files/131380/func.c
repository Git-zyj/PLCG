/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131380
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((min((var_3), (((/* implicit */int) var_17)))), ((~(((/* implicit */int) var_16))))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (3174438420862074456ULL) : (((/* implicit */unsigned long long int) var_12)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) var_1)) == (max((((/* implicit */unsigned int) var_0)), (var_12))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3174438420862074434ULL)))))));
        var_21 -= ((/* implicit */signed char) ((unsigned char) max((((1428764402623923417ULL) & (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-28559))))))));
    }
    var_22 = ((/* implicit */signed char) var_15);
}
