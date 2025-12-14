/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126121
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((unsigned short)42078), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))));
                var_19 = ((/* implicit */unsigned short) (+(((arr_4 [i_1] [i_0] [(signed char)13]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))));
                arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) var_5))), (var_18)));
            }
        } 
    } 
    var_20 = (~(min((((/* implicit */unsigned long long int) (-(var_18)))), (max((var_17), (((/* implicit */unsigned long long int) var_4)))))));
    var_21 = 2645344875815790873ULL;
}
