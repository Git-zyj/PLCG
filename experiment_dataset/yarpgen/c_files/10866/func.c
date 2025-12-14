/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10866
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21586)) * (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)61432)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max(((unsigned short)4094), (arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4286)) * (((/* implicit */int) (unsigned short)43948))))) ? ((~(((((/* implicit */int) (unsigned short)4080)) & (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43929)) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30600))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) max(((unsigned short)16418), ((unsigned short)65523)))) >> (((((((/* implicit */_Bool) (unsigned short)11097)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) - (50343))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) && (((/* implicit */_Bool) (unsigned short)14676)))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (var_3)));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)16021), ((unsigned short)14586)))) ? (((/* implicit */int) max(((unsigned short)10), ((unsigned short)43929)))) : (((/* implicit */int) ((unsigned short) (unsigned short)43387)))));
        var_22 = var_0;
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] = ((unsigned short) (unsigned short)61432);
        var_23 = (unsigned short)65523;
    }
    var_24 = max(((unsigned short)43954), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)14600)) < (((((/* implicit */int) (unsigned short)2980)) - (((/* implicit */int) (unsigned short)7297))))))));
}
