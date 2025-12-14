/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152354
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((-(arr_1 [i_0]))) << (((max((8035196879146695408ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) - (18446744072768986948ULL))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-89))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-89))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_7))));
}
