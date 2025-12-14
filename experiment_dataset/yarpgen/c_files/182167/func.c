/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182167
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
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = ((/* implicit */int) var_7);
    var_13 = var_1;
    var_14 = ((/* implicit */unsigned int) min(((((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((var_6) - (1435850828))))), (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_7))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)176)), ((short)-1)))), (((((/* implicit */_Bool) (short)-4582)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (min((((/* implicit */long long int) ((short) var_7))), (max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_3])), (var_5))))) : (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_0 [(unsigned char)4])), (arr_1 [i_4]))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((short) ((signed char) arr_2 [i_1 + 2] [i_4 + 1])));
                                var_16 = ((/* implicit */_Bool) (short)6294);
                                arr_16 [i_0] [i_1 + 2] [10U] [i_3] [i_1] = min(((short)-9572), (((/* implicit */short) ((arr_5 [i_4] [i_4 + 2] [i_4]) != (((/* implicit */int) (short)-18342))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 1])) * ((+(((/* implicit */int) (unsigned char)79))))));
                var_18 = ((/* implicit */short) 4294967295U);
            }
        } 
    } 
}
