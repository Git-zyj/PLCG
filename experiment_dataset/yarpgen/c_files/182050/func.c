/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182050
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31462))) <= (max((4130102772080232820ULL), (((/* implicit */unsigned long long int) var_14)))))))));
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 4])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 4])) : (((/* implicit */int) var_1))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                arr_7 [i_1] [i_0] [i_0] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) 935376382)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_1])), (arr_0 [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) max((var_9), (min((var_0), (((/* implicit */int) (signed char)102)))))))));
            }
        } 
    } 
}
