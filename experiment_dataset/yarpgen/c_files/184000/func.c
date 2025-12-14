/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184000
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
    var_19 = min((((/* implicit */int) ((unsigned short) ((unsigned short) -1024247645749402237LL)))), (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (-192130459))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (1024247645749402237LL) : (arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))) > ((~(var_14))))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_18)))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (7159966610657866958ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((short) var_12)))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) (short)31517);
        var_24 *= ((/* implicit */_Bool) (short)3311);
    }
    for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) var_14)))) ? (min((1024247645749402247LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-13472)) : (var_5))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)31527)) : (((/* implicit */int) var_4))))))))))));
        var_26 = ((/* implicit */unsigned short) (signed char)11);
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (((unsigned short) var_9))))) : (min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned short)134)) : (((/* implicit */int) var_12))))))));
        var_27 -= ((/* implicit */int) arr_6 [i_2]);
    }
}
