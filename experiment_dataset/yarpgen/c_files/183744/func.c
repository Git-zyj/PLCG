/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183744
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
    var_16 = ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 10187056270010339174ULL)) ? (1275847686U) : (1275847686U))));
    var_17 ^= ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (+(-2675906248059465395LL)))) ? (arr_3 [i_2] [i_1 - 4] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_0]))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3019119609U)))) ? (((unsigned long long int) arr_8 [i_1 + 2] [i_1 - 3] [i_2])) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)37714)), (-5207580684609221320LL)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_10);
}
