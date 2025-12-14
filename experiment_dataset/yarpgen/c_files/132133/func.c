/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132133
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
    var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -4493346270034810027LL)))) ? (((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) (+(3919754854U)));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((9223372036854771712ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1]))))))));
            }
        } 
    } 
}
