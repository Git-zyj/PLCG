/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111485
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
    var_20 = max((((((/* implicit */_Bool) 3512547199095997960LL)) ? (((/* implicit */long long int) -1)) : (-3512547199095997945LL))), (((/* implicit */long long int) var_13)));
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((1298701899590457479LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))) != (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (3410431449049683361LL)))));
        arr_2 [i_0] = var_14;
    }
    var_23 = ((/* implicit */unsigned char) -16);
    var_24 = var_14;
}
