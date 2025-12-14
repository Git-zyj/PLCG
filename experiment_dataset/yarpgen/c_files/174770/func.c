/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174770
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */int) (!(((arr_0 [i_1]) || (((/* implicit */_Bool) var_14))))));
                var_20 = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) >> (((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)10167)) ? ((+(arr_10 [6] [i_3] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3063)) ? (((/* implicit */int) (short)-10168)) : (((/* implicit */int) (short)-10168)))))));
                    var_21 = ((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [9ULL] [9ULL] [i_2 + 1]))) : (3271729623U))) >> (((/* implicit */int) var_7))));
                    var_22 -= ((/* implicit */unsigned long long int) 1023237672U);
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_0);
    var_24 = ((_Bool) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
