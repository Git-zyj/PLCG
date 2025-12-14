/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10388
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
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */_Bool) max(((+(arr_6 [i_1 - 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29115)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (short)29115)) ? (((/* implicit */int) arr_4 [i_4] [i_3] [i_0])) : (((/* implicit */int) arr_4 [i_1] [7] [i_1])))), (((((((/* implicit */int) (short)-29109)) + (2147483647))) << (((((/* implicit */int) var_10)) - (28570))))))), (((/* implicit */int) (short)29137))));
                                var_18 = ((/* implicit */unsigned char) (short)29131);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])), (((((/* implicit */_Bool) (short)-29137)) ? (((/* implicit */int) arr_3 [i_1] [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_0 - 1]))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((937562390) & (((/* implicit */int) (short)29132))))) ? (((/* implicit */int) (short)29140)) : (((/* implicit */int) ((_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_2])))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) (unsigned short)34999)) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))) : (max(((~(((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned short)34999)) - (((/* implicit */int) (unsigned short)35020)))))))))));
                    arr_13 [i_1 + 1] [i_1] [21U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(var_5)))))) ? (max((min((((/* implicit */unsigned long long int) (short)-29140)), (14552484009735090066ULL))), (((/* implicit */unsigned long long int) (short)29140)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
}
