/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178062
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
    var_10 = ((/* implicit */short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(short)0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((var_0) - (1739169120U))))))) ^ ((+(((((/* implicit */_Bool) arr_1 [(signed char)14])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_2))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) var_8));
    }
    var_11 = var_9;
}
