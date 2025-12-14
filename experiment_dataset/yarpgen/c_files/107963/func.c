/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107963
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((unsigned int) (unsigned char)255)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) var_1)))))));
                    var_19 = ((/* implicit */_Bool) ((long long int) min((1961330086826497529ULL), (((/* implicit */unsigned long long int) (unsigned char)1)))));
                    var_20 = ((/* implicit */long long int) var_3);
                    var_21 = ((/* implicit */unsigned char) -1796824415);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((short) (unsigned char)1));
}
