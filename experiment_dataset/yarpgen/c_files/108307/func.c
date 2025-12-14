/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108307
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
    var_18 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned short)0))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(max((max((((/* implicit */unsigned long long int) var_7)), (arr_4 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((8226211400355025967ULL) <= (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) (short)-23325)) / (((/* implicit */int) arr_3 [i_0 - 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
