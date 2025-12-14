/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147647
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((((long long int) 10375673757269640642ULL)), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)80))) != (var_3))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned long long int) ((unsigned short) (signed char)99))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (signed char)80)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)71)))) : (var_2)));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((int) (~(var_7)))))));
}
