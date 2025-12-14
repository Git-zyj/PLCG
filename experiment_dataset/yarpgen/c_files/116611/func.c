/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116611
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
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) arr_2 [i_0 + 2]);
                var_15 = ((/* implicit */signed char) ((long long int) min((((/* implicit */int) var_9)), (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1541)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (short)-9697))));
            }
        } 
    } 
}
