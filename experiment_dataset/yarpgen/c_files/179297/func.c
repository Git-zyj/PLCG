/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179297
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
    var_10 = ((/* implicit */_Bool) ((short) var_0));
    var_11 = ((/* implicit */int) var_5);
    var_12 = ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) var_1)), (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_13 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((unsigned int) var_9))))))) : (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) min((((int) var_8)), (((/* implicit */int) min(((signed char)31), ((signed char)127))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((long long int) var_9)), (((/* implicit */long long int) ((var_0) <= (var_0))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((short) var_3))), (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (var_7))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned char)5] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) var_8)), (var_0)))));
            }
        } 
    } 
}
