/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167115
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
    var_17 = ((/* implicit */unsigned char) max((16777216LL), (((/* implicit */long long int) (_Bool)0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */short) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) -16777217LL))), (((int) (_Bool)0))));
    }
    var_19 = ((/* implicit */long long int) ((int) ((unsigned short) ((unsigned short) var_11))));
}
