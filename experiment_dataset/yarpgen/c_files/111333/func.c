/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111333
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned char) min((491520U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) + (-461460080))))));
                            arr_9 [i_0] [i_1] [i_1] [(unsigned char)14] = ((/* implicit */long long int) var_5);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_3] [14U])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1]))))) ? (((((var_8) >> (((((/* implicit */int) (short)-1)) + (29))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), ((short)-1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 18370144897933624773ULL))))));
                            arr_10 [i_0 + 1] [i_0] [2ULL] [i_1] [i_2] [i_3] = ((/* implicit */short) ((signed char) (((((_Bool)0) ? (((/* implicit */int) (unsigned short)44069)) : (((/* implicit */int) (short)14819)))) <= ((-(((/* implicit */int) arr_8 [i_0 + 1])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) min((min((1593393706U), (((/* implicit */unsigned int) var_2)))), (((unsigned int) arr_3 [i_0] [i_0 - 2]))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) var_11))))), (min((((((/* implicit */_Bool) (short)0)) ? (var_12) : (((/* implicit */int) (signed char)-119)))), (((/* implicit */int) var_5))))));
}
