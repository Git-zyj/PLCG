/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122632
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
    var_12 = ((/* implicit */_Bool) ((-7273159184041685426LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [0ULL] [i_0] = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_0 [i_0])))))) > (max((((/* implicit */unsigned int) var_6)), (arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) -4850585732087253207LL))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_6))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) | (27U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4850585732087253182LL)))))));
    }
    var_16 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
}
