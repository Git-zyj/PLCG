/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129088
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
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) min((((arr_1 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((arr_1 [i_1 - 1] [i_1 - 1]), ((_Bool)0))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((13461329367761838587ULL), (((/* implicit */unsigned long long int) (unsigned char)215)))), (((/* implicit */unsigned long long int) ((long long int) var_4)))))) ? (((/* implicit */long long int) ((arr_5 [i_2]) + (((/* implicit */int) arr_1 [i_0] [7ULL]))))) : (arr_7 [(unsigned short)0] [i_1 - 1] [i_1] [i_0])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
}
