/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176579
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (13451410374745647293ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 11515554873542917883ULL))) ? (((((/* implicit */_Bool) 1680573291U)) ? (2614394004U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18079))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9054)) ? (((((/* implicit */_Bool) (unsigned short)9054)) ? (251692853U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8500))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_14 = var_9;
    }
    var_15 = ((/* implicit */_Bool) var_1);
    var_16 = ((/* implicit */unsigned char) 601678624U);
}
