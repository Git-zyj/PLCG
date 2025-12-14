/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148710
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
    var_11 = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_6)), (((((((/* implicit */int) (short)-6869)) + (2147483647))) >> (((((/* implicit */int) (short)-6867)) + (6873))))))) | (((/* implicit */int) ((unsigned short) (short)-6869)))));
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) (short)6869)) + (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6869)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) != (var_10))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            var_14 -= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)44105)), (max((((/* implicit */long long int) 4252873061U)), (-6156293193351061693LL))))), (((/* implicit */long long int) max((((/* implicit */short) var_0)), (arr_2 [i_0 - 1] [i_1 - 2]))))));
            var_15 = ((/* implicit */unsigned short) var_2);
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) (unsigned short)48479))))) ? (((((arr_3 [(unsigned short)4]) + (9223372036854775807LL))) << (((((arr_6 [i_0 - 1]) + (1558693703))) - (31))))) : (((/* implicit */long long int) max((arr_6 [i_0 + 1]), (arr_6 [i_0 - 1]))))));
            var_17 = arr_1 [i_0] [i_2];
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 3354119424U))));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)141)) == (((/* implicit */int) (unsigned short)13236))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [(signed char)1] [i_0 - 1]) / (arr_5 [i_0] [i_0] [i_0 + 1]))))));
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) (unsigned short)48479);
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0 - 1] [10LL] [10LL])) : (((/* implicit */int) arr_7 [i_0 - 1] [(unsigned short)16] [i_0])))))));
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_3] [i_6] = ((/* implicit */unsigned short) ((int) var_8));
                            arr_22 [i_7] [21LL] [i_3] [i_3] [4LL] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52321)) ? (((/* implicit */int) arr_13 [(unsigned short)20] [(unsigned short)20] [i_5] [i_3])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)6883)) : (((/* implicit */int) arr_17 [i_0 + 1] [i_3] [i_0 - 1] [i_7] [(short)10]))))));
                            var_23 = ((/* implicit */signed char) arr_12 [i_0] [i_3]);
                            arr_23 [i_0] [i_3] [i_5] [i_3] [i_7] [i_0] [i_0 + 1] = (unsigned short)17057;
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_24 = ((((_Bool) (short)-22386)) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((((/* implicit */int) (short)-6869)) & (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(_Bool)1]))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_30 [i_0 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)52299)) == (((/* implicit */int) var_0))))) << (((((/* implicit */int) arr_1 [i_10] [i_9 - 2])) - (17723)))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_0 + 1])) & (((/* implicit */int) (signed char)127))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_3))));
                            var_27 = ((arr_17 [i_9 - 1] [i_3] [i_9 + 1] [i_3] [(unsigned char)11]) ? (((/* implicit */int) (unsigned short)30762)) : (((/* implicit */int) arr_8 [i_8] [i_8])));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_34 [i_3] [18U] [i_11] = ((/* implicit */unsigned char) arr_19 [(short)14] [i_3] [i_0] [8U] [i_0] [i_3] [i_0]);
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (_Bool)1))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_29 = ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) (unsigned short)13214)));
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) arr_18 [i_0 + 1] [i_0 + 1] [i_3] [i_12] [i_3] [i_13]);
                    var_31 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_29 [i_0] [i_3] [i_3] [i_3])));
                }
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))));
            }
            var_33 = ((/* implicit */short) arr_20 [i_3] [i_3] [i_3] [i_3] [i_0 + 1] [i_0 + 1] [i_0]);
        }
        var_34 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52299)) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0 - 1] [2] [i_0]))))) : (((/* implicit */int) (short)15))))));
        arr_42 [i_0] = ((/* implicit */unsigned int) (+(2031616)));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)52321), (((/* implicit */unsigned short) (short)-6870))))) ? (((/* implicit */int) max(((unsigned short)13215), (((/* implicit */unsigned short) ((_Bool) (unsigned char)171)))))) : (((/* implicit */int) max((arr_16 [(short)7] [i_0] [i_0 + 1] [i_17 - 1]), (max((arr_16 [i_14] [13U] [(unsigned char)21] [i_17 - 1]), (((/* implicit */unsigned char) arr_20 [i_0] [(unsigned char)18] [i_14] [i_15] [i_15] [i_16] [i_17])))))))));
                                var_36 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3094774852816582070ULL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) == (var_5))));
                                arr_55 [3] [i_14] [i_14] [i_15 + 1] [3] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-6869)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8960))) : (max((498297207U), (((/* implicit */unsigned int) (short)6869))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56577))) / (3796670089U)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [1LL] [i_15] [i_15])) % (((/* implicit */int) (unsigned char)110)))))))) : (((var_2) ? (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) var_5))))) : (((/* implicit */int) (_Bool)1))))));
                                var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_15] [i_15]))))), ((-(arr_38 [i_0 - 1] [i_14] [i_15 - 1] [i_0 - 1] [i_17 - 1] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (8557574525309535735LL)))) || (((/* implicit */_Bool) (~(max((var_1), (((/* implicit */long long int) (unsigned char)23)))))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-5686)) & (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)232), (var_7)))) || (((/* implicit */_Bool) var_0)))))));
                    var_40 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (0ULL)))) ? ((-(((/* implicit */int) arr_39 [i_0] [i_14] [i_0] [i_14] [i_15 - 1])))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_2 [i_0 + 1] [i_14]))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_45 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1])))));
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_1))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned int) arr_45 [i_0 + 1]);
    }
}
