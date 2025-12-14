/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116404
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
    var_19 = (short)32767;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_0])), (var_6))))) >= (var_14)));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((min((5948651072563888354LL), (((/* implicit */long long int) (signed char)-2)))) == (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-2))))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((arr_5 [i_2 - 1] [i_2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))) : ((+(var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)1))))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))));
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)85)), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -5948651072563888354LL)))) : (((((/* implicit */_Bool) var_18)) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                    var_23 |= ((/* implicit */signed char) var_14);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */long long int) var_5)) & (((((/* implicit */_Bool) var_14)) ? (min((5948651072563888354LL), (var_17))) : (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) var_16))))))));
}
