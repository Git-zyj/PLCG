/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103736
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
    var_18 = ((/* implicit */unsigned short) ((int) var_13));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10791)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9)))) ? (max((var_9), (((/* implicit */unsigned long long int) var_8)))) : (var_7))) & (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)3769)))) | (((/* implicit */int) var_13))))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) 9335145805747899097ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_4 [i_1] [5ULL]), (arr_4 [(unsigned char)4] [i_1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (_Bool)1);
                        arr_10 [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_1] [i_0]))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (-2077206559) : (((/* implicit */int) (short)-1)))))));
                    }
                    for (int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4 + 2] [i_4] [i_4]))));
                        var_23 += ((/* implicit */unsigned short) (+(arr_0 [i_2])));
                        arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) > (arr_6 [i_4 - 2] [i_4 - 2] [i_4] [i_4])));
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)1))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_24 &= ((/* implicit */short) (-(34359738336ULL)));
                        var_25 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_26 += ((/* implicit */_Bool) (((+(((/* implicit */int) arr_11 [i_0] [i_6] [i_2] [i_6])))) | (arr_0 [i_2])));
                        var_27 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) + (18446744073709551615ULL)));
                        var_28 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (268435328) : (847927430)))));
                    }
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) 9957044389092752899ULL));
                }
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    var_29 += ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_30 |= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max((arr_8 [i_0] [i_1] [i_7] [i_7]), (arr_18 [i_0] [i_1] [i_7] [i_1])))))), ((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_7]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) (-(15997257718879824667ULL)));
                        var_32 = 5775538218831864518ULL;
                        arr_27 [i_7] &= ((/* implicit */unsigned short) ((unsigned long long int) ((arr_26 [(unsigned char)3] [i_1] [(_Bool)1] [i_1] [i_1]) ? (((/* implicit */int) arr_18 [i_1] [i_7] [i_1] [i_1])) : (arr_0 [i_7]))));
                        arr_28 [i_0] [i_1] [i_7] [i_7] [i_7] = (_Bool)0;
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127)))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_1] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((9111598267961652518ULL), (arr_2 [i_7])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (4398117204215673590ULL)))) : (max((((/* implicit */int) (_Bool)1)), (1292793191))))) >= (((/* implicit */int) ((_Bool) max((var_9), (((/* implicit */unsigned long long int) var_17))))))));
                        arr_32 [i_1] [i_1] [i_7] [i_9] &= ((/* implicit */short) ((unsigned short) (short)-17327));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        var_34 = (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10] [i_1] [i_1] [i_0]))) <= (7373051180713184409ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)28672)) >= (((/* implicit */int) arr_11 [i_0] [i_1] [i_7] [i_10]))))));
                        var_35 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14352))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_17 [(short)2] [4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 145436092)))))))));
                        arr_35 [i_1] [i_10] [i_10] = (((((-2147483647 - 1)) / (((/* implicit */int) (_Bool)1)))) / (((arr_0 [i_0]) / (((/* implicit */int) arr_33 [i_7] [i_1])))));
                    }
                }
                arr_36 [i_0] [i_0] = max((arr_23 [i_1] [i_1] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0]));
            }
        } 
    } 
    var_36 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) 9957044389092752899ULL))))) - (((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)227)))))))));
}
