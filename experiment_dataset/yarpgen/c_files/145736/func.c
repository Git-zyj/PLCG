/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145736
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) var_2);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4095U)) & (var_13))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294963201U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((((/* implicit */int) var_15)) & (((/* implicit */int) var_11))))))) - (((((/* implicit */_Bool) arr_2 [i_2])) ? (min((((/* implicit */unsigned int) (unsigned char)112)), (4294963201U))) : (((/* implicit */unsigned int) var_4))))));
                var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (min((4666376108084058885ULL), (var_5))))))));
                arr_12 [i_2] = ((/* implicit */_Bool) arr_4 [i_3]);
            }
        } 
    } 
}
