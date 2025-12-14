/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110186
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
    var_12 = ((((/* implicit */_Bool) (unsigned char)15)) && (((((/* implicit */int) ((short) var_4))) <= (((/* implicit */int) ((_Bool) var_4))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (_Bool)1)) : (-583491372))))) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_4))))));
        var_13 = min((max((((/* implicit */int) (_Bool)1)), (930361036))), (((/* implicit */int) (!((_Bool)1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(max(((~(var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) != (((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_5))) - (39423ULL))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((unsigned int) (short)-20177)))))));
        var_17 ^= ((/* implicit */_Bool) -1617428288);
    }
}
