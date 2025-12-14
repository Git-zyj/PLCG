/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127919
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_2 [i_0] [i_1] [i_0]))) / (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_0])))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) var_11);
                var_17 = ((/* implicit */unsigned short) arr_2 [(unsigned char)6] [i_1] [i_1]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(1073741823LL)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_2 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_13)))) ? (var_5) : (((/* implicit */long long int) (+(4294967295U))))))) ? (max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (3041319158U) : (((/* implicit */unsigned int) var_6)))))))))));
}
