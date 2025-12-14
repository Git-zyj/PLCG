/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177329
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_12))));
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)384))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_0]))) >= ((-(13827228408767888749ULL)))))), (min((1218169970), (((/* implicit */int) (short)0)))));
                    arr_10 [i_0] [i_0] = arr_0 [i_0];
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_11);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (short)32762)))))));
}
