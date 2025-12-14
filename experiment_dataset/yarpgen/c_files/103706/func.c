/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103706
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (-(4294967285U)));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-4732))))) + (arr_3 [i_1] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_8 [i_3] [i_2]))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_2])) : (((arr_8 [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_2] [i_3 - 1]))))));
            }
        } 
    } 
}
