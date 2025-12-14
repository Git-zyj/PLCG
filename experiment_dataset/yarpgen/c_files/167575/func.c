/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167575
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)162)) - (((/* implicit */int) (unsigned char)169))))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-78)), (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */long long int) max((((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27844)))), (((/* implicit */int) max(((unsigned char)162), ((unsigned char)27))))))) <= (arr_0 [i_0] [i_0])));
        var_12 ^= ((/* implicit */unsigned char) max((min((min((arr_1 [i_0] [i_0]), (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)159))))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)97))));
    }
    var_13 = ((/* implicit */_Bool) max((var_2), (max((var_3), (((/* implicit */unsigned long long int) var_8))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_10))))), (min((((/* implicit */unsigned long long int) var_8)), (var_3))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))) - (((11765300804792762825ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19628)))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (max((((/* implicit */long long int) (unsigned char)255)), (var_5)))))) + (var_3)));
}
