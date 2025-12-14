/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187889
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_2))) >> (((var_7) + (6988626754116742411LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_0 + 2] [i_0 + 2] [(short)13] [i_0]);
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_7 [1] [i_1] [(unsigned short)4] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_5 [(unsigned char)6] [i_0]))));
                    arr_10 [i_0] [(short)3] [(short)3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_12 += ((/* implicit */short) (((+(var_10))) >> ((((-(var_7))) - (6988626754116742408LL)))));
                        var_13 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    }
                    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7))))) & (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_14 [i_0] [20U] [12ULL] [i_2] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0 - 1]))) : (20U));
                    }
                    for (signed char i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_5 + 2] [i_5]))));
                        arr_18 [i_0] [(unsigned char)4] [i_2] [i_2] = ((/* implicit */short) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [10LL] = ((/* implicit */int) var_8);
                            var_16 = ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_6 + 1] [i_2] [i_5] [i_0] [i_5 + 1])) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_11 [i_1] [i_1] [i_0] [i_1])) ^ (((/* implicit */int) (signed char)106)))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_1] [i_5] [i_0] = ((/* implicit */short) ((((20U) ^ (var_4))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [24ULL] [i_0])))))));
                            arr_28 [i_0] [i_1] [i_2] [19ULL] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                        }
                        for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned short)1))));
                            var_18 = ((/* implicit */unsigned char) var_7);
                            var_19 = (i_0 % 2 == 0) ? ((!(((/* implicit */_Bool) ((((-1917647323) + (2147483647))) >> (((arr_0 [i_0] [i_0]) + (1341405764)))))))) : ((!(((/* implicit */_Bool) ((((-1917647323) + (2147483647))) >> (((((arr_0 [i_0] [i_0]) - (1341405764))) + (201955986))))))));
                            arr_31 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((31U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 1] [(_Bool)1] [i_2] [i_5] [i_0] [i_5]))))))));
                        }
                        arr_32 [i_1] |= ((/* implicit */_Bool) ((unsigned short) ((signed char) arr_30 [i_0] [i_1] [i_2] [i_2] [i_2] [(_Bool)1])));
                    }
                    for (short i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        arr_36 [i_1] [i_1] &= ((/* implicit */unsigned char) 7167049024912895659ULL);
                        var_20 += ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >= ((+(((/* implicit */int) var_0)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_9 - 1])) || (((/* implicit */_Bool) arr_35 [i_0 - 3] [i_1]))));
                    }
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)14] [i_1] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
                }
                arr_37 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_5))))) | (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 1]) * (arr_20 [i_0] [3U] [i_0] [21LL] [i_0] [(_Bool)1]))) >> (((((((/* implicit */_Bool) -6053323964310728224LL)) ? (((/* implicit */unsigned long long int) arr_30 [i_0 + 1] [i_1] [i_1] [i_0] [i_0 + 2] [i_0 + 1])) : (var_6))) - (2114164244ULL)))))));
                arr_38 [i_1] [i_1] &= ((/* implicit */_Bool) 7243688087228632448ULL);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
}
