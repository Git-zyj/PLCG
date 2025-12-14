/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173657
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
    var_16 ^= var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4])) - (((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [(short)10] [(short)4])) + (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7))))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_10 [i_0] [(unsigned char)10] [i_0] [(unsigned char)10] [i_4 - 1])), ((unsigned short)21938)))), (((var_1) * (((/* implicit */unsigned long long int) -1)))))))));
                                arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_1] [i_2]))))));
                                arr_13 [i_1] [i_2] [i_3] [i_1] = max((var_14), ((short)4095));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)39)))) & (((/* implicit */int) var_13)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_10);
}
