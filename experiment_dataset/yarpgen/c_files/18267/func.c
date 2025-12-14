/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18267
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
    var_14 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_1)) & (max((var_13), (var_13))))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9152822524260461698LL))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(4294967295U)))) ? (arr_2 [2ULL] [i_1]) : (((/* implicit */long long int) ((unsigned int) var_3))))) != (((/* implicit */long long int) arr_5 [3ULL]))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), ((!((!(((/* implicit */_Bool) ((int) var_4)))))))));
}
