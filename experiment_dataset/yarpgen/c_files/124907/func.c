/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124907
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))) > (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    var_13 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [3])) > (arr_1 [i_0 - 2] [i_0 + 2]))) ? (((((/* implicit */_Bool) arr_2 [(short)22])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [21LL] [i_1] [(unsigned short)5])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((arr_1 [i_1] [(signed char)18]) > (((/* implicit */int) var_9)))))))));
                arr_6 [i_0 + 2] [6LL] [i_1] = ((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1] [i_1]));
            }
        } 
    } 
}
