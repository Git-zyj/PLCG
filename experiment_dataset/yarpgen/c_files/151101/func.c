/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151101
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
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) arr_1 [i_0]);
                arr_4 [i_1] [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [(short)10] [i_0])) ? (((/* implicit */int) var_1)) : (var_0))) | (max((((/* implicit */int) var_9)), (var_3))))) : (max((var_6), (var_3)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_13 [i_2] [i_3] [i_2 + 1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) var_8)), (621091513)));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)-75)))))));
                                var_16 = ((/* implicit */short) (-((-((+(((/* implicit */int) (signed char)74))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
