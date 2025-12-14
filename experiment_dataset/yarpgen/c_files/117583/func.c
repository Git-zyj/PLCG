/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117583
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
    var_12 &= ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (0U))) : (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) var_9)))))))) + (-1458496138425651515LL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((arr_0 [i_0]) + (2147483647))) >> (((var_0) + (6283112033340356198LL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (64312778582852490LL))) : (((/* implicit */long long int) 6U)))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_13 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-2247940267628198459LL) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_2]))))))))) ? (((((/* implicit */_Bool) -7272931287407228081LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)22741)))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), ((unsigned char)27)))) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_5 [i_3])) : (0U)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) (unsigned short)56143)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34854))))) : (((/* implicit */unsigned int) ((int) var_4))))) : (((((/* implicit */_Bool) arr_7 [2LL] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))));
                                arr_14 [i_0] [i_0] [i_2] = var_1;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) ((_Bool) var_0));
                        arr_17 [i_1] [i_5] = ((/* implicit */signed char) ((unsigned char) (~(3U))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-67)) < (-1749701539)));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31572))))), (((arr_9 [i_0] [(unsigned char)15] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) 4294967291U)) : (arr_12 [i_1])));
                        arr_22 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */unsigned int) -2147483640)) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) && (((_Bool) (+((-9223372036854775807LL - 1LL)))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_15 [i_0] [i_0] [i_2] [13] [i_6])));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
}
