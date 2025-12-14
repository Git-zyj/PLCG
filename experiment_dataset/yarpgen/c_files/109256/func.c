/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109256
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
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_5 [i_0] [i_0 - 1])) & (var_4))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_0 + 1]) < (((/* implicit */int) var_16))))))));
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) > (arr_8 [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13)))))))) * ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) var_2)) : (((var_6) ^ (var_6))))));
}
