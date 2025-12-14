/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148506
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
    var_20 = ((/* implicit */int) (((+((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_3)))))) & (((((-6607073331691855310LL) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) ((_Bool) var_8))))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))) > (((/* implicit */int) arr_2 [i_1 + 3])))))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (17720699710409408776ULL))))));
            }
        } 
    } 
}
