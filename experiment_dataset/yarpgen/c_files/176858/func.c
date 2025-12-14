/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176858
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(signed char)0] = ((/* implicit */short) -15);
                arr_6 [i_0] = ((/* implicit */signed char) 4623443878330125354LL);
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_1);
    var_13 = ((/* implicit */long long int) ((unsigned int) var_3));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (-(((long long int) arr_1 [i_2]))));
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_10) / (((/* implicit */int) arr_8 [i_2])))))));
                }
            } 
        } 
    } 
}
