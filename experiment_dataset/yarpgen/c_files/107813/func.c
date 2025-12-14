/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107813
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
    var_16 = ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (1090661129701036068LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (var_12)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))));
        var_19 = ((/* implicit */long long int) max((var_19), ((+(-1090661129701036068LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((~(var_12))) > (min((9223372036854775807LL), (1090661129701036067LL))))))));
    }
}
