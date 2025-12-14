/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126367
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -460853766)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (short)-6904))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-20065)) : (((/* implicit */int) (short)18725))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((-(460853765))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) ((_Bool) var_0)))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)6890)) | (((/* implicit */int) (short)-31342))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4188251475U)))))));
}
