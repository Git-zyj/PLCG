/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115776
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(unsigned char)6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 14670538668855677601ULL)))) ? (((/* implicit */long long int) ((int) arr_0 [4] [4]))) : (var_16)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 2003901906U);
        var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 14670538668855677601ULL)) ? (((/* implicit */long long int) -1975303367)) : (2840545343409834673LL))));
    }
    var_21 = ((/* implicit */long long int) min((((/* implicit */int) var_14)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 5084336873413582226ULL)))))))));
    var_22 = ((/* implicit */unsigned char) (+((+(min((var_10), (((/* implicit */unsigned long long int) (short)8350))))))));
}
