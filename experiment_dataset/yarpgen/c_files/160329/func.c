/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160329
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
    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    var_12 ^= ((/* implicit */unsigned int) ((unsigned char) var_5));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */short) 0LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_2] [i_1 + 3] [i_0 + 1])) ? (min((22LL), (-2LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2961089683323636966ULL)) || (((/* implicit */_Bool) 369360814))))))));
                                var_14 = ((/* implicit */unsigned char) ((((-5LL) + (9223372036854775807LL))) >> (((((/* implicit */int) ((signed char) var_9))) - (60)))));
                                var_15 = ((/* implicit */long long int) ((int) 15485654390385914646ULL));
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned short)31598))));
                    arr_14 [i_2] &= ((/* implicit */unsigned char) var_4);
                    var_17 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)74))))) ? (((((/* implicit */_Bool) 15485654390385914650ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0]))) : (3957025904800500748LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 4] [i_0] [i_0] [i_0 + 2]))))));
                }
            } 
        } 
    } 
}
