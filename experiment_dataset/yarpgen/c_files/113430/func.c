/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113430
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
    var_17 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((_Bool) var_10)) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) var_4))))), (var_16)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((2791643121U), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) var_1)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [i_4] = arr_10 [i_0] [i_3] [i_4];
                                var_18 ^= ((/* implicit */unsigned char) (_Bool)1);
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((arr_11 [i_0] [i_0 - 2] [i_2 - 2] [i_2 + 1]), (((/* implicit */unsigned char) var_2)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 ^= min((var_0), (((_Bool) (short)-10637)));
                            arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_18 [i_6] [i_5] [i_1]);
                            arr_24 [i_1] [i_1] [(unsigned short)11] [i_1] = var_5;
                            arr_25 [i_1] [i_5] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) max((var_10), (min(((signed char)72), (((/* implicit */signed char) var_9))))));
                            arr_26 [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) min((var_7), (arr_15 [(unsigned short)17] [i_1] [i_5] [i_0] [i_5])));
                        }
                    } 
                } 
                arr_27 [i_0 + 3] [i_1] = (_Bool)1;
            }
        } 
    } 
}
