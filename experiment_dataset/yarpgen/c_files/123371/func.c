/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123371
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
    var_13 ^= var_2;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((arr_1 [(unsigned char)11]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0])))));
        var_15 = ((unsigned char) (short)2401);
        var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) ((unsigned char) ((unsigned char) var_12))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_17 = ((/* implicit */_Bool) (((~(((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)15)))))) * (((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */short) var_9)))))));
            var_18 *= ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) ((_Bool) (unsigned char)96))))));
            var_19 = ((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1]))) > (max(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) arr_4 [i_1] [i_0])) << (((/* implicit */int) arr_3 [i_1])))))));
        }
    }
}
