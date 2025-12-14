/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131299
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(max((min((1023U), (((/* implicit */unsigned int) (short)-15340)))), ((+(710796547U))))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */long long int) (~((+(((/* implicit */int) var_11))))));
                    var_18 ^= ((/* implicit */_Bool) min((((388718386U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_6))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(8128)))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_12))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(var_12))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) 1065353216);
                                arr_16 [i_1 + 1] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((17903138809136366493ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 2] [i_0] [i_4])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)44331)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (short)-2131))))))) | (max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2 - 2])), (arr_10 [i_2 - 1] [i_3 - 1] [i_0 - 3] [i_1 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_17 [i_5]))));
        var_21 = ((/* implicit */short) arr_17 [i_5]);
    }
    var_22 = ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38966)))))) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) var_0)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) var_8)))));
}
