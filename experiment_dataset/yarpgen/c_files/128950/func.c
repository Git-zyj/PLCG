/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128950
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-95))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_2 [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_16 = ((/* implicit */signed char) (-(4724409488111077721ULL)));
}
