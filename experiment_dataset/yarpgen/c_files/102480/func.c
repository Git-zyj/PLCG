/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102480
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
    var_20 = ((/* implicit */short) var_14);
    var_21 = ((/* implicit */unsigned short) var_14);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (!(var_14)))) - (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((unsigned int) ((((/* implicit */_Bool) arr_11 [(unsigned short)7] [i_1] [i_1 - 3] [i_3] [i_1 - 3] [i_0] [i_3])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (signed char)(-127 - 1)))))) + (((/* implicit */unsigned int) ((arr_5 [i_0] [(short)0] [i_2] [i_1 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_1 - 1])))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned long long int) ((short) (signed char)127))))));
                                var_24 = (signed char)(-127 - 1);
                            }
                        } 
                    } 
                } 
                var_25 *= (short)16385;
            }
        } 
    } 
}
