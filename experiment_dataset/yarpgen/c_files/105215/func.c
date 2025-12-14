/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105215
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) var_5);
                arr_7 [i_1] [i_1] [i_1] = min((max((((((/* implicit */_Bool) 1358443177U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10344))) : (6825300736038495389ULL))), (((/* implicit */unsigned long long int) max((1358443177U), (((/* implicit */unsigned int) (short)-1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (1358443185U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                arr_15 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((var_16), (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2 - 2])))))) ? (min((min((var_11), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2]))) : (var_15)))))) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2]))));
                var_18 *= ((/* implicit */signed char) var_12);
            }
        } 
    } 
}
