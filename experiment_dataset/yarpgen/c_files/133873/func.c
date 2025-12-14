/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133873
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) 6924849998488986513ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3)))))) ? (((((/* implicit */_Bool) var_2)) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (~(var_2)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0]))))));
        var_15 = ((/* implicit */_Bool) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-7)), (arr_1 [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_16 = max((var_9), ((+(max((var_9), (((/* implicit */unsigned int) var_4)))))));
}
