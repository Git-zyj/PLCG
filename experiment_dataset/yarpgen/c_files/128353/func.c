/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128353
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
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [7ULL] = max(((_Bool)1), ((_Bool)1));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_11))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) var_4);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 &= ((/* implicit */short) ((((((/* implicit */_Bool) 355347745)) ? (0LL) : (((/* implicit */long long int) arr_6 [i_1] [i_1])))) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_21 += ((((/* implicit */int) arr_11 [i_3] [i_2] [i_2])) & (((/* implicit */int) var_5)));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_16))));
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_2])) & (var_0)));
                    var_23 += ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_3])) << (((arr_8 [i_3]) - (9368039819083374760ULL))))) >> (0LL)));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 5761583915506066574ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)72)))));
                            arr_30 [i_6] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (unsigned short)25919);
                            arr_31 [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_19 [15U] [i_4] [i_6 + 1]))));
                            arr_32 [i_4] [16] [16ULL] [(_Bool)1] [i_4] &= ((/* implicit */unsigned int) -1117104737);
                            arr_33 [i_4] [i_4] [14] [i_6 + 1] [i_6] [i_8] [i_8 - 1] = ((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) != (0LL))) ? (arr_34 [i_4] [i_5] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_6)))))));
                var_25 = ((((/* implicit */_Bool) arr_19 [i_5 + 1] [5U] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_5 + 1] [16ULL] [16ULL])));
            }
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 1; i_11 < 23; i_11 += 3) /* same iter space */
                {
                    arr_40 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_41 [(unsigned short)10] [i_10] = ((/* implicit */int) var_17);
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */int) min((var_26), ((((((((_Bool)1) ? (((/* implicit */int) arr_37 [i_4] [i_5] [(_Bool)1] [i_12 - 1])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)12490)) - (12463)))))));
                    var_27 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_5 + 1]))));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) 3554539120U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)195)))))));
                    var_29 -= ((/* implicit */short) ((int) arr_42 [i_4] [i_5] [i_10] [i_4]));
                    arr_46 [i_12] = ((/* implicit */unsigned long long int) (short)8535);
                }
                for (unsigned short i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_51 [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_5 + 1] [i_5] [i_5 + 1]))));
                        var_30 *= ((/* implicit */_Bool) (-(arr_16 [i_5 + 1])));
                    }
                    var_31 = ((/* implicit */int) ((_Bool) (unsigned char)253));
                }
                var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                arr_52 [i_10] [22ULL] [i_10] [i_5] = ((/* implicit */int) ((unsigned int) arr_49 [i_5 + 1] [i_5 + 1] [i_5 + 1]));
                var_33 = ((/* implicit */_Bool) (signed char)-29);
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 22; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 4; i_17 < 21; i_17 += 4) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned long long int) ((unsigned short) -7107269321791928693LL));
                            arr_59 [i_4] [i_5] = (((_Bool)1) ? (14214585162631909171ULL) : (((/* implicit */unsigned long long int) -7107269321791928689LL)));
                            var_35 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_42 [17ULL] [15LL] [i_15] [17ULL])) >> (((-2019211935025325157LL) + (2019211935025325177LL))))));
                            var_36 = ((/* implicit */unsigned char) var_16);
                            var_37 &= ((/* implicit */int) arr_0 [i_16 - 1]);
                        }
                    } 
                } 
                arr_60 [i_5] [i_5] [i_5 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(_Bool)1] [i_5 + 1] [i_15] [i_15 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_4] [i_4] [(unsigned short)13] [i_15])) / (((/* implicit */int) var_17))))) : (((7224452868524672169ULL) >> (((/* implicit */int) var_5))))));
            }
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) var_15);
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_27 [i_5] [18LL] [i_5 + 1] [i_5 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]))));
                arr_64 [i_18] [i_18] [i_18] [i_4] = ((/* implicit */signed char) var_8);
            }
            arr_65 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1117104737)) ? (((/* implicit */int) (unsigned short)23171)) : (((/* implicit */int) (short)-9130))));
            arr_66 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_58 [i_4] [(unsigned short)0] [i_4] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_58 [i_5 + 1] [i_4] [i_4] [i_4] [i_4]))));
            arr_67 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 299801983709301013ULL)))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        {
                            var_40 -= ((/* implicit */signed char) max((max((min((((/* implicit */long long int) (_Bool)1)), (var_9))), (28LL))), (((/* implicit */long long int) (signed char)124))));
                            var_41 -= ((/* implicit */short) ((((-1326132040) == (((/* implicit */int) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (1909251254) : (((/* implicit */int) var_13)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_21] [i_21] [i_20] [i_19] [i_4])) + (arr_1 [(unsigned short)23])))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (-1909251249))) : (arr_62 [(unsigned short)9] [i_21] [i_20])))));
                            var_42 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_4] [i_4])) & (((/* implicit */int) arr_20 [i_20] [i_21] [2]))))) ? (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)146)) >> (((((/* implicit */int) (unsigned short)21275)) - (21271))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 0)) || ((_Bool)1)))));
                            var_43 = ((/* implicit */signed char) max((((var_5) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -362879276)) || (((/* implicit */_Bool) arr_2 [i_4])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_14))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_61 [i_22] [i_4] [i_4] [i_4])) != (((/* implicit */int) arr_43 [i_22] [i_4] [i_4] [4U]))))))))));
                        }
                    } 
                } 
            } 
            arr_78 [0ULL] &= ((_Bool) (!((_Bool)1)));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_61 [i_19] [i_4] [i_4] [i_4])) : (arr_22 [i_4] [i_4] [i_4]))))) == (min((max((((/* implicit */unsigned int) (_Bool)1)), (4294967271U))), (arr_48 [i_4] [i_19] [i_4] [i_4])))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (~(min((min((((/* implicit */long long int) var_4)), (var_14))), (((/* implicit */long long int) ((signed char) var_13))))))))));
            arr_81 [i_23] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((6333614652502483324LL) > (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_23] [16ULL] [i_23] [i_4] [i_4]))))))) % (((((/* implicit */_Bool) arr_74 [i_4] [i_23] [i_23] [i_23] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [(_Bool)1] [i_23] [i_4] [i_4] [i_4]))) : (arr_77 [i_23] [(unsigned char)12])))));
            arr_82 [i_4] [i_23] = min((((((/* implicit */_Bool) 3441311936660197698ULL)) ? (arr_15 [i_23]) : (((/* implicit */int) arr_36 [i_4])))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_17)))))));
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                arr_85 [i_24] [i_23] [i_4] = ((/* implicit */int) ((arr_73 [i_4] [i_4] [i_4] [i_4] [10ULL]) ? (((/* implicit */long long int) max((arr_16 [i_4]), (((/* implicit */unsigned int) (signed char)-18))))) : (((max((((/* implicit */long long int) arr_42 [i_4] [i_23] [i_23] [i_24])), (var_14))) & (min((((/* implicit */long long int) (unsigned char)145)), (var_14)))))));
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) var_14)) * (min((((/* implicit */unsigned long long int) var_9)), (var_11))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))))));
            }
        }
        var_47 -= ((/* implicit */unsigned long long int) var_0);
        var_48 = ((/* implicit */short) min((((((/* implicit */int) (signed char)17)) < (((/* implicit */int) (_Bool)1)))), (arr_76 [15] [i_4] [15] [i_4] [i_4])));
        var_49 = ((/* implicit */unsigned char) min((arr_77 [i_4] [i_4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
    }
}
