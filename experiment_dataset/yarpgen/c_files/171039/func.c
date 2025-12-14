/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171039
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned char)7] [(unsigned char)7] [i_2] = ((/* implicit */long long int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3547579581U)) && (((/* implicit */_Bool) 0U)))), (arr_4 [i_0] [i_1] [i_0]))))));
                    arr_7 [i_1] = ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)250)), (var_1)))), (var_9)));
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((unsigned short) var_16))));
}
