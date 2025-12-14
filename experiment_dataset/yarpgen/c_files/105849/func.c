/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105849
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3503841290U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_5))))) - (var_6))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) min((arr_2 [i_1 - 1] [i_0]), (((/* implicit */long long int) arr_1 [i_0 + 1])))))));
                arr_6 [(short)13] [i_0] [i_1 + 3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_0)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                var_13 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) + (((/* implicit */int) var_3)))), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_3 - 1])) : (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) arr_12 [18LL] [i_3 - 2])) ? (((/* implicit */long long int) arr_12 [i_3] [i_3 + 4])) : (-1898903903023449517LL)))));
                arr_13 [i_2] [i_2] |= max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3 + 2])) + (((/* implicit */int) arr_7 [i_3 + 1]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))));
            }
        } 
    } 
}
