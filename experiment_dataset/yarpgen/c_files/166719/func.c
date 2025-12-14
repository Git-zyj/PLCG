/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166719
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-17373))));
                var_17 = ((/* implicit */unsigned short) 0LL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 + 3] [4])) || (((/* implicit */_Bool) 0)))))));
                            var_19 = var_7;
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)250))));
}
