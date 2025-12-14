/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148741
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
    var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-54))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */short) arr_2 [i_0]);
                arr_5 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                arr_6 [i_0] = ((/* implicit */int) arr_1 [i_1] [i_0]);
                var_21 = ((/* implicit */long long int) 7235251695735531035ULL);
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_8))));
            }
        } 
    } 
}
