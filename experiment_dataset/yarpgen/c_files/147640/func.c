/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147640
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_2))), (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? (var_11) : ((((-(var_2))) % (var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) var_0)));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -1)) ? (var_11) : (((/* implicit */int) (short)-9580)))) : (((((/* implicit */_Bool) 1)) ? (-1) : (((/* implicit */int) (short)5194))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */short) -1);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1 + 1] = ((/* implicit */int) (short)32475);
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) arr_7 [i_1])))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_7 [(short)9])))))));
        var_13 = ((/* implicit */int) ((short) arr_7 [i_1]));
    }
    var_14 = ((/* implicit */signed char) ((int) (-(((((/* implicit */_Bool) -1710283730467256285LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))));
}
