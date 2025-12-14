/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158081
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
    var_18 -= ((/* implicit */long long int) ((8811781503795034214ULL) >= (((((/* implicit */_Bool) 9634962569914517402ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (8811781503795034214ULL)))));
    var_19 -= var_6;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_14)))))), (((((/* implicit */unsigned long long int) var_4)) & (var_16)))));
                    var_20 *= min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (var_15))))) % (var_12))));
                    arr_8 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (528482304U)))));
                }
            } 
        } 
    } 
}
