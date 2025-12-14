/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163978
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
    var_13 &= ((/* implicit */int) min((max((((/* implicit */long long int) var_4)), (var_10))), ((-(var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_2 [(signed char)8]))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(1317387451))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) -1317387451)), (min((var_9), (((/* implicit */unsigned long long int) var_0))))))));
}
