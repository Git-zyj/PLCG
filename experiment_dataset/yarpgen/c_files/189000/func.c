/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189000
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) var_11);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(unsigned char)4])) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (var_13)))), (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (var_14))))))))));
                        var_17 += ((/* implicit */unsigned char) (+(((arr_8 [i_0] [i_1 - 1] [i_2 - 2] [i_3]) - (((/* implicit */unsigned long long int) min((arr_3 [(unsigned short)17] [i_1]), (((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [(_Bool)1] [10] [(unsigned char)8] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (arr_21 [i_0] [i_4] [i_5])))) ? (arr_7 [i_0] [(unsigned short)19] [15]) : (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_21 [i_7] [i_4] [i_5]))))))) & (((((/* implicit */unsigned long long int) min((-1589422462), (((/* implicit */int) arr_20 [i_7] [(_Bool)1] [i_5] [i_5] [i_4] [(_Bool)1] [i_0]))))) + (((9137631517703866365ULL) + (((/* implicit */unsigned long long int) var_11))))))));
                                var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                                arr_23 [19U] [i_4] [i_7] [12ULL] [(short)8] [i_4] [(signed char)18] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((-1589422466) != (1589422465))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max(((-(arr_4 [i_0] [16ULL] [(short)1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-1589422462) - (((/* implicit */int) var_3))))) ? ((-(16760832))) : (((/* implicit */int) (unsigned short)20545))))))))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_0] [i_4] [i_5] [i_5] [i_5] [i_5])) + (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2))))))) != (min((((var_10) % (((/* implicit */int) arr_0 [i_5] [i_0])))), (((((/* implicit */int) var_0)) >> (((var_2) - (6476603204018648772LL)))))))));
                    arr_24 [i_0] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_6 [i_5]))) | (((((/* implicit */int) (_Bool)0)) % ((+(var_10)))))));
                                arr_31 [i_0] [10LL] [i_5] [i_9] [i_5] [(unsigned short)10] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (var_9)));
                                var_22 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)35221)), (2147483647)));
                                var_23 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_2)) ? (939524096U) : (((/* implicit */unsigned int) var_13)))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_9] [i_4])) / (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */int) arr_12 [(short)7] [i_4] [i_4])), (max((-1074705559), (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((short) var_14)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
            {
                {
                    arr_38 [i_0] [i_10] [i_11] [0] = ((/* implicit */_Bool) max(((((+(var_11))) * (((/* implicit */int) var_7)))), (max((((var_11) + (((/* implicit */int) arr_34 [12U])))), ((+(((/* implicit */int) var_7))))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_10))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
        arr_39 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))), (var_14))) <= ((+(((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) 3355443204U))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        arr_42 [i_12] [i_12] |= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) -1074705559)), (9787987018848670156ULL)))));
        arr_43 [i_12] [i_12] = var_9;
        var_26 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7)))))) ^ (min((var_6), (((/* implicit */long long int) var_13)))))) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 4) 
        {
            var_27 = ((/* implicit */int) max((var_27), ((-(((((var_13) - (((/* implicit */int) var_8)))) + (((((/* implicit */int) var_5)) + (((/* implicit */int) var_3))))))))));
            arr_48 [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))) ? (((/* implicit */int) max((arr_44 [i_13]), (max((var_4), (((/* implicit */short) var_7))))))) : (((/* implicit */int) arr_44 [(short)19]))));
            var_28 = ((/* implicit */signed char) ((max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_13 + 2])))))));
            arr_49 [i_13 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_45 [i_14 - 1])) ? (((/* implicit */unsigned long long int) (+(388645055)))) : (min((arr_45 [i_13]), (((/* implicit */unsigned long long int) var_1)))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_44 [i_14 + 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
            var_29 = ((/* implicit */short) ((max((((var_5) ? (((/* implicit */int) var_1)) : (var_10))), (arr_41 [i_14] [i_14 + 3]))) | ((((-(((/* implicit */int) var_4)))) * (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned int i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) (-(((((/* implicit */_Bool) arr_50 [16] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))))));
            var_31 = ((/* implicit */unsigned char) ((int) -299737344));
            arr_53 [(_Bool)0] [(short)1] [i_15] = (((+(arr_45 [i_13 - 2]))) * (var_14));
            arr_54 [i_13 + 2] [i_15 + 1] [i_15] = ((/* implicit */unsigned short) arr_44 [i_13 - 1]);
            var_32 -= ((/* implicit */unsigned long long int) (+(max((var_11), (((/* implicit */int) var_4))))));
        }
        arr_55 [i_13] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) -1074705536)) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)86)))) : (((((/* implicit */int) var_8)) & (var_11))))) & (((int) var_11))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_2))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_45 [11ULL]))));
    }
    for (long long int i_16 = 1; i_16 < 18; i_16 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_1))));
        arr_58 [i_16] |= ((/* implicit */long long int) var_12);
        var_36 = ((/* implicit */int) arr_33 [2]);
    }
    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (((-(((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30027))) : (-1722403602202645886LL))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
}
