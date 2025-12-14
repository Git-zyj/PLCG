/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160110
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
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_0 [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4 + 2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min(((unsigned short)13709), ((unsigned short)3589))));
                                arr_17 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */signed char) max(((unsigned short)19922), (((/* implicit */unsigned short) (signed char)79))));
                                var_19 *= ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_2 [i_4 + 2] [i_4 + 3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned char) var_10))))), (var_4)))) + (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) - (max((var_13), (((/* implicit */unsigned long long int) var_3))))))));
}
