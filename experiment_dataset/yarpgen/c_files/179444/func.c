/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179444
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((signed char) (+(9965812596013437225ULL)))));
                var_11 &= ((/* implicit */unsigned short) min(((-((-(var_4))))), (var_9)));
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) 32767ULL))));
            }
        } 
    } 
}
