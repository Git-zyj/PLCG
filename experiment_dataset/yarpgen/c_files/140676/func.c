/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140676
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
    var_20 -= ((/* implicit */_Bool) (unsigned char)6);
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), ((-((+(var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) var_12);
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) ((arr_6 [i_2] [i_2]) ? (((/* implicit */int) arr_6 [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0])))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) var_13);
                    var_23 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
}
