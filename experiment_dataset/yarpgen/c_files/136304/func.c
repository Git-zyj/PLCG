/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136304
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((short) 1984694359U));
                arr_7 [i_0] [i_0] = ((((int) var_6)) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4876)))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2)))) + (17408))) - (19))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((2613272037606827732ULL), (((/* implicit */unsigned long long int) (signed char)125)))), (((/* implicit */unsigned long long int) ((signed char) var_1)))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4876))) - (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (arr_1 [i_0] [i_1])))))) : (((/* implicit */long long int) (-(min((((/* implicit */int) (signed char)-117)), (var_3))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((((var_3) + (2147483647))) << (((((((/* implicit */int) var_10)) + (47))) - (27))))) << (((((((/* implicit */_Bool) (short)-17361)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))) - (825760992683615112LL))))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) ((_Bool) min((var_7), (var_1))))), ((-(((((/* implicit */long long int) 778100139U)) / (-2311847783666366900LL)))))));
    var_14 = (signed char)-1;
    var_15 = var_9;
}
