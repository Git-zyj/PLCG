/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143680
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
    var_20 = (_Bool)0;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (var_4)))))));
        arr_2 [11U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_8)))) || ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        var_22 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_1 [(unsigned char)5] [i_0])))))))));
        arr_3 [i_0] |= ((/* implicit */long long int) var_7);
        var_23 = var_15;
    }
    var_24 = (-((-((~(((/* implicit */int) var_18)))))));
}
