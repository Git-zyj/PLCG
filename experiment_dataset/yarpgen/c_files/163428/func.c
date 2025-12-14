/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163428
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
    var_20 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) % ((~(((/* implicit */int) arr_0 [3])))))))))));
        arr_2 [i_0] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_13)) : (2797851182U)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (4294967290U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0] [i_0 - 2])))))))) ? (max((((((/* implicit */_Bool) var_12)) ? (1497116113U) : (2797851182U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_16) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))));
    }
}
