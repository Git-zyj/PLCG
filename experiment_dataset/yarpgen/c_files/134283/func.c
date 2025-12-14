/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134283
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
    var_20 = ((short) min((max(((short)21059), (var_8))), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
    var_21 *= var_14;
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_12))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)-31797)) : (((/* implicit */int) (short)-21060)))), (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_1]), (var_6))))));
            arr_6 [i_1] [i_1] = arr_1 [i_1];
            var_24 = var_15;
        }
        var_25 -= ((/* implicit */short) min((((/* implicit */int) max((var_13), (var_5)))), ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_7 [i_0] [i_0] = ((short) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0] [i_0]))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(((/* implicit */int) (_Bool)0)))))));
        var_28 = ((/* implicit */short) var_13);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_29 *= ((/* implicit */short) var_13);
        var_30 -= ((/* implicit */short) (!(((((((/* implicit */int) arr_11 [(_Bool)1])) <= (((/* implicit */int) (_Bool)1)))) || (var_9)))));
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
    }
    var_32 = var_15;
}
