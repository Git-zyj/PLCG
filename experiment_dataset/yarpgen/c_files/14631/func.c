/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14631
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_14)))))))), (((((/* implicit */_Bool) var_2)) ? (3026306715U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))))));
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = arr_3 [i_0] [i_0];
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [(short)0] [i_3] [(unsigned short)13] [(unsigned short)13]);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((+(arr_5 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) max((var_8), (arr_0 [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) || (((/* implicit */_Bool) (-2147483647 - 1))))))))));
                                var_20 = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
