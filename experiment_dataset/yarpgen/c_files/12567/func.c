/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12567
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
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_0] [i_1]);
                arr_7 [i_0] = ((/* implicit */unsigned short) 6309797374532900191LL);
                var_12 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 3] [i_1 - 3])), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3993533050U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_2) : (((/* implicit */unsigned long long int) (-(3511807001U))))));
}
