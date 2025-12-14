/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188565
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_10 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)9275)) >= (((/* implicit */int) (short)21958))));
        var_11 = ((/* implicit */short) (+(((/* implicit */int) (short)-21958))));
        var_12 = min((((/* implicit */unsigned int) (short)21958)), (1326753137U));
    }
    var_13 = max((((/* implicit */short) ((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) var_7))))), ((short)21958));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45351))) : (var_4))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
