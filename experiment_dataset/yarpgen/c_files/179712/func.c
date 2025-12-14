/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179712
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((arr_4 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (var_1)));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (var_6)))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_4), (var_0)))) ? (var_10) : (min((var_11), (((/* implicit */long long int) var_8)))))) != (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(max((var_6), (((/* implicit */unsigned int) var_7))))))), (((long long int) (~(((/* implicit */int) var_4)))))));
}
