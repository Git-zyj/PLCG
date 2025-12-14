/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178589
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
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_0);
                    arr_7 [i_0] [i_1] [i_2] = arr_0 [i_2];
                    arr_8 [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (arr_0 [i_1])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_7)));
                }
            } 
        } 
    } 
}
