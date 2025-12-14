/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165896
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
    var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1005456302)))) ? (((((/* implicit */unsigned long long int) ((-1005456302) & (((/* implicit */int) (_Bool)1))))) & (var_9))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_1]))))));
                var_18 = ((/* implicit */_Bool) arr_0 [6]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 *= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((var_5), (((/* implicit */unsigned long long int) 1526557280))))));
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))));
                arr_10 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) 0U);
            }
        } 
    } 
}
