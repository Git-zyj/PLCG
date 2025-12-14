/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101278
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) var_9);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)64))))) ? (max((0U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (var_5)))))))) ? (((/* implicit */int) (short)-1)) : (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_0] [(short)15]))))))));
                arr_5 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */short) (+(var_1)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 6; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3 - 4] [i_3])) ? (((/* implicit */int) (short)32761)) : (2147483642)))) ? (((((/* implicit */int) (short)-3000)) * (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) min(((short)127), (((/* implicit */short) arr_11 [i_2])))))))) + (arr_2 [i_2 - 3] [i_2 - 3])));
                var_20 ^= ((/* implicit */short) var_10);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_13);
    var_22 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
}
