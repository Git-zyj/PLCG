/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103583
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
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_16)))))))) % (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = arr_0 [i_0];
        var_20 += ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)63)))) != (((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)-34))))), ((((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (_Bool)0)))))));
        arr_6 [i_1 - 1] [i_1] = ((/* implicit */_Bool) max((arr_0 [i_1]), (var_9)));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)21)))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (signed char)-28))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) min((arr_8 [i_2]), (var_16)))))), (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)63)) && (var_13)))))))))));
                var_23 = (!(((/* implicit */_Bool) min((((/* implicit */signed char) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1])), (arr_1 [i_3 + 1] [i_3 + 1])))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_8 [i_2])))) ? (((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_9 [i_2] [i_2] [i_3])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) (_Bool)1);
    var_26 = var_13;
}
