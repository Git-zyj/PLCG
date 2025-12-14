/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166881
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) var_1);
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2] [11U] [i_2] [15ULL]))));
                    var_14 = ((/* implicit */short) ((((var_6) + (2147483647))) >> (((max((max((348290138055303506ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0] [i_0])))) - (348290138055303498ULL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) var_6))))) ? (((2947189173977759449ULL) - (((/* implicit */unsigned long long int) 5622842087850820774LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))));
}
