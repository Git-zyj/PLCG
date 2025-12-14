/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101380
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)88)) >> (((/* implicit */int) (unsigned char)0)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (7566472026661701786ULL)))))));
    var_22 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)127)) > (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] |= var_10;
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_4 [i_1]))), (min((((/* implicit */long long int) arr_4 [i_1])), (arr_2 [i_0])))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1 + 3])), ((-(9525456989547371991ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_9)))))))))));
                arr_6 [i_1] [i_0] [i_1] = max((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12680))))), (max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17)))))))));
}
