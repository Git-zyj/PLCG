/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17669
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) | (-1485562154)))), (((unsigned long long int) arr_2 [i_0] [i_0]))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_6))));
                arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned int) 618741224));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_6);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (unsigned short)27270))));
    var_18 = ((/* implicit */short) var_12);
}
