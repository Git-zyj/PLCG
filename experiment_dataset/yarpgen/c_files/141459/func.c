/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141459
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 6; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [(_Bool)1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 3] [i_4])) ? (arr_9 [i_1] [i_2 + 1] [i_0] [i_2 + 3] [i_2 + 4] [i_4]) : (arr_9 [i_2] [i_2 + 1] [i_0] [i_2 + 3] [i_2 - 2] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + ((+(((/* implicit */int) var_3)))))))));
                                var_20 *= ((/* implicit */signed char) ((((arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 4]) - (arr_2 [i_2] [i_3] [i_3]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */unsigned int) ((unsigned char) var_17));
    var_23 = ((/* implicit */_Bool) var_4);
    var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (~(var_10))))));
}
