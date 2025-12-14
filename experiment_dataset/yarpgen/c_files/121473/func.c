/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121473
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))))))));
                    arr_9 [i_0] [i_0] [2ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_2])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_18)))))) - (((((/* implicit */_Bool) 1098223579)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)53551))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (signed char)-29)) : ((-(((/* implicit */int) var_1))))))) <= (var_11)));
    var_21 = var_5;
}
