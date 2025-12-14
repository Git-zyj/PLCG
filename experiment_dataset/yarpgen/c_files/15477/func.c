/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15477
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (((unsigned char) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) (signed char)51);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_1]))));
        arr_7 [i_1] = ((/* implicit */short) (_Bool)1);
        var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_1] [i_1]))))));
        var_19 = ((/* implicit */int) 2118422570U);
    }
    var_20 = ((/* implicit */signed char) 4734518152501179904ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) (~(((int) (signed char)-114))));
        var_21 = ((/* implicit */long long int) arr_0 [14] [i_2]);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 3707626601079563726ULL))));
        var_23 = ((/* implicit */unsigned int) var_2);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (_Bool)1)) : (-1648437679)))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((signed char) 18446744073709551615ULL));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_21 [(unsigned char)11] [(unsigned char)11] [i_3] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(short)8])) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [(signed char)15] [(unsigned char)15]) : (13))) : (68896168)));
                arr_22 [i_5] [0ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (short)8191)) & (((/* implicit */int) arr_12 [i_3]))));
                arr_23 [i_5] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */int) arr_12 [9])) >= (((/* implicit */int) var_13))));
            }
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((arr_18 [i_6]) != (((/* implicit */unsigned long long int) var_10))));
                arr_27 [i_6] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) > (3707626601079563719ULL)));
                arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)86)) ? (((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) var_8)) : (var_15))) : (((((-468313681) + (2147483647))) >> (((((/* implicit */int) (short)29367)) - (29341)))))));
            }
            for (int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                arr_32 [i_7] [4U] [i_4] [7] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1))))) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_26 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_3])) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (var_7))) - (6140945064777040355ULL)))));
                            var_27 = ((/* implicit */short) 17887334284242573745ULL);
                            arr_38 [11LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_3] [(unsigned char)1] [i_3] [(short)11])) * ((~(((/* implicit */int) arr_3 [i_8]))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (arr_24 [i_8]) : (arr_24 [i_7])));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            var_29 += (((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (18446744073709551580ULL))) : (((/* implicit */unsigned long long int) ((arr_40 [i_3] [i_3]) ? (arr_25 [i_10] [i_3] [i_3]) : (((/* implicit */unsigned int) 352299885))))));
            arr_42 [i_3] [(short)8] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) / (1176887331))));
            arr_43 [i_3] = ((/* implicit */short) ((-791149384) != (-662239732)));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_10])) & (((/* implicit */int) arr_12 [i_3])))))));
        }
        var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((max((238779105), (((/* implicit */int) (unsigned char)243)))) >> (((((/* implicit */int) ((signed char) (short)10713))) + (64)))))), (max((8004472490970758228ULL), (((/* implicit */unsigned long long int) 1835563250))))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 1) 
    {
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) -305800550)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_13)))))))))));
        var_33 |= ((/* implicit */signed char) arr_5 [i_11 - 1] [(unsigned char)9]);
        arr_46 [i_11] = min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-28828)) + (2147483647))) << (((((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */int) var_14)) : (791149392))) - (1)))))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -791149377)) : (arr_44 [(signed char)2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_45 [i_11]))))))));
        arr_47 [i_11 + 1] [i_11 - 1] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_45 [i_11])), ((~(arr_44 [i_11])))));
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        for (int i_13 = 3; i_13 < 11; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) 1835563246)) ? (min((min((var_7), (((/* implicit */unsigned long long int) -1409016828)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)108)) ? (-8421849130507958675LL) : (((/* implicit */long long int) -1476945312))))))) : (((/* implicit */unsigned long long int) min((((int) (_Bool)1)), (((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) arr_5 [(unsigned char)1] [i_12])))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        for (long long int i_16 = 4; i_16 < 12; i_16 += 2) 
                        {
                            {
                                arr_61 [i_12] [i_12] [i_12] [i_12] [i_12] [2] = ((/* implicit */int) ((unsigned char) ((unsigned int) -9140336902944974056LL)));
                                var_35 = ((/* implicit */int) 11999030820759207373ULL);
                                arr_62 [i_12] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) -677359384)), (min((((((/* implicit */_Bool) 4354762888684902063ULL)) ? (4354762888684902069ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_16] [i_15]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_58 [i_16] [i_15] [i_15] [i_12] [i_13] [i_12])), (-1))))))));
                                arr_63 [(signed char)10] [(unsigned char)4] [i_12] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_16 + 1] [i_12] [i_14] [i_12] [i_12])) + (((/* implicit */int) arr_59 [i_12] [i_12] [i_12] [i_12] [i_12]))))) ? (((/* implicit */int) arr_36 [i_13 + 1] [i_13 - 3] [i_13 + 1] [i_13 - 1] [i_13] [i_13])) : (((((/* implicit */int) max((arr_52 [i_12] [6ULL] [i_12] [i_12]), (((/* implicit */signed char) (_Bool)1))))) % (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-1269))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
