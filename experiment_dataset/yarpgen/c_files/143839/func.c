/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143839
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
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (~(min((8ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
        var_11 *= ((/* implicit */unsigned long long int) var_0);
    }
    var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 633282181673699205ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned char) var_1);
}
