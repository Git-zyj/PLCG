/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10391
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
        var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_2 [(unsigned char)0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */signed char) var_5);
                        var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_2] [i_2] [i_1 + 1]))) % (var_7)));
                        var_22 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) var_14);
        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_5) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
        var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_13 [i_4] [i_4]))));
        var_26 = ((/* implicit */long long int) (-(((((/* implicit */int) var_15)) << (((arr_13 [i_4] [i_4]) + (5568395970837676290LL)))))));
        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(arr_13 [i_4] [i_4])))) & (var_17))) & (((/* implicit */unsigned long long int) ((long long int) var_10)))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_15 [i_5])))) : (((/* implicit */int) ((unsigned short) var_2)))))));
        var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_15 [i_5])) != (((/* implicit */int) var_4)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_19 [i_6 + 2]), (((/* implicit */unsigned short) var_6))))) + (((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_6 - 1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                    var_32 ^= ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    var_33 = ((arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_7]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8 + 1] [i_6 + 1] [(signed char)13]))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */int) arr_21 [i_6] [i_6 + 2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) ((int) var_10));
                        var_36 = ((/* implicit */unsigned short) ((unsigned char) arr_22 [i_6 + 1] [i_6 + 2] [i_6 + 2]));
                        var_37 = ((/* implicit */int) var_6);
                        var_38 = ((/* implicit */short) (~(arr_20 [i_6] [i_6 + 2] [(unsigned char)0])));
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_39 ^= ((/* implicit */short) ((signed char) arr_22 [i_6] [i_6 + 1] [(unsigned char)8]));
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41921)) || (((/* implicit */_Bool) (unsigned short)23614))));
                            var_41 = ((/* implicit */unsigned short) var_9);
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)30567))));
                        }
                        for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            var_43 += ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) & (((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 2] [i_6 + 1]))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_6 + 1])) & (((/* implicit */int) arr_12 [i_6 - 1]))));
                            var_45 += ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (arr_18 [i_6 - 1] [i_6 - 1] [(signed char)9])));
                        }
                        for (short i_14 = 1; i_14 < 22; i_14 += 4) 
                        {
                            var_46 = ((/* implicit */unsigned int) arr_35 [i_11] [i_11] [i_14 - 1] [i_14] [15] [i_14 + 1]);
                            var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))));
                            var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_17))))))));
                        }
                        var_50 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_22 [i_6] [(unsigned short)18] [i_11])))));
                        var_51 -= ((/* implicit */unsigned short) var_3);
                    }
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_52 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_9))));
                        var_53 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)90))));
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_28 [i_6 + 1] [(_Bool)1] [i_9] [4ULL])) + (((/* implicit */int) var_3)))) : (((/* implicit */int) var_16))));
                    }
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) ((((arr_36 [i_7] [i_7] [i_6] [i_9] [i_7]) != (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15)))) : (arr_39 [i_6 + 1] [i_6 - 1] [i_7]))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    var_56 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))));
                    var_57 |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_6 + 1] [i_6 - 1] [i_6 + 2])) / (var_5)))), (((var_14) * (((/* implicit */unsigned int) var_1))))));
                    var_58 = ((/* implicit */short) var_10);
                    var_59 = ((/* implicit */unsigned char) (((~(var_7))) & (var_8)));
                }
                var_60 += ((/* implicit */signed char) ((unsigned int) (signed char)28));
                var_61 += ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_40 [i_7] [i_6 - 1] [i_6 - 1] [i_6 + 1])), (min((var_16), (((/* implicit */unsigned short) var_13)))))))));
                var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) var_9))));
            }
        } 
    } 
}
