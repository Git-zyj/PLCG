/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126040
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
    var_16 |= ((/* implicit */_Bool) 18U);
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)65535);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_18 *= var_15;
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(unsigned short)24])) / (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        var_20 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 1400905935U)) & (var_0))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((1704034558U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)32760)) <= (2147483647)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned char) (short)-1));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [(short)16] [i_0 + 1] [(signed char)14] [22ULL])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] [2LL] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [(signed char)0] [(signed char)0])))))));
                            }
                        } 
                    } 
                    var_24 = ((((((/* implicit */_Bool) (short)5132)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) <= ((-(((/* implicit */int) (short)48)))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((((/* implicit */long long int) var_14)) > (var_0))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) (-((~(1963187402U)))));
        var_27 = ((/* implicit */unsigned long long int) var_5);
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)161)) >= ((~(((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]))))));
    }
}
