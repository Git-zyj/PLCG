/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127655
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_15)))) ? (max((var_2), (var_2))) : (((/* implicit */unsigned long long int) 729127688226027806LL))))) ? (max((min((12126881383656970778ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (~(var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1]) >> (((arr_3 [i_0 + 1]) - (16188330041264158553ULL)))))) ? ((~(arr_3 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) 0)) : (var_2)))));
                var_20 = ((/* implicit */unsigned int) (((-(var_2))) ^ (((/* implicit */unsigned long long int) (-(((var_9) * (var_5))))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0])))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_13);
}
