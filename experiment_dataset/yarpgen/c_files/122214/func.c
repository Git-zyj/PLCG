/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122214
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
    var_20 |= ((unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_6))));
    var_21 = ((/* implicit */short) var_1);
    var_22 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((unsigned int) 672723347U);
                var_23 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                var_24 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_3 [2U] [i_1 + 2])) & (((/* implicit */int) arr_3 [(unsigned short)2] [i_1 + 1])))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((unsigned short) 1349358101U));
                                arr_16 [i_0] [i_1] [i_2] [(short)7] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_4 + 2] [i_4]) > (arr_2 [i_4 + 2] [i_4 + 1])));
                                var_25 -= ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_17 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 - 1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (short)-1)));
                                var_26 = ((short) ((unsigned int) ((((/* implicit */int) arr_8 [i_1])) >= (((/* implicit */int) arr_13 [(unsigned short)0] [i_1] [9U])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
