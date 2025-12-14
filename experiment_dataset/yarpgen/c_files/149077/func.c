/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149077
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (arr_4 [i_1] [i_1]) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [(unsigned short)13] [i_3]))))))));
                                var_12 = arr_7 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3];
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_0 - 3] [(unsigned char)7] [(_Bool)1])) : ((+(((/* implicit */int) (unsigned char)6))))));
                    var_14 -= ((/* implicit */short) ((((((/* implicit */int) min((var_4), (((/* implicit */short) arr_7 [i_0] [i_0 - 3] [i_2] [i_1]))))) + (2147483647))) << ((+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_1]))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [(short)4] [1LL])) << (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 4]))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_5 [i_2] [i_1] [i_2] [i_2])))))))) ? (((/* implicit */int) arr_7 [i_1] [(unsigned char)11] [i_1] [i_0 + 2])) : ((+(((/* implicit */int) ((unsigned char) (unsigned char)237)))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_10));
}
