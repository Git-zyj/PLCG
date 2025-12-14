/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137910
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
    var_10 = ((unsigned long long int) 17965727282649891445ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (arr_0 [i_0])));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)64151)) >> (((((/* implicit */int) (unsigned short)1385)) - (1370)))))))) ? (((var_6) ? (((unsigned int) (unsigned short)64123)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_2))))))) : (((((_Bool) var_8)) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-1272)))))))));
                var_13 |= ((/* implicit */unsigned long long int) ((-7507880611320749641LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
