/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139213
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0 - 1];
        var_14 = ((/* implicit */unsigned char) min((((int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) 1523406603)) ? (((/* implicit */int) arr_1 [i_0])) : (var_7)))));
        var_15 = ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))))))) * (((((/* implicit */_Bool) (short)7380)) ? (((/* implicit */int) (unsigned char)203)) : (((1644530732) * (((/* implicit */int) (_Bool)1))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */int) var_13);
    var_19 = ((/* implicit */short) (unsigned char)52);
}
