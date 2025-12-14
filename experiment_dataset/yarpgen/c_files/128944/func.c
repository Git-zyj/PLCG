/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128944
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) 2357340547U);
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3157608945U)) ? (min((var_4), (((/* implicit */unsigned int) -284085776)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_1])))))) & (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (892069717U)))));
                var_19 = ((/* implicit */signed char) 284085776);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) - (9879911939303624504ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_13), (((signed char) ((unsigned long long int) var_2)))));
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((unsigned int) var_7))))));
}
