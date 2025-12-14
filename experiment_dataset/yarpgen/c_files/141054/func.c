/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141054
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
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) (unsigned short)33879);
                var_16 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned short) (((!(var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) 540392646U))))) && (((/* implicit */_Bool) min((var_1), ((signed char)-85))))))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_6 [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */long long int) 4294967295U)) / (var_2))) > (((/* implicit */long long int) max((((/* implicit */int) var_13)), (-1286607984))))))))))));
    var_19 = ((/* implicit */_Bool) var_7);
}
