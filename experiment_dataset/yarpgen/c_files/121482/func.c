/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121482
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
    var_16 = ((unsigned int) ((signed char) ((unsigned long long int) (unsigned char)152)));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) ((signed char) (unsigned char)7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */short) ((unsigned long long int) ((_Bool) ((unsigned int) var_13))));
                            arr_10 [i_0 - 1] [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) ((signed char) var_1))));
                            arr_11 [(short)0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((unsigned int) ((_Bool) ((unsigned short) arr_9 [i_1] [i_2] [i_1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned int) ((long long int) ((unsigned int) 8078781502425048100LL)))))));
                            arr_18 [i_1] = ((/* implicit */unsigned int) ((long long int) ((long long int) ((int) arr_0 [i_0]))));
                            arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) ((int) var_3))));
                            arr_20 [i_0 - 2] [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((short) ((long long int) ((unsigned int) arr_15 [i_5] [i_4] [i_1] [i_0]))));
                        }
                    } 
                } 
                arr_21 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((_Bool) ((signed char) (unsigned short)4095))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */short) ((_Bool) ((int) ((short) (unsigned char)21))));
                            var_21 = ((/* implicit */unsigned int) ((short) ((short) (_Bool)1)));
                            arr_26 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */short) ((int) ((unsigned char) ((unsigned int) var_2))));
                            arr_27 [i_1] [i_0 - 2] [i_7] [i_7] [i_0] &= ((/* implicit */int) ((unsigned short) ((short) ((unsigned int) 8078781502425048108LL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
