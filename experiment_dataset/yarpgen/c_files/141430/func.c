/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141430
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) > (((((((/* implicit */_Bool) var_6)) ? (var_6) : (var_8))) & (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((arr_0 [i_0]) << (((((/* implicit */int) arr_3 [i_0])) - (27825))))), (((/* implicit */long long int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) max((((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_3 [i_0])) - (27825))) + (17668))) - (39))))), (((/* implicit */long long int) arr_3 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_2] [5ULL] [10] = ((/* implicit */long long int) var_7);
                            var_12 &= ((/* implicit */int) var_1);
                            var_13 = ((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_1] [(_Bool)1] [i_0]);
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max(((-((~(arr_0 [i_3]))))), (((var_4) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = var_4;
}
