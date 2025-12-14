/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129894
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
    var_13 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) var_4)) / (((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (max((((/* implicit */unsigned long long int) var_7)), (var_8)))));
    var_15 = var_7;
    var_16 -= ((/* implicit */_Bool) (short)8601);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */int) var_5))));
                                arr_15 [i_0] [i_1] = ((/* implicit */short) var_4);
                                var_17 = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) min((((/* implicit */int) var_7)), (max((var_9), (((/* implicit */int) (short)-11301))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
