/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172041
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) var_6);
                arr_5 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (((unsigned int) arr_2 [i_1 + 1] [i_1 - 3]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_12);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) arr_3 [i_2 + 2])) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_2] [i_3])) : (((/* implicit */int) arr_0 [i_3])))) - (18607))))))));
            }
        } 
    } 
}
