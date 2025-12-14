/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106946
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
    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((var_7) == (((/* implicit */int) var_0))))), (min((var_5), (((/* implicit */unsigned short) var_8)))))))) >= (4294967289U)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56131))) * (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_10))))) : (((int) (_Bool)1))))), (max((arr_9 [i_0] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));
                    arr_12 [i_1] [i_1] = (((!(((/* implicit */_Bool) (unsigned short)59041)))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (1347246467U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (arr_9 [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_1])))))))));
                }
            } 
        } 
    } 
}
