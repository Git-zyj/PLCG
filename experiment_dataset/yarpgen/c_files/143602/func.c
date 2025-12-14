/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143602
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
    var_11 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) max((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1]))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 2146959360)) ? (-6876959010889674229LL) : (((/* implicit */long long int) -13))))))));
                arr_8 [i_1] [i_1] = var_2;
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((12) / (2146959360)))) ^ (arr_4 [i_1] [i_1 - 1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)255), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : (min((0LL), (((/* implicit */long long int) 1246303598)))))))));
            }
        } 
    } 
}
