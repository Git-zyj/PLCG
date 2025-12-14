/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17913
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
    var_17 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)11866));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_16), (var_1)));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_1]))) & (max((0LL), (((/* implicit */long long int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_3);
}
