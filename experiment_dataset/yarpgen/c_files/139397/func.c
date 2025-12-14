/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139397
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_4 [4U] [7ULL] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) >= (((/* implicit */int) ((4214608795U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))))))));
        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-21))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-32766))))) : (max((((/* implicit */unsigned long long int) var_1)), (var_2)))))) ? (80358505U) : (((/* implicit */unsigned int) ((((var_0) > (var_10))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 4214608795U)) != (var_2)))) : (((/* implicit */int) var_6)))))));
}
