/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170817
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
    var_20 = (_Bool)1;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = 2780368557617869327LL;
        var_22 = ((/* implicit */unsigned long long int) (+(((min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (short)3166))) / ((+(var_9))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (1096541181) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)-3167)) * (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_3] [i_4])) >= (((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6806847988745615043LL)) ? (((/* implicit */long long int) arr_10 [i_1])) : (((((/* implicit */_Bool) (short)-3166)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1785055398846502576LL)))));
                arr_16 [i_4] [i_4] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-10725))))) > (arr_7 [i_1] [i_1])));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
        {
            arr_19 [i_5] = arr_7 [i_1] [i_5];
            arr_20 [i_5] = ((/* implicit */signed char) ((unsigned char) (short)3169));
        }
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_6 + 1])) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27724))) : (18446744073709551615ULL)))));
            var_27 += ((/* implicit */int) ((((unsigned long long int) var_0)) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((10173851739637437740ULL) - (10173851739637437719ULL))))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(8272892334072113868ULL)))) ? (2839285796U) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) & (var_18)))));
                    var_29 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_9] [i_8] [i_7]))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        var_30 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (((((4323455642275676160ULL) << (((var_2) - (1604631362))))) >> ((+(((/* implicit */int) arr_0 [i_11] [i_7]))))))));
                        arr_37 [(unsigned char)1] [i_8] [9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((_Bool) (short)3153)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7] [i_10] [i_10])) ? (((/* implicit */int) (short)5574)) : (((/* implicit */int) arr_36 [(signed char)15] [i_8] [i_8] [i_8] [i_8] [(signed char)15]))))) : (max((var_19), (((/* implicit */unsigned int) arr_23 [i_7]))))));
                        var_31 = ((/* implicit */unsigned char) min((min((max((2248689403604034819LL), (((/* implicit */long long int) (unsigned short)65526)))), (((/* implicit */long long int) ((4294967295U) == (var_19)))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_27 [23LL] [i_8] [i_8])))))));
                    }
                    var_32 = ((/* implicit */int) arr_25 [i_7] [i_7] [i_7]);
                    arr_38 [i_10] [i_8] [i_8] [5U] = (~(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_11)) : (3004460597U))) >> ((+(((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22)) - (((/* implicit */int) (signed char)-5))))), (((min(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) var_2)) ? (10845578367025560337ULL) : (15240465041667576980ULL))) : (((/* implicit */unsigned long long int) max((1102328472U), (((/* implicit */unsigned int) var_11))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 3; i_13 < 24; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 23; i_14 += 3) 
                        {
                            {
                                arr_46 [22ULL] [(signed char)9] [(signed char)23] [22ULL] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775782LL)) || (arr_24 [i_7] [i_7])))), (var_19)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_41 [i_7] [i_8] [0U])) + (2147483647))) << (((((((/* implicit */int) (short)-18147)) + (18175))) - (28)))))))))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -5)) : (13811253717819762888ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                var_34 &= ((/* implicit */unsigned char) -1225250430519044342LL);
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)18)), (1476827689580118454LL)))) ? (((/* implicit */int) ((min((1215635637495053944ULL), (((/* implicit */unsigned long long int) (signed char)10)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)93)) / (((/* implicit */int) (short)10)))))))) : (((/* implicit */int) max(((signed char)-13), (((/* implicit */signed char) (_Bool)0)))))));
                                arr_47 [7ULL] [7ULL] [i_8] [7ULL] [i_13] [0U] [i_14] = ((/* implicit */short) arr_44 [i_7] [i_7] [i_7] [i_7] [i_7]);
                                var_36 = ((/* implicit */short) max((4635490355889788737ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (140737488355327LL))), (max((8474914664755735151LL), (((/* implicit */long long int) (signed char)-126)))))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)18)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7546736712536559282ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))))))) : (((((/* implicit */_Bool) var_2)) ? (arr_25 [i_7] [i_8] [i_12]) : (((/* implicit */unsigned long long int) 1519840764029032944LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32766)) && (((/* implicit */_Bool) var_13))))) >> (((((/* implicit */int) arr_42 [i_8] [i_8])) - (19486))))))));
                }
                arr_48 [24LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-81)) ? (-8474914664755735149LL) : (((/* implicit */long long int) 2396571376U))));
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_8)), (min((((/* implicit */short) (signed char)7)), ((short)32758)))))), (((((/* implicit */_Bool) -8474914664755735156LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (4294967291U) : (1898395922U)))) : (min((4892328150157046955ULL), (((/* implicit */unsigned long long int) -8474914664755735132LL))))))));
}
