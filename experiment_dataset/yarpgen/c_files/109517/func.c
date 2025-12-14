/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109517
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
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_3 [(unsigned short)17] = ((arr_0 [7]) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_6))) - (16713333708956152974ULL))));
        arr_4 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) arr_2 [i_0 - 1]))))) || (((((/* implicit */int) var_4)) == (((/* implicit */int) arr_2 [i_0 + 1]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_5);
    }
}
