/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1509
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
    var_11 ^= ((/* implicit */unsigned char) var_10);
    var_12 = ((/* implicit */unsigned short) var_1);
    var_13 += ((/* implicit */_Bool) var_2);
    var_14 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)30249)) : (((/* implicit */int) max((var_5), (var_4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(var_6)))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) var_1)) : (var_9)))), (((long long int) (unsigned short)30249))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (~(var_0)));
                                var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                                var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35279)) ? (-3134801314175212888LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_0])) && (((/* implicit */_Bool) (short)18965))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((unsigned int) arr_2 [i_0] [(unsigned char)4]))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45534))) : (-3134801314175212888LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)30249)))) : (((/* implicit */int) (short)-8970))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2194587795U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44040)))))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 - 2])) ? (arr_11 [i_1 + 2] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 - 3]) : (arr_11 [i_1 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 4] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_0 - 4] [i_0 - 2] [i_0 - 3] [i_0 - 4])) ? (arr_11 [i_1 + 2] [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_11 [i_1 + 2] [i_0 - 2] [i_0 + 1] [i_0 - 4] [i_0 - 2]))))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_1 - 1] [(unsigned char)8])) ? (((/* implicit */int) arr_12 [(signed char)4] [i_1 - 3] [(signed char)4])) : (((/* implicit */int) var_4))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 2]))));
                    }
                    arr_18 [i_5] [i_5] [i_1] [i_5] = var_8;
                }
                var_23 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned char)92)), (((arr_7 [i_0] [18LL] [i_1] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_17 [i_1] [i_1 - 3] [i_1] [i_0 - 2]) >= (arr_17 [i_0] [i_1 - 2] [i_0] [i_0 - 2])))) >> ((((~(arr_17 [i_1] [i_1 + 1] [i_0 - 3] [i_0 - 3]))) - (3538788975U)))));
            }
        } 
    } 
}
