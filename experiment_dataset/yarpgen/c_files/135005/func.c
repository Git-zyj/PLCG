/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135005
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_14)), (var_1))))));
    var_21 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_5)) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3080607821U)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((2381227128U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((signed char) min((2073724643U), (((/* implicit */unsigned int) min((arr_5 [i_0] [7U] [i_2]), (var_17)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_23 = var_13;
                                arr_20 [i_3 - 1] [i_4 + 2] [i_3] [i_6] [i_7 - 1] [i_4 + 1] = var_1;
                                var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-104)) * (((/* implicit */int) var_19)))) / (((/* implicit */int) (signed char)78))))), (((unsigned int) arr_15 [i_3 - 1] [i_4] [i_3] [i_8]))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((/* implicit */unsigned char) min((var_13), (var_2)))), (arr_17 [i_3 - 1] [i_4 + 2] [i_3 - 1] [i_9 + 2] [i_3 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
