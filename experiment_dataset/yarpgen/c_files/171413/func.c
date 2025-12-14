/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171413
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
        var_21 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)53840)) ? (((/* implicit */int) (unsigned short)53840)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 - 1]))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)0))) <= (min((arr_3 [i_1 + 1]), (arr_3 [i_1 - 3]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) -8)), (138860346U))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_1 - 3])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_1 + 3] [i_1])) - (53))))))));
    }
    var_23 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) - (1445940015)))));
}
