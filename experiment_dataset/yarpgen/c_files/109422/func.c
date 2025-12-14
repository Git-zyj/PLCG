/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109422
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 2])), (9151314442816847872ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_1))))), (((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) (_Bool)1)))))))));
                    var_19 |= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-2147483647 - 1));
}
