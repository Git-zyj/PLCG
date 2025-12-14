/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114880
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (+((-(var_1)))));
                var_17 += ((/* implicit */unsigned short) max(((-(arr_3 [i_1] [i_1] [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)100)))))));
                arr_4 [12U] [i_1] [i_0 + 2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (max((((/* implicit */long long int) var_0)), (arr_0 [i_1]))) : (((/* implicit */long long int) ((unsigned int) var_8)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((((int) (unsigned char)100)), (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)127)) : (11)))));
                                var_19 = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((((var_0) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)0))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2711))))))))));
}
