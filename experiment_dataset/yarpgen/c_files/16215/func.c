/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16215
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
    var_14 = ((short) ((((((/* implicit */long long int) 4294967293U)) & (-1LL))) << (((((/* implicit */int) var_10)) - (28069)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max(((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-49)), (var_11)))))), ((-(((/* implicit */int) ((signed char) var_3))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(signed char)9] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46497))))) - (4074220277U)))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((~(0)))));
}
