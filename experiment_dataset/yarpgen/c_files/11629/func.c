/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11629
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
    var_11 = var_1;
    var_12 = min((((/* implicit */long long int) ((var_3) / (((/* implicit */int) var_8))))), (max(((+(4469599705252280499LL))), (((/* implicit */long long int) (+(var_3)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) max((((((/* implicit */int) var_10)) - (((((/* implicit */_Bool) 560462029981231831LL)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)66)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((/* implicit */int) (short)17102)))))));
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (1672239197)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)53)))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_9)))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))))))));
            }
        } 
    } 
}
