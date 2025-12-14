/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173371
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [11U] = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0 - 2])), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) arr_1 [i_0])) : (1802046043066874097LL)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 544061504U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (544061504U)))), (1087676634453464481ULL))));
        arr_3 [i_0] = max((((arr_0 [i_0 + 1]) ? (2132820068U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))), (((3494099692U) + (4266641787U))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_14 &= ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_1 + 3]));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)24))));
        var_16 = ((/* implicit */short) var_9);
    }
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (1704796755658654684ULL)));
}
