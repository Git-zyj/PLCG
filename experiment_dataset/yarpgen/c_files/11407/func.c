/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11407
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) -2506054095615715932LL);
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((long long int) (short)-2931))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-2911))))) : (min((((/* implicit */long long int) var_12)), (3418068228094492886LL)))))));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 1] = ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (((unsigned int) (short)2909)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)764), ((short)2888)))))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+((+(max((var_2), (((/* implicit */long long int) (short)783)))))))))));
        var_17 = ((/* implicit */signed char) var_11);
    }
    for (int i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) max((min(((short)2898), ((short)-2882))), (min((var_9), (((/* implicit */short) (_Bool)1))))))) > (((/* implicit */int) (short)-2898))));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                arr_15 [i_3] [(signed char)5] = ((/* implicit */unsigned int) 100663296);
                var_20 = ((/* implicit */short) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-31311)) && (((/* implicit */_Bool) (signed char)24)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (short)11461)) : (((/* implicit */int) (unsigned short)28060))));
}
