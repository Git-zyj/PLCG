/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182387
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) -3330034797548914791LL);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_14))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2625155106372551827ULL)))))) : (var_2))))));
                        arr_15 [13ULL] [4] [i_2] [i_1] = ((/* implicit */unsigned short) -4178845480442449795LL);
                        var_18 &= ((/* implicit */signed char) var_4);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1958083882)) ? ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) 1077557075)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */int) ((((var_9) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) -3189540834076882835LL))));
        arr_20 [12ULL] = ((/* implicit */short) 6680073743002629207ULL);
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) var_3))))) || (((((/* implicit */_Bool) 11003482154476781899ULL)) || ((_Bool)1))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -1186714349)) : (-6559008373892518036LL))), (min((-2135814248474300462LL), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))));
        arr_24 [i_5] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5]))))), (((/* implicit */unsigned long long int) arr_21 [i_5] [20LL])))) << (((((/* implicit */int) ((signed char) 1912701904U))) + (89)))));
    }
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    arr_31 [i_6] [i_7] [(unsigned short)14] [17LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))) < (var_12)));
                    arr_32 [i_6] [i_6] [(short)18] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18069))) == (min((((((/* implicit */_Bool) 900572291)) ? (63488U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))), (936293743U))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) min((arr_25 [(unsigned short)21]), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) min((arr_22 [(signed char)1]), (2179122683U)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_27 [16ULL]))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54743)))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_46 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63711)) ? (((/* implicit */unsigned long long int) 1559586920736388746LL)) : (arr_40 [i_6] [i_9] [i_9] [i_11])));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_12] [i_9] [i_6])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-6))))) : (((((/* implicit */_Bool) (unsigned short)51515)) ? (3458764513820540928ULL) : (((/* implicit */unsigned long long int) 3332053495305928400LL)))))))));
                            arr_47 [i_9] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */long long int) arr_39 [i_12] [i_11] [8ULL] [i_6]);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [(_Bool)1] [i_11] [i_10] [i_9] [i_6] [i_6])) / (((/* implicit */int) ((((/* implicit */_Bool) 3019633940U)) || (((/* implicit */_Bool) 7768403064367478759ULL))))))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_21 [i_6] [i_10]);
                        }
                    } 
                } 
                arr_48 [i_6] [4LL] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5894829834498409758LL)) ? (((/* implicit */int) (short)-5573)) : (((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */unsigned short) -5768523592307668352LL);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            arr_54 [i_14] [i_13] [i_13] [i_9] [i_9] [(signed char)19] [(signed char)3] = ((/* implicit */signed char) ((unsigned short) var_5));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9] [i_9]))));
                            var_28 = ((/* implicit */_Bool) ((short) arr_52 [i_6] [10LL] [i_10] [i_6] [i_14]));
                            arr_55 [i_9] [i_9] [(unsigned short)22] [i_13] [i_9] [i_13] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            }
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                arr_58 [i_9] [i_9] [i_15] = ((/* implicit */int) (_Bool)0);
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_26 [i_9] [i_6]), (min((((/* implicit */long long int) var_11)), (4789539136581508829LL))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        arr_66 [i_9] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (4294967295U))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)35637)) : (0)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned short) arr_25 [i_9])))));
                        arr_67 [i_6] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -860912751)) ? (36028797018963967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31461)))));
                        arr_68 [i_9] = ((/* implicit */unsigned char) (~(var_1)));
                    }
                } 
            } 
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_9] [i_9] [i_6])) : (((/* implicit */int) var_14))))) ? (((long long int) -278777237478643663LL)) : (((/* implicit */long long int) arr_51 [i_6] [i_9] [i_6] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_10)))) : (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_71 [(_Bool)1] [i_9] [i_6] = ((/* implicit */short) arr_36 [i_6] [i_9]);
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 796111291)), (17458171883695359356ULL)))) ? (((/* implicit */unsigned long long int) arr_59 [i_9] [i_18])) : (min((((/* implicit */unsigned long long int) 7962376370394716617LL)), (arr_40 [i_6] [i_9] [i_9] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) + (arr_43 [i_18] [8U] [i_9] [i_9] [i_6])))))) : (((unsigned int) var_8))));
                arr_72 [i_9] = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) arr_69 [i_6] [i_6] [i_6]);
            arr_75 [i_19] [i_19] = ((/* implicit */short) (_Bool)0);
            var_34 = var_4;
            arr_76 [i_6] [(signed char)19] [i_19] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((602459087666084982ULL) - (((/* implicit */unsigned long long int) 544119319563524745LL))))) ? (((((/* implicit */_Bool) -9080908197732420673LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28562))))))), (((/* implicit */unsigned long long int) ((long long int) var_7)))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            arr_80 [11LL] [i_20] [11LL] = ((/* implicit */int) (unsigned short)1174);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                arr_85 [i_20] [i_20] = ((/* implicit */unsigned short) (!((_Bool)1)));
                /* LoopSeq 2 */
                for (short i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                {
                    arr_88 [i_20] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1344988221)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-35))))) >= (((((/* implicit */_Bool) 12190271519741305344ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (var_12)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        arr_93 [i_6] [i_20] [i_20] [i_20] = ((short) (signed char)127);
                        var_35 += ((/* implicit */int) ((unsigned short) 1093493159U));
                    }
                    for (unsigned short i_24 = 0; i_24 < 25; i_24 += 1) 
                    {
                        arr_96 [i_6] [i_6] [(_Bool)1] [i_6] [i_6] [i_20] [i_6] = ((/* implicit */_Bool) arr_34 [i_6] [i_20] [i_24]);
                        arr_97 [i_6] [i_20] [i_20] [1LL] [3ULL] [3ULL] = -5539358709659784307LL;
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) 7936723755466028260ULL))));
                    }
                }
                for (short i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) var_7);
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)12783)) : (-666477778)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_10))))));
                    var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -2865915278670371329LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (var_2)))) : (arr_40 [i_6] [i_20] [i_20] [i_6])));
                    var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2347540193916870465LL)))) ? (134213632U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_20] [i_21] [i_21]))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 2) 
            {
                var_41 = ((/* implicit */unsigned char) arr_78 [i_26] [i_6]);
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59191))) : (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) var_15)))))));
                arr_105 [i_20] [i_6] [2U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_26])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_6] [i_6] [i_6])) ? (arr_61 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            }
        }
    }
    var_44 = ((/* implicit */signed char) var_13);
    var_45 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((unsigned int) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)36311)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28744))) : (-1231028208713362035LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1)))))));
}
