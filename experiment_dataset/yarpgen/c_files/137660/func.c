/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137660
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_8);
                    var_13 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_14 [i_4] [i_4 + 2] [(unsigned char)2] [i_5] |= ((/* implicit */short) var_7);
                    var_15 *= ((/* implicit */unsigned short) var_8);
                    arr_15 [i_3] [i_4 - 2] [i_3] = ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_11);
}
