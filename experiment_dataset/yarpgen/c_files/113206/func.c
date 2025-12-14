/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113206
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
    var_10 = ((/* implicit */unsigned short) (-(9223372036854775807LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2]);
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_3))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (-(arr_11 [i_0] [i_0] [i_0]))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((short) arr_5 [i_0 - 1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((short) var_6))))), (((((/* implicit */int) arr_13 [i_3])) / (max((((/* implicit */int) arr_14 [i_5])), (arr_15 [i_3] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_25 [i_3] [i_4] [i_7] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4 - 1]))))) ? ((~(arr_15 [i_4 - 3] [i_7]))) : (((/* implicit */int) ((unsigned short) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_5])))))))));
                                arr_26 [i_3] [i_3] [i_3] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_5)))))) == (((arr_16 [i_3]) | (((/* implicit */int) (signed char)48)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))) : (2250118413U))), (((/* implicit */unsigned int) arr_13 [i_4 - 4])))))));
                }
            } 
        } 
    } 
}
