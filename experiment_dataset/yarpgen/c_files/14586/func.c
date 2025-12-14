/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14586
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 = ((/* implicit */unsigned char) var_1);
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) (~(arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_1);
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(arr_1 [i_0])))))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) min((((/* implicit */short) var_6)), (arr_2 [i_0] [i_0]))))));
    }
}
