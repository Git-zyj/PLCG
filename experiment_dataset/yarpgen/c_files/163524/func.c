/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163524
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_1])))) ? (max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */int) (short)28541)))) : ((~(((/* implicit */int) (unsigned char)94))))));
                var_14 &= ((/* implicit */signed char) min((((/* implicit */int) (short)-3)), (((((/* implicit */int) (_Bool)1)) % ((~(((/* implicit */int) (unsigned char)185))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (unsigned char)185);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)185)) : (var_12)))))) ? (((/* implicit */int) var_7)) : (((arr_8 [i_0] [i_0] [i_0] [15U] [15U]) ? (((/* implicit */int) (short)-12912)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 3] [i_3] [(_Bool)1])))))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_2 [i_0])))) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)12930)) : (var_3))))))))));
                                arr_12 [i_2] [i_4] [i_3] [i_2] [i_4] [(short)5] [i_2 - 4] = ((/* implicit */_Bool) max((arr_3 [i_4 - 4] [i_4 + 1]), (min((arr_3 [i_4 - 3] [i_4]), (((/* implicit */long long int) (unsigned char)0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) min((var_10), (((/* implicit */short) ((_Bool) var_6)))))) >= (((((/* implicit */_Bool) (short)12930)) ? ((~(73408255))) : ((~(2147483647)))))))));
}
