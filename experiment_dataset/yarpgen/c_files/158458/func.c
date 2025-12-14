/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158458
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_4)) - (58)))))));
                                arr_15 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) (+(6097244472449421797LL))));
                                arr_16 [i_1] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 3])))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_5))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << ((((~(((/* implicit */int) arr_13 [i_0] [6U] [i_0] [i_1 - 1] [(unsigned char)7])))) + (191)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_13);
}
