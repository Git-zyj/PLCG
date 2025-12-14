/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126610
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
    var_18 = var_7;
    var_19 = ((/* implicit */int) var_14);
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0] = ((/* implicit */signed char) 3080021339U);
                var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((16384LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_6 [i_0] = ((/* implicit */short) 11373259371671615060ULL);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [3ULL] [(_Bool)1] = ((/* implicit */_Bool) var_0);
                                arr_15 [i_4 + 1] [i_3] [(short)14] = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_13 [i_0] [i_3]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7)))) - (((/* implicit */int) (short)15777))));
                                arr_16 [15] [i_3] [i_2] [(signed char)14] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] [(_Bool)1] = ((/* implicit */short) (+((-(arr_2 [i_4 + 1] [i_3 - 2] [i_1 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
