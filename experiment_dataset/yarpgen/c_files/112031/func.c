/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112031
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)93))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_17);
                                var_19 = ((/* implicit */_Bool) 337542266);
                                var_20 = ((/* implicit */unsigned int) var_17);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), ((+(var_16)))));
    var_22 = ((/* implicit */_Bool) var_2);
}
