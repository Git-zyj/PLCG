/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161286
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (14886117150097168479ULL))))))))))));
                var_12 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (var_0))), (min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_6);
}
