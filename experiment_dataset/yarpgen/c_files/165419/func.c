/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165419
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2] [i_2] [i_4 - 1] [i_4] [i_0]);
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) 111325623U);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned int) arr_7 [i_2]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_12)) ? (min((var_5), (4294967280U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (4183641664U))))));
    var_18 = ((4183641664U) == (((/* implicit */unsigned int) 931639530)));
}
