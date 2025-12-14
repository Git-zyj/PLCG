/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141378
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) (signed char)-118)), ((short)-1))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) (((((~(-2366325873383164887LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))) / (((/* implicit */long long int) ((/* implicit */int) (short)-8658)))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1073741823) < (1073741823))))) | (arr_4 [i_0] [i_0])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */long long int) arr_14 [i_3] [i_4] [i_4] [i_5]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 6430065595029564613LL)) ? (((/* implicit */int) (unsigned char)22)) : (var_8)))), (((((/* implicit */_Bool) arr_17 [(signed char)23] [(signed char)23] [i_5] [11] [i_7] [i_7])) ? (((/* implicit */long long int) -1073741834)) : (var_0)))))) ? (((/* implicit */unsigned long long int) max((((int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) arr_14 [(unsigned char)7] [i_5] [22] [i_5])) : (((/* implicit */int) var_5))))))) : (arr_19 [i_3] [i_3] [i_4] [1ULL] [i_3] [i_6] [i_3])));
                                arr_21 [i_7] [i_5] [i_4] [i_3] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((long long int) 1073741817));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_17 = ((/* implicit */long long int) -1073741816);
        arr_24 [i_8] [i_8] &= ((/* implicit */long long int) ((max((((-6430065595029564602LL) / (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_4)))) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_8] [19])))));
    }
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 7; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_22 [i_9 - 2])));
            /* LoopNest 3 */
            for (unsigned char i_11 = 1; i_11 < 7; i_11 += 2) 
            {
                for (unsigned short i_12 = 3; i_12 < 8; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            arr_36 [i_11] [i_12] [i_11] = ((/* implicit */long long int) arr_30 [i_9] [i_9] [i_9 - 1]);
                            arr_37 [i_9 + 3] [i_11] [i_11] [i_12 + 1] [i_9 - 2] [i_10] [i_10] = ((/* implicit */_Bool) (+(1073741833)));
                            var_19 = ((/* implicit */unsigned long long int) (short)-32751);
                        }
                    } 
                } 
            } 
            arr_38 [i_9] = ((/* implicit */short) ((int) (short)-4094));
        }
        arr_39 [i_9 - 1] [i_9 - 1] &= (+(((/* implicit */int) (signed char)-127)));
    }
    for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            {
                                arr_55 [i_14] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (min(((~(((/* implicit */int) arr_17 [10LL] [i_15] [i_15] [i_16] [i_15] [i_18])))), (((/* implicit */int) min((var_6), (((/* implicit */signed char) (_Bool)1)))))))));
                                var_20 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) (short)20169)) < (((/* implicit */int) (short)20881))))), (max((((/* implicit */int) max(((short)19349), (((/* implicit */short) (unsigned char)230))))), (var_2)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 3; i_19 < 16; i_19 += 2) 
                    {
                        var_21 -= ((/* implicit */unsigned char) max(((+(arr_47 [i_14] [i_14] [i_14]))), (((/* implicit */long long int) max((min((var_11), (arr_57 [i_15] [i_16] [i_16]))), (((/* implicit */unsigned char) ((_Bool) var_5))))))));
                        arr_60 [11LL] &= ((/* implicit */short) ((((/* implicit */_Bool) ((max((8854269049649888313LL), (((/* implicit */long long int) (unsigned short)61199)))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))) ? (((/* implicit */int) (signed char)-39)) : (-1332071961)));
                        var_22 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) (short)-32765)), (5719909281371172613LL)))));
                    }
                    arr_61 [i_14] [(signed char)14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16311)) ? (((/* implicit */int) (short)17360)) : (max((arr_15 [i_14] [i_15] [i_16] [i_16]), (arr_15 [i_14] [i_15] [0ULL] [i_16])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_20 = 0; i_20 < 17; i_20 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_20] [i_20] [i_14] [i_14]))));
            var_24 = ((((/* implicit */_Bool) (short)-16303)) ? (((/* implicit */int) (short)32763)) : (1073741833));
        }
        for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
        {
            var_25 *= ((/* implicit */_Bool) (~(-3457617385062521888LL)));
            arr_66 [i_14] = ((/* implicit */unsigned char) var_6);
        }
        for (signed char i_22 = 0; i_22 < 17; i_22 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (long long int i_24 = 2; i_24 < 16; i_24 += 2) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)97))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((unsigned char)26), (((/* implicit */unsigned char) (_Bool)1)))))))), (max((arr_63 [i_14] [i_22]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) arr_70 [i_14] [i_14] [i_23])))))))));
                        arr_74 [(unsigned char)4] [i_22] [(unsigned char)4] [i_24 + 1] [i_23] [i_24 + 1] = ((/* implicit */unsigned char) arr_68 [i_22]);
                        arr_75 [i_14] [i_14] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_64 [i_14] [i_22])) ? (var_7) : (((/* implicit */long long int) 2079738432)))), (((/* implicit */long long int) arr_23 [i_14] [8])))), (((/* implicit */long long int) arr_41 [i_14]))));
                    }
                } 
            } 
            var_27 = 6430065595029564600LL;
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_80 [i_25] [i_22] [i_25] = ((/* implicit */short) (+(((/* implicit */int) max((var_9), (max((arr_14 [i_25] [i_22] [i_14] [i_14]), (((/* implicit */signed char) (_Bool)1)))))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_25] [i_25] [3LL] [i_25] [i_25])) ? (((/* implicit */long long int) -1063631771)) : (arr_48 [i_14] [14LL] [i_14])))) || (((/* implicit */_Bool) var_8))))), ((short)-16297))))));
            }
            arr_81 [i_14] [i_14] = ((/* implicit */short) (~((((_Bool)1) ? (-6430065595029564589LL) : (((/* implicit */long long int) 2147483647))))));
        }
    }
    for (int i_26 = 3; i_26 < 9; i_26 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_27 = 0; i_27 < 12; i_27 += 2) 
        {
            var_29 = ((/* implicit */_Bool) max(((~(max((((/* implicit */unsigned long long int) arr_13 [i_26])), (18197109750104390948ULL))))), (((/* implicit */unsigned long long int) (((-(18446744073709551614ULL))) < (((/* implicit */unsigned long long int) var_0)))))));
            var_30 &= arr_64 [i_26 + 3] [(signed char)10];
            arr_86 [(short)4] [i_26] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_26 + 2] [i_26 + 2]))) / (max((((/* implicit */long long int) ((arr_10 [i_26] [i_26 + 2]) > (((/* implicit */int) (short)4718))))), (((((/* implicit */_Bool) -6430065595029564563LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4721))) : (524256LL)))))));
        }
        for (unsigned char i_28 = 0; i_28 < 12; i_28 += 2) 
        {
            arr_89 [i_26 + 3] = (~(((int) arr_56 [i_26] [i_28] [i_28] [(short)15])));
            var_31 -= ((/* implicit */short) arr_69 [i_26] [i_26] [i_26] [i_26]);
            arr_90 [i_26 - 2] [(short)1] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (var_7))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_26] [i_26 + 2] [i_26] [i_26])) ^ (((/* implicit */int) arr_44 [i_26 + 1] [i_26])))))))) ? (max((max((2065329357), (((/* implicit */int) arr_12 [i_26] [i_28] [i_26 - 2])))), (((/* implicit */int) arr_17 [i_26] [i_26] [i_26] [i_26 + 2] [i_26 + 1] [i_26 + 2])))) : (((/* implicit */int) ((short) ((18446744073709551614ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_32 += ((/* implicit */long long int) var_5);
        }
        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_53 [i_26] [i_26 + 2] [i_26 + 1] [i_26] [i_26 - 2])))))));
            /* LoopNest 3 */
            for (signed char i_30 = 0; i_30 < 12; i_30 += 2) 
            {
                for (int i_31 = 0; i_31 < 12; i_31 += 2) 
                {
                    for (short i_32 = 1; i_32 < 11; i_32 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_9)), (619254980))), (((-1695142416) + ((~(((/* implicit */int) arr_45 [i_26 + 2]))))))));
                            arr_104 [i_26 + 3] [i_26 + 3] [i_26 + 3] [i_30] [i_32] [i_32] [i_32] = ((/* implicit */unsigned long long int) ((6430065595029564604LL) >> (((((((/* implicit */int) (signed char)26)) >> (((((/* implicit */int) var_12)) - (63))))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(signed char)11] [(signed char)11]))) : (7396137247022285125ULL)))))));
                            arr_105 [i_26] [i_26] [i_32] [i_31] [i_29] = max((min((arr_85 [i_29 - 1] [i_26 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_31]))))))), (((/* implicit */unsigned short) (short)32760)));
                            var_35 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) max((((/* implicit */short) var_6)), (arr_67 [i_29])))))), (((((/* implicit */int) arr_92 [i_29] [i_29])) * (((arr_79 [i_26 - 2] [i_29]) ? (((/* implicit */int) arr_91 [i_26] [i_26])) : (((/* implicit */int) var_6))))))));
                            arr_106 [i_26 - 1] [i_32] [i_30] [i_31] [i_30] = ((/* implicit */short) (~(max((((/* implicit */int) ((((/* implicit */int) (short)5790)) <= (((/* implicit */int) (short)19349))))), (((((/* implicit */_Bool) arr_42 [i_26 - 1] [i_26 - 1])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (short)-4719))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_64 [i_26 + 3] [13LL]))));
        }
        /* LoopNest 2 */
        for (long long int i_33 = 0; i_33 < 12; i_33 += 2) 
        {
            for (unsigned char i_34 = 2; i_34 < 10; i_34 += 2) 
            {
                {
                    var_37 += ((/* implicit */unsigned char) (-(arr_88 [i_26] [i_26])));
                    var_38 = ((/* implicit */long long int) max(((unsigned char)64), ((unsigned char)54)));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_91 [i_33] [i_34 - 2])))), (arr_110 [i_26 + 2] [i_33] [i_33] [i_34]))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) ((unsigned char) (unsigned char)76))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_35 = 0; i_35 < 12; i_35 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16322)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
                        arr_113 [i_26 + 3] [i_33] [i_34] = ((/* implicit */short) arr_22 [i_35]);
                    }
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) arr_99 [i_26] [i_26 + 3] [i_26 - 1] [i_26]);
    }
    var_42 = ((/* implicit */long long int) var_4);
}
