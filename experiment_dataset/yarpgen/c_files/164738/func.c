/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164738
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) (short)27366);
        arr_5 [i_0] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27375)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-27372))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(13108710991503084010ULL)))))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) || (((max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_6)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_0)))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)176))))) : ((~(var_9))))) > (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_13 = ((/* implicit */int) var_2);
}
