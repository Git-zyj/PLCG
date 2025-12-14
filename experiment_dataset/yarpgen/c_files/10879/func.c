/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10879
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)32)) || ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (9974201862863437863ULL))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_13);
        arr_7 [i_1] = ((/* implicit */int) ((min((max((var_4), (arr_2 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_4 [i_1] [12U]))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((119083298931510987LL) + (((/* implicit */long long int) 3451475453U))))) ? (((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (1854803006U))) : (((/* implicit */unsigned int) 32767)))))));
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_6) ? (var_4) : (var_4)))))))))));
}
