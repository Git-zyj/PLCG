/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106238
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
    var_15 = ((long long int) var_2);
    var_16 -= ((_Bool) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_10 [i_0] = ((/* implicit */int) var_2);
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_3)))));
                            }
                        } 
                    } 
                } 
                var_17 |= ((/* implicit */_Bool) var_3);
                arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((int) var_3));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))))));
}
