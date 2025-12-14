/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102065
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
    var_17 |= ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned long long int) ((arr_3 [i_0 - 3] [i_1]) - (arr_3 [i_0 - 3] [i_1])));
                        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (17589503868095959392ULL)))));
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */unsigned int) ((5127161606912139677LL) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [14])))));
    }
}
