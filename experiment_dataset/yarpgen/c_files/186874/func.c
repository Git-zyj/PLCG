/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186874
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
    var_10 += ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) ((int) (unsigned char)128));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (!((((~(((/* implicit */int) (unsigned char)93)))) == (arr_0 [i_0 + 2])))));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)42)) ? (((((/* implicit */_Bool) (unsigned char)137)) ? (var_8) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_4)))))))), (((/* implicit */unsigned int) var_1))));
    var_13 = ((/* implicit */unsigned char) var_2);
}
