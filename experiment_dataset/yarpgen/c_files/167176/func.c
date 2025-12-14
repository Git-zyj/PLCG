/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167176
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
    var_18 = ((/* implicit */short) min((var_9), (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? ((~(var_16))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 + 1] [i_1]))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(arr_3 [i_1]))))));
                    var_21 += ((/* implicit */unsigned int) ((short) (~(var_2))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((signed char) var_10));
    /* LoopNest 2 */
    for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            {
                var_23 += ((/* implicit */short) (~(((arr_13 [i_4 - 1] [2LL] [i_3 - 4]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-18758)))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6617)) < (((/* implicit */int) arr_10 [i_3])))))) - (min((arr_13 [i_3] [i_3] [i_4 - 1]), (((/* implicit */unsigned int) arr_12 [i_3])))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32342))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_16))))) : (((/* implicit */unsigned long long int) -28LL))));
}
