/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180480
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
    var_13 &= var_5;
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (_Bool)1)) : (1178601156))) >= (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))), (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-16617))))))))));
                                arr_14 [13] [i_4] [13] [i_1] [i_1] [i_1] [0] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (unsigned char)160);
}
