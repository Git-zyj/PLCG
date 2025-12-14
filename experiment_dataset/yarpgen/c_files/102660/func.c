/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102660
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
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_12)))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((_Bool)1))))))) : (((((((/* implicit */int) var_11)) < (((/* implicit */int) var_16)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((589475736U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((unsigned short)20948)))) << ((((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((((/* implicit */_Bool) 1043681758U)) && (((/* implicit */_Bool) arr_0 [i_1]))))))) + (9)))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (min(((-(arr_1 [4ULL]))), (((/* implicit */unsigned long long int) min((2332858922U), (1561000908U))))))));
            }
        } 
    } 
}
