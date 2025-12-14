/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144682
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
    var_20 += ((/* implicit */unsigned short) var_18);
    var_21 += ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_22 *= var_1;
                            var_23 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2 - 2])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) : (1U)));
                var_24 -= ((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192)))));
            }
        } 
    } 
}
