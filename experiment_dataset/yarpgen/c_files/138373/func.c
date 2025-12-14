/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138373
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_2]);
                    arr_9 [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 941622786)) >= (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)231))))) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((-9223372036854775807LL - 1LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)73)) & (((/* implicit */int) var_1)))), (((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) var_0)))), (var_19))))));
}
