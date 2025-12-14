/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101831
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
    var_14 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_7 [i_0] [i_0 + 2] = min((((/* implicit */unsigned int) ((unsigned short) 2277779908U))), (2277779908U));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) 2275782291052608324LL);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2091948817)) ? ((-((-(var_12))))) : (((((/* implicit */_Bool) (-(144115119356379136ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_2)) ? (211842487U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
}
