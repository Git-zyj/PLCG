/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121162
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [(short)8] [i_1] [i_2] [i_3 - 1] [i_1] = (~(((/* implicit */int) arr_4 [(short)18])));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_5 [i_3 - 1] [i_3 - 1]))));
                                var_20 ^= ((/* implicit */unsigned char) (-(min(((-(((/* implicit */int) (signed char)15)))), ((+(((/* implicit */int) (signed char)-15))))))));
                                var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_10 [(unsigned char)2] [i_1] [(unsigned char)2] [i_3 + 1] [i_4 + 1] [i_2])), (-1352857729))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */short) (_Bool)1);
                    var_23 -= ((/* implicit */unsigned long long int) (-((-(min((((/* implicit */unsigned int) var_16)), (var_12)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (signed char)-14);
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (10969028845630789201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
}
