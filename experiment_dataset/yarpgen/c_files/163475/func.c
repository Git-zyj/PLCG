/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163475
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((unsigned long long int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (0))))))));
                var_12 += ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((short) var_8))))))));
    var_14 = ((/* implicit */int) max((((/* implicit */signed char) max(((!(((/* implicit */_Bool) (signed char)-13)))), ((!(((/* implicit */_Bool) var_5))))))), (var_2)));
}
