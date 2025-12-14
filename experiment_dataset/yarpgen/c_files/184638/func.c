/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184638
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(short)9] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_3 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [7] [i_2] [(short)2] [(unsigned char)4] = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0]));
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) var_2);
                                var_17 ^= ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [7LL] [i_0] = ((/* implicit */short) ((unsigned short) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    arr_17 [i_0] = ((/* implicit */short) ((arr_5 [i_0 - 1]) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1]))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) (unsigned char)12))))), (var_14)));
}
