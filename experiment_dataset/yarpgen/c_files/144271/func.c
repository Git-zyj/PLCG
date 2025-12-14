/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144271
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-20773)) ? (-965705114) : (-965705124))));
                var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [(_Bool)1])) == (((/* implicit */int) arr_5 [i_1])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_6)))))))))));
}
