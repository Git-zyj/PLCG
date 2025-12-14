/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157566
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                    var_15 = ((/* implicit */unsigned short) (+(arr_1 [i_1] [i_0])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_9))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            arr_14 [i_4] [1LL] [i_3] = ((/* implicit */int) ((arr_11 [i_3] [i_3 + 1]) << (((1799705407645190499LL) - (1799705407645190480LL)))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15968))) > (var_11))) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (1125899906842623ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                for (unsigned int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) var_7))));
                        var_18 = ((/* implicit */long long int) arr_18 [i_5] [i_5]);
                        arr_20 [i_3] [i_3] &= ((/* implicit */_Bool) (+(arr_12 [1] [i_4 - 2] [1])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                var_19 += ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_24 [i_7] [i_4] [i_3 - 2] [i_3])) : (((/* implicit */int) var_12)));
                var_20 = ((/* implicit */unsigned char) 3349384856U);
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_31 [i_3 + 1] [i_3] [i_3] [i_3] [(unsigned short)5] [i_3 + 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)137)) / ((-(2147483647)))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
                arr_32 [(short)7] [(short)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483628)) ? (((/* implicit */long long int) 2147483647)) : (1491157001508499080LL))))));
                var_22 *= 3166561815U;
            }
        }
        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 4) 
        {
            var_23 = ((/* implicit */long long int) var_10);
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((11247113836333348749ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41171))))))))));
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+(var_8))) : (var_6)));
            var_26 = ((/* implicit */_Bool) -2260241790794517395LL);
            var_27 = ((unsigned short) ((min((((/* implicit */long long int) arr_1 [i_3] [i_11])), (arr_17 [i_3] [(_Bool)1] [(_Bool)1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (var_13)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 4) 
            {
                arr_39 [i_11] [i_11] [i_11] [i_3] = ((/* implicit */unsigned char) (~(var_11)));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    var_28 -= ((/* implicit */unsigned int) ((arr_27 [i_12] [i_12] [i_12] [i_12]) < (((/* implicit */unsigned long long int) (+(var_8))))));
                    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_3])) ? (arr_28 [i_12]) : (arr_28 [i_12])));
                }
                var_30 = ((/* implicit */long long int) (-(arr_2 [i_3 - 2])));
            }
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                var_31 = (-(((/* implicit */int) arr_36 [i_14 + 1] [i_3 - 2] [i_3 - 2])));
                var_32 = ((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) 2790191286U)))) << (((((((((/* implicit */_Bool) 1392192112222558380LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_11])))) + (138))) - (59))));
            }
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 2; i_17 < 14; i_17 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) (-(arr_10 [i_3 + 1] [i_3])));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_47 [i_3] [i_3] [i_15] [12U] [i_17 - 1] [12U])))))))));
                            var_35 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                arr_51 [i_3] [i_11] = ((/* implicit */_Bool) min((((long long int) arr_44 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 1])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
            }
            for (int i_18 = 2; i_18 < 15; i_18 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) arr_38 [i_11] [i_3 - 1]);
                var_37 = ((/* implicit */int) 1392192112222558380LL);
                var_38 = ((var_9) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned char)15)))))));
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_3 - 2] [i_18] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2790191286U))) > (((/* implicit */unsigned int) arr_49 [i_3 - 1] [i_11] [4] [i_11] [i_18 - 1]))))), (max((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) : (1850433976U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_2))))))))));
            }
            var_40 = ((/* implicit */unsigned short) ((min((arr_21 [i_3] [i_3 + 1] [i_3 - 1] [i_11]), (1293117659U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((3U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3 + 1] [i_11] [i_11])))))))));
        }
        for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 3) 
        {
            arr_57 [i_3 - 1] [i_19] = ((/* implicit */unsigned long long int) (((-(arr_33 [i_3 - 2] [i_19]))) >> (((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3 - 2] [i_19 - 1] [i_19 + 2]))) & (var_10)))));
            var_41 |= ((((/* implicit */_Bool) ((arr_47 [i_3] [i_19 + 3] [i_19] [14] [i_3 - 1] [i_3 + 1]) / (((/* implicit */int) arr_15 [i_3]))))) && (((/* implicit */_Bool) arr_36 [(unsigned short)3] [i_19] [(unsigned short)3])));
            var_42 = ((/* implicit */int) (unsigned short)65535);
        }
        var_43 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2677397468U)) ? (var_5) : (23U)))) ? ((+(var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)46726))))))), (((/* implicit */unsigned int) arr_52 [i_3] [i_3] [i_3 + 1]))));
    }
    /* LoopNest 3 */
    for (unsigned short i_20 = 2; i_20 < 22; i_20 += 3) 
    {
        for (unsigned long long int i_21 = 2; i_21 < 22; i_21 += 3) 
        {
            for (unsigned short i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                {
                    arr_64 [i_21] [i_21] = ((/* implicit */_Bool) ((((((/* implicit */int) ((arr_61 [i_20] [i_21] [i_20]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) << (((var_5) - (2903070312U))))) % (((/* implicit */int) (unsigned char)67))));
                    arr_65 [i_21] [14] [21U] [i_22] = ((/* implicit */unsigned long long int) ((int) 2424125125790128437LL));
                    var_44 = ((/* implicit */unsigned long long int) -8623154783962516376LL);
                    var_45 -= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_63 [i_22] [i_22] [i_20] [i_22])) ? (((/* implicit */unsigned long long int) -4521710199581486973LL)) : (var_13))), (arr_61 [i_20 + 1] [i_21 + 2] [i_21 - 2]))), (max((3ULL), (((/* implicit */unsigned long long int) (unsigned short)6071))))));
                }
            } 
        } 
    } 
    var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) 2060431086)) ? (((/* implicit */int) (unsigned short)467)) : (((/* implicit */int) (short)6595)))) - (451))))) << (((((/* implicit */int) max((min((((/* implicit */unsigned short) (short)1346)), (var_12))), (var_12)))) - (26171)))));
    var_47 = ((/* implicit */unsigned short) min((((/* implicit */int) ((3166561815U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (16777215)));
}
