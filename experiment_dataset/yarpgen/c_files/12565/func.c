/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12565
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((1814718457) / (((/* implicit */int) (_Bool)1))))));
    var_13 = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_1))));
    var_14 ^= min((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (min((((/* implicit */unsigned short) var_10)), (var_7)))))), (((((/* implicit */_Bool) ((var_1) ? (var_3) : (-1278597994)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))));
    var_15 = ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9)))))))) && (((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (var_3))), (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 &= ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */_Bool) max((var_17), ((_Bool)1)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((_Bool) var_5);
            arr_6 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            var_19 = ((/* implicit */_Bool) (-(1494925915)));
            arr_7 [i_0] = ((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) < (((/* implicit */int) var_8)))))));
        }
        for (int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_0] = (+(((/* implicit */int) arr_1 [i_0] [i_2 + 4])));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 470416872))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
        }
    }
}
