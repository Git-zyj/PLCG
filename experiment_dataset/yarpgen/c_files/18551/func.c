/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18551
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
    var_20 = min((((short) (short)-9126)), (var_0));
    var_21 = ((/* implicit */short) ((((/* implicit */int) min(((short)-24564), (var_12)))) + (((/* implicit */int) (short)12198))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4012)) ? (((((/* implicit */_Bool) max(((short)24573), ((short)-18369)))) ? ((~(((/* implicit */int) var_19)))) : (((((/* implicit */_Bool) (short)31289)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) min((var_11), (arr_3 [i_0]))))))));
        var_23 = ((short) ((((/* implicit */_Bool) (short)-2857)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_12;
        var_24 = arr_0 [i_1] [i_1];
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */short) min((((/* implicit */int) ((short) arr_1 [i_2] [(short)14]))), (((((/* implicit */_Bool) arr_4 [(short)2])) ? (((/* implicit */int) (short)13515)) : (((/* implicit */int) arr_1 [i_2] [(short)8]))))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) (short)32765)) != (((/* implicit */int) (short)-16325))));
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            arr_15 [i_2] = ((/* implicit */short) (+(((/* implicit */int) var_16))));
            var_26 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(short)3] [(short)3] [i_3]))))))), (((/* implicit */int) max((var_14), (min((arr_13 [i_2]), (arr_12 [(short)12] [i_3] [i_3]))))))));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 13; i_4 += 3) 
            {
                arr_18 [i_2] [i_2] [i_2] [(short)9] = ((/* implicit */short) min(((+(((/* implicit */int) arr_2 [i_2] [i_2])))), (((/* implicit */int) ((short) min((arr_2 [i_2] [i_2]), ((short)15730)))))));
                arr_19 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-12181)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) var_17)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
            }
        }
        var_27 = ((/* implicit */short) ((((((/* implicit */int) arr_14 [i_2] [(short)2] [i_2])) + (2147483647))) >> (((((/* implicit */int) ((short) max((arr_4 [(short)16]), (var_10))))) - (6790)))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((short)13517), (var_10))))))) ? ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-28510)) : (((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) var_17))))));
}
