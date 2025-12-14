/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163336
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
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_10)), (var_0))) / (min((((/* implicit */unsigned long long int) (signed char)4)), (11094630691430871183ULL)))))) || (((/* implicit */_Bool) ((unsigned long long int) var_9)))));
    var_21 += var_1;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1])) < (var_12))))))) >= (arr_8 [i_2] [i_1] [i_0])));
                    var_23 += ((unsigned int) (~(min((arr_0 [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
