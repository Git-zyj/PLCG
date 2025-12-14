/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126483
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)26696)))));
    var_16 = var_1;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (arr_8 [0LL] [0LL])));
                                var_18 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-26721))));
                                var_19 = ((/* implicit */unsigned int) arr_11 [i_1] [(short)6]);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_9)))) : (arr_6 [i_3] [i_2] [i_1] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((min((((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) arr_8 [i_5] [i_5])))));
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) max((var_7), (((/* implicit */unsigned char) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
