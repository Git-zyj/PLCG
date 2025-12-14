/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162535
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-33))));
                    var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((2688692178U), (((/* implicit */unsigned int) var_2))))))))) : ((-(arr_2 [i_0 - 1])))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (short)(-32767 - 1)))));
                    var_13 = ((/* implicit */_Bool) min((max((arr_9 [i_0 - 1]), (((/* implicit */signed char) ((1283664240U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((-(min((0U), (((/* implicit */unsigned int) (unsigned char)11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15021)))));
}
