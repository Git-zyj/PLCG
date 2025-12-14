/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118227
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((unsigned long long int) (+(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_16)))));
        var_20 = (+(((/* implicit */int) ((unsigned short) var_18))));
    }
    var_21 = var_11;
    var_22 = ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)251)))), ((+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (unsigned char)0))))))));
}
