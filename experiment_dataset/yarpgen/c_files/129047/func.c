/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129047
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
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (13506710628402856496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) var_9)), (var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3ULL])) ? (arr_1 [(signed char)0]) : (((/* implicit */int) arr_3 [i_0]))))) ? (var_10) : (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-8188))))))) ? (min(((+(((/* implicit */int) var_1)))), (arr_0 [(_Bool)1]))) : ((~((+(arr_1 [(unsigned short)7])))))));
                arr_5 [i_1] = var_4;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (~(max((12886952565270332688ULL), (2768212051164414290ULL))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)29))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2768212051164414290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 2768212051164414290ULL)) ? (15678532022545137315ULL) : (((/* implicit */unsigned long long int) var_0)))))))))));
}
