/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114049
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
    var_19 = ((/* implicit */signed char) ((((((var_3) > (var_1))) ? (var_7) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)15), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_16)) - (98)))))) : (var_12))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_7);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [10LL] [i_1] [i_1] = ((/* implicit */short) min(((~((~(236582324155251408ULL))))), ((-(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [(unsigned short)1] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29837))) : (var_12)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
