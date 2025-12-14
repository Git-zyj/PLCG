/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17112
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(21768571)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)31110)) : (((/* implicit */int) (unsigned short)31111)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)34425)))))))))))));
    var_11 = var_6;
    var_12 ^= ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_3] [i_3] [i_1] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34441)) ? (((/* implicit */int) (unsigned short)8119)) : (((/* implicit */int) (unsigned short)31111))));
                                var_13 &= ((((/* implicit */int) (short)-30237)) + (((/* implicit */int) (signed char)-33)));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) + (((/* implicit */int) (signed char)-61))))) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) * (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
}
