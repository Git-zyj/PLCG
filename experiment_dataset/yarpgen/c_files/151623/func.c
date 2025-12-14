/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151623
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_20 -= ((/* implicit */int) (short)-28457);
        arr_3 [i_0] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1547895655), (((/* implicit */int) (short)-28443))))) ? (((/* implicit */int) ((short) (unsigned short)45972))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1655221973) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))))) ? ((+(((/* implicit */int) (unsigned short)19563)))) : (max((((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 2])), (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)27977)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_6 [(unsigned short)1] [(short)1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)19286)) - (((/* implicit */int) (short)-19286)))) < (((/* implicit */int) ((var_0) > (var_2))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (short)-10206))));
            arr_7 [(short)14] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_17))));
            arr_8 [16] = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)15356)) != (((/* implicit */int) (short)-21189))))));
            arr_9 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 + 3]))));
        }
    }
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)27977)) : (((/* implicit */int) (unsigned short)19535))))));
    var_24 = ((/* implicit */short) ((var_3) == (((/* implicit */int) ((max((1655221972), (var_13))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))));
}
