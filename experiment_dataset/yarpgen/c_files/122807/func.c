/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122807
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
    var_16 = var_10;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (short)16599);
                var_17 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (short)7)) ? (arr_4 [18LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [5LL]))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [(short)13]))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-((-((~(arr_0 [i_1]))))))))));
            }
        } 
    } 
}
