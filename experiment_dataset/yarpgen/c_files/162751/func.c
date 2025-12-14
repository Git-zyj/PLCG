/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162751
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
    var_17 = ((/* implicit */unsigned char) (+(-5314496004033263828LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_3 [(signed char)6]))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) (-(var_8)))))));
                var_20 = ((/* implicit */signed char) max((var_20), ((signed char)(-127 - 1))));
                var_21 = (+(((/* implicit */int) (unsigned short)27131)));
                var_22 *= ((/* implicit */unsigned short) ((unsigned char) ((long long int) arr_0 [i_0 - 1])));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)38404))))) ? (((/* implicit */int) (unsigned short)38405)) : (((/* implicit */int) (unsigned short)27131))))) < (((((/* implicit */_Bool) (unsigned short)38390)) ? (12556094956217620169ULL) : (((/* implicit */unsigned long long int) 2983116969U))))));
    var_24 = ((/* implicit */short) (~((+(((/* implicit */int) var_9))))));
}
