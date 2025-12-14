/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128564
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
    var_20 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) -1)) : (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -2064541203)) ? (((((/* implicit */_Bool) -4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)255))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (short)4047);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_2] [i_1] [i_0])) ? ((~(arr_1 [i_2 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)-22034))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) (signed char)-81)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))))));
}
