/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177702
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) (unsigned short)38612);
                    var_18 -= ((/* implicit */signed char) (unsigned short)26924);
                    arr_9 [i_2] = ((/* implicit */long long int) (unsigned short)38612);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)8191))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)84);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_21 *= (unsigned short)26923;
                var_22 ^= ((/* implicit */short) (signed char)98);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (signed char)-9);
}
