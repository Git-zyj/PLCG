/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187396
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((_Bool) var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0 + 1] [i_1] [i_0 + 3] [i_0] [i_4] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (379865673U))));
                                var_12 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((unsigned char) ((var_8) >> (((((/* implicit */int) arr_3 [i_1 + 2] [i_0] [i_1 - 4])) + (20576))))))) : (((/* implicit */_Bool) ((unsigned char) ((var_8) >> (((((((/* implicit */int) arr_3 [i_1 + 2] [i_0] [i_1 - 4])) + (20576))) - (824)))))));
                            }
                        } 
                    } 
                    arr_12 [(unsigned char)8] [i_1 + 1] [i_1] &= ((/* implicit */_Bool) ((unsigned long long int) ((short) var_10)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((long long int) (short)19760))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) > (var_5))))) | (var_5)));
}
