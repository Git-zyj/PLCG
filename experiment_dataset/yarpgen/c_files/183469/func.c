/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183469
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
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_5)))))));
    var_17 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_2 [i_1]);
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) min(((unsigned short)45946), (arr_0 [i_1]))))))) ? ((~(((/* implicit */int) var_3)))) : ((~(((((/* implicit */int) (unsigned short)45946)) / (((/* implicit */int) (short)15053))))))));
                var_19 += arr_3 [i_1] [i_0];
            }
        } 
    } 
    var_20 -= ((/* implicit */long long int) var_9);
}
