/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127858
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(short)0])))))));
                var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-26694)) ? (((/* implicit */int) (short)26693)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 4] [i_1 + 1])))), (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))))), (arr_2 [i_0] [i_1 - 2] [(signed char)10]))))));
                var_18 |= ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [9LL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                var_20 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_6 [i_2])) <= (((/* implicit */int) arr_8 [i_2]))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) var_9);
}
