/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128057
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
    var_16 |= ((/* implicit */short) min((var_0), (((_Bool) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) var_2)))))));
    var_17 = ((/* implicit */signed char) var_13);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = (((+(((/* implicit */int) ((short) arr_0 [i_0] [i_0]))))) % ((+(((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0 + 3] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-9494)))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) arr_5 [i_1] [i_1 + 1])) - (30996)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1])))));
        var_19 &= ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_1] [i_1])) | (((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 1]))))));
    }
    var_20 = ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)31), ((short)7585))))) > (var_7)))) : (((/* implicit */int) var_15)));
}
