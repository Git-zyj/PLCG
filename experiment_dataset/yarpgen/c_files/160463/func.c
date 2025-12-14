/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160463
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_13);
        var_15 = ((/* implicit */signed char) max((arr_0 [i_0 + 2]), (((/* implicit */unsigned int) ((short) max(((signed char)7), ((signed char)7)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        arr_4 [18] = ((/* implicit */short) (signed char)-27);
        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1 + 2]))));
        arr_5 [(short)1] = ((/* implicit */unsigned int) (-((+(max((((/* implicit */int) arr_3 [i_1 - 1])), (arr_2 [i_1] [i_1 - 4])))))));
    }
    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((long long int) var_6)), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)27)))))))) ? (1452237370U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
}
