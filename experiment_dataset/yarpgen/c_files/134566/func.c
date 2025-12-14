/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134566
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_2])))) > ((-(arr_3 [i_2])))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)48)) ? (arr_5 [i_0] [i_0] [i_1] [i_0]) : (var_5)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (+(((min((var_15), (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
}
