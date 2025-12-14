/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157054
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)3] = arr_0 [(signed char)14];
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_2 [i_1]))));
                var_18 = ((/* implicit */_Bool) var_2);
                var_19 = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_13);
    var_21 = ((/* implicit */unsigned short) var_12);
    var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (-7980778014719439967LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
    var_23 ^= ((/* implicit */int) var_11);
}
