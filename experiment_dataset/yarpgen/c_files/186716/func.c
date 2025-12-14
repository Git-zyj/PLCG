/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186716
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
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_7)))) ? ((-(((((/* implicit */int) var_5)) + (((/* implicit */int) var_4)))))) : ((~(((/* implicit */int) var_9))))));
    var_14 = var_8;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) var_8)))) | (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1])))))) | (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))));
            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)17]))))) ? (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) : ((-(((/* implicit */int) (unsigned short)65514))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min(((unsigned short)6), ((unsigned short)33532))))));
        }
    }
}
