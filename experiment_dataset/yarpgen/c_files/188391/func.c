/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188391
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
    var_18 += ((/* implicit */unsigned short) ((unsigned int) var_7));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) | (9012161313635596803ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)248))))))) == (((/* implicit */unsigned long long int) min((((arr_3 [i_0 - 2] [i_0 - 2]) - (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))))))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */signed char) arr_1 [(signed char)21] [i_0]);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned char)4))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) var_14))) <= (max((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0 + 1] [i_0 - 2])))));
    }
}
