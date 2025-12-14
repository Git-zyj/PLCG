/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150597
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
    var_16 = ((/* implicit */unsigned int) ((unsigned char) var_2));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_0))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (((((-(var_5))) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)208), (((/* implicit */unsigned char) arr_1 [i_0])))))) * (var_14))) - (5404975922365797024ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)234)))))));
}
