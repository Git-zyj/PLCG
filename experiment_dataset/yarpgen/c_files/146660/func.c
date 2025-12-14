/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146660
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_4))), (max((((/* implicit */int) var_1)), (2147483647))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_19)))))) & (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14567))) == (var_5))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) arr_0 [i_1])))) > (((/* implicit */int) (signed char)127))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_13);
}
