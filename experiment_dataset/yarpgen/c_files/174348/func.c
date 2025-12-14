/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174348
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                                var_15 ^= ((/* implicit */int) arr_0 [i_3]);
                                arr_11 [i_0] [i_2] [(unsigned char)5] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(signed char)12] [0] [i_3] [(_Bool)1] [i_4 + 1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)8] [i_1] [i_2 - 1] [i_3 - 2] [i_4 + 1])) < (((/* implicit */int) (short)32767)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) 133955584);
                    arr_12 [i_1] |= (-(((/* implicit */int) (short)14633)));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */short) var_2);
    var_18 += ((/* implicit */short) var_2);
}
