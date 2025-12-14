/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133404
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) -945595969);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (3466699721691822174ULL))), (arr_8 [i_0]))) | (((/* implicit */unsigned long long int) var_6))));
                            arr_12 [i_0] [i_0] |= ((/* implicit */unsigned char) (signed char)42);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((3466699721691822193ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_5] [1U] [i_4] [(signed char)14] [i_5] = ((/* implicit */unsigned int) 268419072ULL);
                            arr_24 [i_7] [i_4] [i_4] [(unsigned short)19] = ((/* implicit */unsigned char) arr_1 [9U] [i_7]);
                            arr_25 [i_4] [(short)10] [(unsigned short)16] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)6033);
                        }
                    } 
                } 
            }
        } 
    } 
}
