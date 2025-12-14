/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165487
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((var_12) >> (((((unsigned long long int) var_3)) - (62077ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)110))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */long long int) (~((-(((/* implicit */int) var_10))))))) < (min((((/* implicit */long long int) ((unsigned short) arr_3 [i_0]))), (min((((/* implicit */long long int) (signed char)-10)), (5891317933319213546LL))))))))));
            }
        } 
    } 
}
