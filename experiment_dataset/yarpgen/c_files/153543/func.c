/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153543
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
    var_17 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned int) (short)-3382))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), ((+(var_9))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_5))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)221)) != (var_11)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_20 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(var_1)));
                    var_22 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))))));
                }
            } 
        } 
    } 
}
