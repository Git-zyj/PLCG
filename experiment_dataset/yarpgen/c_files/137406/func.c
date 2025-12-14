/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137406
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [1U] [i_1] [i_3] [i_3 - 2] = (unsigned char)57;
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned short) var_11)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_8);
}
