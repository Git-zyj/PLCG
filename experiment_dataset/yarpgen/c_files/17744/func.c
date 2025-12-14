/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17744
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [i_1] [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-19)), (-8843130961997716143LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (654114412883967276ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_2);
}
