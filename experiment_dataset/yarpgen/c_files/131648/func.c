/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131648
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
    var_18 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_5)))))), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (((!(arr_1 [i_0] [i_0]))) ? (((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) >> (((/* implicit */int) ((_Bool) (_Bool)1))))) : (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) | (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_1)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = ((/* implicit */_Bool) (-(max((((var_17) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_2 [i_1]))))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (~((-(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_2 [i_1]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))));
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1]))))) ? (((arr_1 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])))) : (((/* implicit */int) max(((_Bool)0), (var_6))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((((_Bool)1) ? (((/* implicit */int) ((_Bool) arr_7 [i_3] [i_3] [i_3]))) : (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)1)));
        var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_3] [i_3]))))));
    }
    var_23 = ((/* implicit */_Bool) ((var_7) ? (max((((/* implicit */int) min(((_Bool)0), (var_14)))), ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((_Bool) (_Bool)1))))))));
}
