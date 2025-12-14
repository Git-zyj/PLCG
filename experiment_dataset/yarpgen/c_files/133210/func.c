/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133210
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
    var_16 = ((/* implicit */long long int) ((signed char) (+(((((/* implicit */_Bool) (short)15)) ? (3266152350549962514LL) : (((/* implicit */long long int) ((/* implicit */int) (short)186))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((((/* implicit */int) min((var_9), (arr_1 [i_0] [i_1])))) / (((/* implicit */int) ((_Bool) (short)-9937))))) : (((/* implicit */int) (_Bool)1)))))));
                arr_5 [6LL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
}
