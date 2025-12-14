/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148596
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned int) arr_0 [i_1])), (3125132276U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [(unsigned short)4]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))) : (min((((/* implicit */int) arr_5 [i_1])), (arr_2 [16ULL]))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((arr_6 [i_1]), (((/* implicit */unsigned int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) max((-16), (((/* implicit */int) var_10))))) ? (max((var_12), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [9U])), (min((arr_2 [i_0]), (((/* implicit */int) arr_1 [i_1])))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)1984), (((/* implicit */unsigned short) arr_1 [i_1]))))) & ((+(((/* implicit */int) var_5))))));
                arr_9 [(unsigned short)15] [(unsigned short)15] [(short)10] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)63550)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12))), (((/* implicit */unsigned int) ((unsigned char) var_8)))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
}
