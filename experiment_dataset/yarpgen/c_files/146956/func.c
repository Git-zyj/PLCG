/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146956
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) & (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_17 = ((long long int) var_11);
    var_18 = ((/* implicit */long long int) var_12);
    var_19 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (458752U)))))));
    var_20 = ((/* implicit */unsigned short) var_7);
}
