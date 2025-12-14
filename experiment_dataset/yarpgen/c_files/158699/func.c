/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158699
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
    var_20 = ((/* implicit */unsigned int) (~(var_7)));
    var_21 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) | (var_18)))) || (((/* implicit */_Bool) min(((signed char)-70), ((signed char)71))))))), ((+(min((((/* implicit */unsigned long long int) var_10)), (var_7)))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((var_6) ? (var_5) : (((/* implicit */unsigned int) var_15)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_13))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max(((~(arr_1 [i_0] [i_0]))), (((/* implicit */long long int) arr_2 [i_0]))));
        var_23 ^= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_1 [10ULL] [i_0])))));
        var_24 -= (((~(((/* implicit */int) var_4)))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [0] [0])), (var_18)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (4294967284U)))) : ((~(var_15))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] [11U] = ((/* implicit */long long int) (_Bool)1);
        var_25 -= ((/* implicit */unsigned long long int) (-((-(arr_5 [i_1])))));
    }
}
