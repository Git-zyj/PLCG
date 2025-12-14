/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101582
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    var_12 = (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) * (var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_1] [i_1] [i_0]), (arr_0 [i_0])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))), (var_2));
                var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)9045))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4262584646U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (0ULL)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
}
