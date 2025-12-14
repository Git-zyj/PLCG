/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128258
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) var_8);
                    var_18 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) (short)6771)) : (((/* implicit */int) ((arr_2 [i_1] [i_1]) != (arr_3 [i_1] [i_0 - 3]))))))), (min((arr_2 [i_1] [i_1]), (((arr_2 [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (+(var_14)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((-(var_10)))));
    var_21 = ((/* implicit */short) var_7);
}
