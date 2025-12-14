/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172104
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [17LL] = ((/* implicit */short) max((((arr_2 [i_1]) | (arr_2 [i_0]))), (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_1]) : (arr_2 [i_0])))));
                arr_7 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_8))));
                var_16 &= ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                var_17 ^= ((/* implicit */signed char) ((((min((var_15), (((/* implicit */unsigned long long int) 828140682)))) != (((/* implicit */unsigned long long int) var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (arr_2 [i_3])))) ? ((-(var_14))) : (4294967295U))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_4 [i_3] [i_2] [i_2 + 2])))), (((/* implicit */int) ((arr_9 [i_2] [i_3]) || (((/* implicit */_Bool) var_2))))))))));
                var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_1 [i_2 + 1]))))));
            }
        } 
    } 
}
