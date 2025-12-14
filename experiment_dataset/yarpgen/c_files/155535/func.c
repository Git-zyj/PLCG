/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155535
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
    var_16 = ((/* implicit */long long int) min((var_16), (max((var_9), (((/* implicit */long long int) ((3475613496U) != (3475613496U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 3475613496U))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [(unsigned short)5] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (arr_1 [i_0]) : (arr_5 [(_Bool)1] [i_2] [i_4 + 1]))), ((+(arr_5 [i_1] [(unsigned char)11] [i_1]))))))));
                                arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_1] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
