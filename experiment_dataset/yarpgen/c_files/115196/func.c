/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115196
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */int) max((((/* implicit */unsigned short) ((var_12) && (((/* implicit */_Bool) var_1))))), (((unsigned short) arr_1 [i_0 + 2] [(unsigned short)4]))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_8) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)-1))) ^ (var_13)))))))));
                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1ULL)) && (((/* implicit */_Bool) (unsigned short)65526)))), ((!(((/* implicit */_Bool) (short)994))))));
            }
        } 
    } 
}
