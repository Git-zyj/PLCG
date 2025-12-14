/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162039
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) max(((-(var_6))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                arr_6 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_0 + 1] [i_1]))))) ? (((((/* implicit */_Bool) 196831682U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0])))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((max((var_6), (var_9))), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))))))));
            }
        } 
    } 
    var_12 |= (!(((/* implicit */_Bool) var_5)));
}
