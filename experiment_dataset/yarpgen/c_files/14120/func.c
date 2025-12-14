/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14120
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */short) arr_15 [i_0] [i_0] [i_3] [i_3])), ((short)-30378)))), (max((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_4])), (var_0))))))));
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (signed char)0)))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~((~(var_15))))))));
                                arr_16 [i_0] [(unsigned char)3] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */long long int) min((((arr_0 [i_2]) != (((unsigned int) var_9)))), (((var_7) >= (((/* implicit */unsigned long long int) max((1562080175U), (((/* implicit */unsigned int) (unsigned short)3874)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]), (arr_13 [i_0] [i_2] [i_2] [i_0] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2732887120U)) ? (2732887121U) : (1562080175U)));
    var_23 = ((/* implicit */short) min((var_23), (var_4)));
}
