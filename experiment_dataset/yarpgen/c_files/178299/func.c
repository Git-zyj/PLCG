/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178299
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
    var_13 = ((/* implicit */unsigned long long int) (signed char)92);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((min((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) -4583397589650048698LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)(-32767 - 1))))))) << (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) + (32608)))))) : (((/* implicit */unsigned int) ((min((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) -4583397589650048698LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)(-32767 - 1))))))) << (((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) + (32608))) - (5928))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0])), (arr_6 [i_0] [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((_Bool) (!(var_12)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_6)))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
}
