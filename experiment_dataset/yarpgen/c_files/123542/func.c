/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123542
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_14 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_3 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] &= ((/* implicit */unsigned int) ((unsigned short) ((54043195528445952LL) & (((/* implicit */long long int) 1006704013U)))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (arr_6 [i_1])));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) var_7);
        var_16 = ((/* implicit */signed char) (((+(var_2))) - (((/* implicit */unsigned long long int) arr_10 [i_2]))));
    }
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-109))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58033)))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((var_11) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_11))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
}
