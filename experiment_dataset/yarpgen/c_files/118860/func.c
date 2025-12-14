/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118860
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
    var_11 = ((/* implicit */unsigned short) min((max((var_3), (((/* implicit */unsigned int) ((short) var_6))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_10), (var_10)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)70)) - (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28192))) : (max((((/* implicit */long long int) var_0)), (arr_3 [i_0 + 1] [i_0 - 1])))));
                    var_13 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (unsigned short)65535)), (-1665764586088925429LL))), (((/* implicit */long long int) var_2))));
                    var_14 = ((/* implicit */_Bool) max(((+(max((var_4), (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))), (var_5)));
                    var_15 *= ((/* implicit */long long int) ((((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)11716)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-9))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-2212451428277537519LL) : (((/* implicit */long long int) 2298201559U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */unsigned long long int) var_7);
    var_18 = ((/* implicit */short) ((int) var_4));
}
