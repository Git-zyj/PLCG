/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142198
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) arr_0 [i_0 + 3]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) ((signed char) arr_6 [i_1] [(unsigned short)4] [i_1]))) - (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) var_3))));
                    var_21 |= var_13;
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) arr_8 [i_4]);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_3])) : (((/* implicit */int) arr_10 [i_4])))) != (((/* implicit */int) var_15)))))));
            }
        } 
    } 
}
