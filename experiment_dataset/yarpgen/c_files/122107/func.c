/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122107
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((+(33553920U)))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (min((14587420101983525051ULL), (((/* implicit */unsigned long long int) 4294967285U))))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (min(((~(min((var_4), (var_4))))), (((/* implicit */unsigned long long int) min(((~(var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3976486619U))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) -1103815118))));
                arr_5 [i_0] = min(((~(min((4216327878U), (4216327889U))))), ((~((+(4216327878U))))));
            }
        } 
    } 
}
