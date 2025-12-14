/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182456
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */int) var_11))));
    var_22 = (-(((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_23 ^= ((/* implicit */_Bool) arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4]);
                                arr_13 [7U] [i_1] [i_2] [i_2] [(short)9] = ((/* implicit */unsigned char) var_3);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((min((((/* implicit */unsigned long long int) (unsigned char)16)), (11829137374879130854ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_4])) ^ (-15))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
