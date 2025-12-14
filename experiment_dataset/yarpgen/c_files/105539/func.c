/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105539
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
    var_16 = ((/* implicit */_Bool) 1664650971U);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_10))));
    var_18 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 33554431U)) ? (1664650955U) : (4156873342U)));
                var_20 = ((/* implicit */unsigned long long int) (((-(4156873342U))) >> (((var_5) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_0)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) != (1664650975U)));
                                var_22 = ((/* implicit */unsigned long long int) ((arr_10 [i_4 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 + 3] [i_4 - 1] [i_4 + 2])))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_7 [i_4 + 2] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) ((short) arr_1 [i_2] [i_1]));
                }
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1664650970U)) ? (1664650975U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_16 [i_7] [i_7 - 1] [i_7] [i_7] [i_1] [i_7])) ? (((/* implicit */int) arr_20 [i_6] [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (_Bool)1))))));
                                arr_21 [i_1] [i_6] [i_5] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_28 = ((max((18244036U), (((/* implicit */unsigned int) (_Bool)0)))) > (((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned short) (unsigned char)233)), (var_7))))));
}
