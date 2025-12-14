/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119589
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) min((((var_7) ^ (var_0))), (var_0)))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (min((((/* implicit */long long int) (signed char)-122)), (-9086871573601872483LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_6)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((9086871573601872467LL) > (((((((/* implicit */long long int) arr_1 [3U])) / (9086871573601872463LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))));
        var_12 = ((/* implicit */short) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_6))));
    }
}
