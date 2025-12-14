/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164792
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
    var_10 = ((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)19))));
                    arr_8 [i_0] [17LL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1694681229)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */short) (unsigned char)69))))) != (((/* implicit */int) ((signed char) arr_0 [i_0]))))))) : (((((((/* implicit */_Bool) (unsigned char)69)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])))) & ((-9223372036854775807LL - 1LL))))));
                    var_12 = ((/* implicit */int) max((var_12), (arr_7 [i_2] [i_2] [i_2] [i_1])));
                }
            } 
        } 
    } 
}
