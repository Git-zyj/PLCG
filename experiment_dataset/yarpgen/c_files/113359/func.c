/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113359
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
    var_15 ^= ((max((((((/* implicit */_Bool) (short)32492)) ? (397242010U) : (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8))))))) >> (((((/* implicit */unsigned long long int) ((unsigned int) var_2))) / (((unsigned long long int) var_5)))));
    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)112)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)0)), (6139852578556533221ULL)));
                                arr_12 [i_0] [i_1] [i_2] [i_4] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_4])) < (((/* implicit */int) (unsigned char)112)))))) + (((((/* implicit */_Bool) (+(3897725295U)))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) : (max((var_14), (((/* implicit */unsigned int) (unsigned char)128))))))));
                            }
                        } 
                    } 
                    var_18 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [(_Bool)1] [i_1])), (((((/* implicit */_Bool) arr_6 [(unsigned char)1] [i_1 - 1])) ? (397242010U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? ((+(arr_11 [12U] [i_0] [12U]))) : ((((~(var_3))) ^ (((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_0);
}
