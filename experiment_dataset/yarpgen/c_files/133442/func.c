/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133442
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)19))) ? (min((var_9), (((/* implicit */unsigned int) (short)18502)))) : (((/* implicit */unsigned int) ((int) var_0)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (short)18507))))) - (10128651776331117728ULL)))));
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (min((((((/* implicit */_Bool) (unsigned short)46792)) ? (12012386350172014872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_7))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18531)) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (unsigned char)0))));
                var_13 = ((/* implicit */short) (~(((unsigned long long int) ((6513026312704943147ULL) < (((/* implicit */unsigned long long int) 0)))))));
                arr_5 [3] [3] [(_Bool)1] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_9)))));
            }
        } 
    } 
}
