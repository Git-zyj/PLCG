/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141841
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
    var_17 = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (var_16)));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (+(2632845145U)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_19 = var_15;
            var_20 += ((/* implicit */_Bool) var_5);
        }
        var_21 = ((/* implicit */_Bool) ((min((max((var_16), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) max(((short)512), (((/* implicit */short) (_Bool)0))))))) + ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))));
    }
}
