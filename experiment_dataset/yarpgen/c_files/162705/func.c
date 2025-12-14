/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162705
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
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((short) (((((_Bool)1) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) var_6)))));
        arr_5 [i_0] = ((/* implicit */int) arr_3 [(unsigned short)6]);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 839427203U)) ? ((((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((var_12), (arr_1 [i_0])))))) : (min((1933998498), (((/* implicit */int) (_Bool)1))))));
        var_17 = (((~(((/* implicit */int) arr_0 [8])))) % (min((((((/* implicit */int) (_Bool)1)) % (2147483644))), (max((-1933998476), (((/* implicit */int) (unsigned short)65535)))))));
    }
}
