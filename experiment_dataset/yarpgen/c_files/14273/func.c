/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14273
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) var_8)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_4] [i_3 - 1] [i_2] [i_1] [i_0 + 1] [i_2] = ((/* implicit */long long int) arr_7 [i_0 + 1]);
                                arr_15 [i_0] [i_1 - 1] [(unsigned char)8] [i_3 - 1] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_4]))));
                                var_19 = ((4294967293U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)24632)) >= (((/* implicit */int) (unsigned char)197)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_1])) : ((+(((/* implicit */int) arr_11 [i_1] [i_1 + 3] [i_1 + 2] [i_0 + 2] [i_0 + 1])))))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) arr_0 [i_0 + 2])))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 0ULL))));
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_13);
}
