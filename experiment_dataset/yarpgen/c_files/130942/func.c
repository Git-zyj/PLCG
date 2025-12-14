/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130942
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) var_8));
                arr_5 [(unsigned char)14] [i_0 - 1] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1]))) : (((/* implicit */int) var_7)));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_7)), (var_4)))))) : (((unsigned long long int) var_9))));
                var_23 = ((/* implicit */int) min((var_23), (arr_2 [i_1] [i_0])));
            }
        } 
    } 
    var_24 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))));
    var_25 = ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_13)), (var_14))))));
    var_26 = ((/* implicit */unsigned char) var_4);
}
