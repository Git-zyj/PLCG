/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164771
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_4), (((/* implicit */long long int) (signed char)-37)))), (((/* implicit */long long int) 2573851774U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)22680)) == (((/* implicit */int) (short)32761)))))) : (334796301U)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) -2147483635)) ? (var_9) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_15 = (+(((/* implicit */int) (_Bool)1)));
        var_16 = ((/* implicit */long long int) arr_0 [11LL] [i_0 - 1]);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (524287U)))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (unsigned char)41)))))));
        arr_5 [i_1] = ((/* implicit */int) min((arr_4 [i_1]), (var_1)));
        arr_6 [i_1] = ((/* implicit */unsigned short) var_4);
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min((min((((/* implicit */int) arr_3 [i_1])), (arr_2 [i_1]))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_2)), ((-2147483647 - 1))))) : (max((((/* implicit */long long int) (unsigned short)32767)), (var_4)))))));
    }
}
