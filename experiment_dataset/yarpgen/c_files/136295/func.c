/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136295
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) -866567853);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [(unsigned short)0] [i_4]);
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(max((((/* implicit */long long int) arr_7 [i_4] [i_1])), (min((((/* implicit */long long int) arr_11 [i_4] [i_0] [i_0] [i_1])), (9223372036854775807LL))))))))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_12 ^= ((/* implicit */short) arr_13 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_13 = (-(((((/* implicit */_Bool) arr_16 [i_0] [11] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0] [i_1] [13ULL] [i_5] [i_0]))))) : (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (5090240100218543032ULL))))));
                                var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(442005188))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+((-((+(var_8)))))));
}
