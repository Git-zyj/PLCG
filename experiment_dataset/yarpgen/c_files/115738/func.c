/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115738
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((signed char) ((short) (short)19064));
                arr_7 [(_Bool)0] [(_Bool)0] [i_1] |= ((((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) var_0))))) >> (((min((arr_2 [i_0]), (arr_2 [i_1]))) - (12500104125355449044ULL))));
                var_17 = ((/* implicit */long long int) ((min((((unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (16632688944478016286ULL))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))), (max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned short) var_4))))))) - (65474)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_1] [(unsigned short)13] = ((/* implicit */long long int) ((((unsigned long long int) 1814055129231535327ULL)) * (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (var_5))))));
                            var_18 &= ((/* implicit */signed char) max((((unsigned int) max((var_3), (2199023255544LL)))), (((/* implicit */unsigned int) min((arr_3 [i_2] [i_3 + 3]), (arr_3 [i_2] [i_3 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((signed char) ((min((var_13), (var_1))) >= (((/* implicit */long long int) max((var_12), (var_12))))));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) var_7))), (var_9)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) | (var_5)))), (min((12968851848701591530ULL), (((/* implicit */unsigned long long int) var_7))))))));
}
