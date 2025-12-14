/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160146
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((unsigned int) max((arr_1 [i_0]), (var_11)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1443878888)) ? (-1443878893) : (1443878888)))))))));
                arr_4 [(_Bool)1] |= ((((/* implicit */int) (!(((/* implicit */_Bool) -1791936052))))) << ((((-(var_7))) - (1165522518))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_2 [i_2] [i_2] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_2])))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_9 [i_3] [i_2] [15U]) : (arr_9 [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2142643896U)) : (var_11)))))));
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1443878889)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_3])))) == (((/* implicit */int) arr_5 [i_2]))));
                arr_10 [i_2] [18U] = ((/* implicit */_Bool) arr_6 [i_2]);
            }
        } 
    } 
}
