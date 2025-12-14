/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107468
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_6))));
                                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) (_Bool)0)) << ((((+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0)))))) - (95)))))));
                                var_18 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) max(((unsigned char)155), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned int) var_0)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (var_7)))));
}
