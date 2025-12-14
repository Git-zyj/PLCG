/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105477
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((unsigned char) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)15397))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 1845310767U)) : (9223372036854775807LL))), (((/* implicit */long long int) ((unsigned int) 18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 3] [i_4])))) : (arr_2 [i_0])));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_4 - 3]))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_0] [7U] [i_0])))) : (((/* implicit */int) arr_13 [i_4 - 3] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 - 3] [i_4 - 3]))))) : (((unsigned int) (unsigned char)72))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 3; i_5 < 8; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_5] [8U] [i_0] &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((unsigned char) (unsigned char)252)))))));
                                arr_26 [i_1] [i_1] [i_5] [i_5] [i_5] [i_1] [i_5] |= ((/* implicit */unsigned char) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)4)))) | (((((/* implicit */int) arr_8 [i_0] [i_1] [i_5 - 2] [i_7])) | (arr_3 [i_6 + 1])))))) ? (min((((/* implicit */long long int) ((arr_3 [(unsigned char)0]) / (arr_3 [1U])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_6] [(unsigned char)10])) ? (3349339184649523756LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [6U] [i_6] [i_7]))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) 4294967295U)) > (3349339184649523756LL)))))));
                                arr_27 [i_1] [i_0] [i_0] [i_0] |= (~(-9223372036854775796LL));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)20)) & (((/* implicit */int) ((min((((/* implicit */long long int) arr_22 [i_0] [i_0] [i_1] [i_5] [i_5])), (-7090256511359009775LL))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_5 - 3] [i_5] [i_0])))))))));
                    arr_29 [i_1] [i_5] [i_5 - 3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_22 [i_5 - 3] [i_5 + 1] [i_5 + 3] [(signed char)8] [i_5 - 2])))));
                }
                arr_30 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) -9223372036854775807LL);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), ((-((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) ? (0ULL) : (18446744073709551601ULL)));
                            arr_44 [i_8] [i_8] [i_8 - 1] [i_8] &= ((/* implicit */int) ((max((arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) (~(1166793422U)))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                            arr_45 [i_11] [(unsigned char)7] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_8 + 3]))))))))));
            }
        } 
    } 
}
