/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159144
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-((-(((long long int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((5868469958621003563ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
}
