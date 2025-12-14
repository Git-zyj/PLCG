/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136733
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned short)34995))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32743))) : (var_10))), (((/* implicit */long long int) min(((signed char)111), ((signed char)-101))))))) ? (max((var_12), (((/* implicit */long long int) 642189607)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
    var_17 += ((/* implicit */unsigned int) ((signed char) min((max(((short)-24525), (((/* implicit */short) var_1)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_12))))))));
}
