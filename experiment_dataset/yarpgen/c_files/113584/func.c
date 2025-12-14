/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113584
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30461)))))));
        var_14 = (_Bool)0;
    }
    for (signed char i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        var_15 = max((1494956988), (((/* implicit */int) arr_3 [i_1 + 2])));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)30489)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-56)), ((unsigned char)0))))))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_2 [i_1 - 1] [i_1 + 2]))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 2])))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) var_6)) + ((~(var_0)))));
}
