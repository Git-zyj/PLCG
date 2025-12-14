/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125861
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61793)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)10944))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2]))))) ? (min((var_2), ((-(var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)-34)))))));
            }
        } 
    } 
}
