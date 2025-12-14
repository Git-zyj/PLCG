/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157417
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
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) (signed char)115)))))));
                    var_20 = ((/* implicit */short) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_6))))))), (min((((/* implicit */long long int) max((arr_6 [i_0 - 3] [3LL] [i_2]), (((/* implicit */short) arr_4 [i_1] [i_2]))))), (((long long int) arr_6 [i_0] [i_1] [i_2]))))));
                    arr_8 [i_0 - 3] [i_1] [i_2] = ((/* implicit */unsigned char) (signed char)-113);
                    arr_9 [i_2] = ((/* implicit */signed char) var_12);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_11)), (var_3)))), (var_5)));
}
