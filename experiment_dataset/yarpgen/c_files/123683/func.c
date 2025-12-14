/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123683
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
    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(918525061)))) && (((/* implicit */_Bool) var_11))));
    var_19 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_20 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) ((96247291117784915LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))))) < (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_1))))) : ((+(arr_1 [i_1])))))));
            }
        } 
    } 
}
