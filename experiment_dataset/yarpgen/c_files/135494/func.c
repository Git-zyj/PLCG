/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135494
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
    var_20 = ((/* implicit */_Bool) (short)24480);
    var_21 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)32561)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-24480)))), (((/* implicit */int) max((((/* implicit */signed char) var_19)), (arr_1 [i_0])))))));
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_2)), (arr_1 [i_0 + 2])))) ? (((/* implicit */int) arr_1 [10LL])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0])))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) / (((((/* implicit */_Bool) min((1761986349U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((+(1761986349U))) : ((+(var_13)))))));
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1 - 1] [i_0 - 1]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((arr_0 [5LL] [i_1 - 1]), (arr_4 [i_1] [i_1]))))));
            var_26 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7830)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))));
            arr_5 [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2]))))));
        }
        var_27 = max((((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_4))))))), (((((/* implicit */long long int) ((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_17))))))) | (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-1LL))))));
    }
}
