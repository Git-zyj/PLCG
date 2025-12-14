/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105186
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)9908)), (var_10)))) ^ (min((11617552992918992368ULL), (11617552992918992368ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_12))))), (max((((/* implicit */unsigned long long int) var_3)), (11617552992918992371ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_8))))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (var_18)))) || (((/* implicit */_Bool) max((6829191080790559245ULL), (((/* implicit */unsigned long long int) (short)22904))))))))) | (((max((var_2), (((/* implicit */unsigned long long int) var_18)))) + (max((((/* implicit */unsigned long long int) (short)9246)), (var_19)))))));
    }
    var_21 = var_12;
    var_22 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)242))));
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) ((((/* implicit */int) (short)18642)) <= (((/* implicit */int) var_9)))))));
        var_23 = var_3;
    }
}
