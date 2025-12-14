/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148027
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((unsigned char)131), ((unsigned char)119)))) : (((((/* implicit */_Bool) 33928629U)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) 9390645090950199972ULL);
        var_12 = ((/* implicit */signed char) (+(max((min((((/* implicit */unsigned int) var_7)), (454213728U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)108)))))));
    var_14 = ((/* implicit */unsigned char) min(((signed char)124), (((/* implicit */signed char) ((((/* implicit */_Bool) ((934517030U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((((/* implicit */int) var_5)) >= (((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */_Bool) var_2);
    var_16 = ((/* implicit */unsigned long long int) ((((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (4294967293U))))) + (2644332284U)));
}
