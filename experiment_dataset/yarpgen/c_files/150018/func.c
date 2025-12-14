/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150018
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
    var_15 = var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (-(4294967295ULL)));
        var_17 &= ((unsigned short) arr_2 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9302)) || (((/* implicit */_Bool) var_7))));
        var_18 = ((/* implicit */unsigned short) ((unsigned int) 2251799813685248ULL));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) min((arr_4 [i_1]), (((/* implicit */long long int) arr_5 [i_1]))))))));
        var_20 = var_0;
    }
}
