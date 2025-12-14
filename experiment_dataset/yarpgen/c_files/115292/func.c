/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115292
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2642520952U)) ? (((/* implicit */long long int) 275676303U)) : (-1LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) var_2)) - (31806)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1652446362U))))))));
                var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) / (min((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])), (max((((/* implicit */int) var_11)), (var_12))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_10 [(unsigned short)9] [(unsigned char)7] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_2])) : (var_12)))) ? (((var_9) ? (((/* implicit */int) arr_8 [(unsigned short)9])) : (((/* implicit */int) arr_7 [i_2])))) : (max((var_1), (((/* implicit */int) arr_6 [(unsigned short)6]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_2]))))) : (((long long int) arr_8 [i_3]))));
                var_16 = ((/* implicit */int) var_10);
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
            }
        } 
    } 
}
