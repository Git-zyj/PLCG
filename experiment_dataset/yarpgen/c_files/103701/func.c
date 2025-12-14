/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103701
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((var_10), (var_10))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)100)), (2529755410U)))) < (arr_1 [i_0])));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((_Bool) (signed char)-7);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) -8276776738336854998LL)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (_Bool)1))))));
    var_17 = ((/* implicit */long long int) var_1);
}
