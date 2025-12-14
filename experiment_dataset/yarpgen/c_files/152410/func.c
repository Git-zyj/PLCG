/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152410
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) (-((+(arr_0 [i_0] [i_1 + 1])))));
                arr_7 [i_0] &= ((/* implicit */short) ((unsigned char) ((unsigned int) arr_1 [i_0 + 1])));
                arr_8 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0 + 1]);
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (-(var_3)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((unsigned short) var_5));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(1023ULL))))));
    var_17 -= ((/* implicit */int) (+((+(((unsigned long long int) (short)0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned long long int) (-(((arr_18 [i_2] [i_2] [i_2 - 2] [i_4 + 2] [i_4 + 1]) / (arr_18 [i_2] [i_2] [i_2 + 1] [i_4 + 2] [i_4 - 1])))));
                                arr_22 [i_3] = ((/* implicit */unsigned char) arr_15 [i_2]);
                                arr_23 [20ULL] [i_3] [i_4] [i_5] [i_6] [i_2] &= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))));
                            }
                        } 
                    } 
                } 
                arr_24 [11] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((arr_21 [i_3] [i_3] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 2]) & (arr_11 [i_2 + 1] [i_2 - 2])))));
                var_19 -= ((/* implicit */unsigned short) (-((+(arr_11 [i_2 - 3] [i_2 + 1])))));
                var_20 -= ((18446744073709550593ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))));
            }
        } 
    } 
}
