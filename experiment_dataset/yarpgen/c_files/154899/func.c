/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154899
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_8)) > (var_4))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) (((~(arr_0 [i_2 - 3] [i_2 - 1]))) != (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) max((var_6), (((/* implicit */signed char) arr_1 [i_0]))))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (arr_0 [i_2 - 2] [i_0 - 1]))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)))));
                    var_15 |= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (_Bool)0)), (15484130071377641388ULL))), (11ULL)));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned long long int) var_5);
}
