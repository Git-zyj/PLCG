/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103907
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) var_12);
        var_19 -= arr_0 [i_0];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(signed char)1] [(signed char)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1 - 1]))))) + (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((var_6) + (arr_0 [i_1]))) : (((arr_2 [i_1 - 1]) * (var_6)))))));
    }
    var_21 = ((((/* implicit */_Bool) 8796025913344ULL)) ? (12942576020901505312ULL) : (12942576020901505312ULL));
}
