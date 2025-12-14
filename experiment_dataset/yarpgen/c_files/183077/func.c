/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183077
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
    var_11 -= ((((/* implicit */_Bool) 11693201972184351364ULL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~(3ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (-113464410))))));
    var_12 = ((/* implicit */int) max((((((((/* implicit */_Bool) 283726776524341248LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))) | (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((int) max((-433037416), (((/* implicit */int) (signed char)-3))))))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (2228559363U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), ((((!(((/* implicit */_Bool) (unsigned char)14)))) ? (((/* implicit */long long int) var_2)) : (max((var_9), (var_9))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) 155764408284870272ULL);
                var_14 *= ((/* implicit */_Bool) max(((+(2147483646))), (((((/* implicit */int) (short)9193)) / (((/* implicit */int) (signed char)-106))))));
            }
        } 
    } 
}
