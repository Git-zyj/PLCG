/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120982
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
    var_13 = ((/* implicit */unsigned short) (((~(576459652791795712ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_6))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(72057594037927928LL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0 - 3] [i_0 - 2] [i_0 - 3])), ((unsigned short)4474))))));
            }
        } 
    } 
}
