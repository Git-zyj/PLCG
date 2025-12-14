/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179387
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [(signed char)3] [i_0]))))) ? (max((var_5), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)118)))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((long long int) 6555272957823938273LL)), (var_5)))) != ((+(min((arr_2 [i_1]), (var_7)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) (signed char)-55)))) ? (((/* implicit */unsigned long long int) ((6555272957823938273LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (var_8))))));
}
