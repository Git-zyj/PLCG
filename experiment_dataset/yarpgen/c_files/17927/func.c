/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17927
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
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (signed char)63);
                    arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-4227784169323558095LL)))) ? (((/* implicit */unsigned long long int) max((((unsigned int) -4447307555483678987LL)), (((/* implicit */unsigned int) ((short) arr_4 [i_0])))))) : (0ULL)));
                    var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */int) min((((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)0))))))), (var_4)));
}
