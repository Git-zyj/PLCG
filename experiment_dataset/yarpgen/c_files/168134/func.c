/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168134
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] [(signed char)0] = var_8;
            var_17 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned char)5])))))))));
        }
        arr_6 [i_0] [6U] = (!(var_2));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((short) (signed char)-73))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 24; i_2 += 3) 
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) ^ ((+(((/* implicit */int) arr_8 [i_2] [i_2 - 1]))))));
        var_20 = ((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2 - 1]);
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 + 1])) & (((/* implicit */int) var_1)))))));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [(signed char)4] [i_2])))))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_14 [(short)15] [i_3] = ((/* implicit */short) arr_0 [i_3]);
        arr_15 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_3]), (arr_0 [i_3])))) ? ((+(((/* implicit */int) arr_13 [i_3] [i_3])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)66)))))))));
    }
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))))), (var_7)));
}
