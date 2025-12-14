/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122514
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
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */short) min((min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))))), (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
}
