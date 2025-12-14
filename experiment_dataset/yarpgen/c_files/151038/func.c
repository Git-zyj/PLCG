/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151038
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (short)26234)) - (26215)))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 &= ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            var_21 &= ((/* implicit */unsigned long long int) min((1606152953U), (1444398870U)));
            var_22 = ((/* implicit */unsigned int) arr_4 [i_1 - 3] [i_0]);
            arr_5 [(unsigned short)8] [12U] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned char)5] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0] [i_0])))));
            var_23 = (-((~(arr_3 [i_0]))));
            arr_6 [i_1 + 1] [(_Bool)1] [7U] = ((/* implicit */long long int) ((unsigned int) min((arr_3 [i_0]), (arr_3 [i_0]))));
        }
    }
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))))))) ? (max(((+(var_12))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)144)) - (120)))))))) : (((((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (arr_8 [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))));
        var_25 |= ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned short) arr_7 [i_2]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_1 [i_2])))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3]);
        var_27 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned long long int) arr_10 [i_3 + 2] [i_3 - 1])) : (7683784429732191815ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4 - 1])) << (((((/* implicit */int) arr_9 [i_5])) + (((/* implicit */int) arr_9 [i_5]))))));
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) ((_Bool) arr_12 [i_5])))))), (((unsigned int) arr_11 [i_4]))));
            var_30 = ((/* implicit */unsigned short) (_Bool)1);
            var_31 = ((/* implicit */_Bool) var_17);
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_32 -= ((/* implicit */unsigned char) arr_21 [8]);
                            var_33 = ((/* implicit */long long int) arr_17 [i_4] [i_7]);
                            arr_25 [i_9] [i_8] [i_7] [i_8] [2U] |= ((/* implicit */unsigned long long int) ((unsigned char) var_13));
                        }
                        for (long long int i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_10 + 1] [i_4 + 1]))))), (((((((/* implicit */int) (short)13963)) != (((/* implicit */int) (short)-5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26234))) : (7683784429732191793ULL)))));
                            var_35 = ((/* implicit */unsigned char) (+(arr_26 [i_4] [i_6] [i_7] [i_7] [i_7])));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)26231)) + (((/* implicit */int) (unsigned short)16804))))) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (short)-8222)))) : (((int) (signed char)42))));
                            arr_28 [i_10 + 1] [i_10 + 1] [i_7] [i_8] [i_10] [i_10 + 1] [i_7] = min((arr_10 [i_4] [i_10]), (3916252759U));
                        }
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_37 += ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 2688814322U)) ? (((/* implicit */long long int) var_2)) : (arr_13 [i_4]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_4])))))))) + (var_9));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((arr_13 [i_4]), (((/* implicit */long long int) (unsigned short)34595))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((unsigned int) var_9)))))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) < (((((/* implicit */_Bool) arr_27 [i_4 - 1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11])) ? (576460477425516544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned char)10] [i_6] [i_7] [i_6] [i_4])))))));
                            arr_31 [i_4] [(_Bool)1] [(_Bool)1] [i_4 - 1] [i_4] [i_4 + 1] = ((/* implicit */_Bool) var_3);
                        }
                        var_40 += ((/* implicit */_Bool) min((5951923644243488077ULL), (((/* implicit */unsigned long long int) 576036962U))));
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2512944U)), (var_16)));
                            var_42 = ((/* implicit */signed char) var_4);
                            var_43 &= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (+(2850568446U)))), (min((((/* implicit */unsigned long long int) arr_16 [i_12])), (arr_22 [i_4] [(_Bool)1] [i_7] [i_8] [4LL]))))) + (arr_21 [i_4])));
                            arr_34 [i_4] = ((/* implicit */unsigned char) max(((short)-2193), (((/* implicit */short) (unsigned char)58))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2301972687U)) | (17326327016733573399ULL)));
                            var_45 = ((/* implicit */unsigned short) (-((~(490512365U)))));
                        }
                        var_46 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_4 - 1])) ? ((~(arr_22 [i_4] [i_6] [i_7] [i_8] [(_Bool)1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15805))) | (arr_17 [i_6] [i_6]))))));
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_29 [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (arr_29 [i_4 + 1] [i_4] [6ULL] [i_4 + 1] [i_4 + 2] [i_4 + 2]))))) : (min((((/* implicit */unsigned long long int) var_8)), (arr_29 [i_4 + 1] [14ULL] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2])))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (((arr_16 [i_4 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_26 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1])))));
            var_49 = ((/* implicit */unsigned int) arr_19 [i_4 - 1]);
        }
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            arr_40 [i_14] [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)55513)))), (((((/* implicit */int) (unsigned short)25582)) + (((/* implicit */int) (unsigned char)166))))))), (((((/* implicit */_Bool) arr_36 [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)55564), (var_17))))) : (var_5)))));
            var_50 = ((/* implicit */unsigned short) (((-(arr_29 [i_4] [12U] [i_4] [12U] [12U] [4U]))) - (((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_4 - 1])))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                for (long long int i_16 = 2; i_16 < 14; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            arr_52 [i_14] [i_16] [i_17] = ((/* implicit */unsigned short) (+((+(min((var_5), (((/* implicit */unsigned long long int) arr_10 [i_16] [i_17]))))))));
                            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)188)), (var_6)))) ? (((/* implicit */int) arr_23 [i_4 + 1] [i_15] [i_16 + 2] [i_16 + 3] [i_17] [16LL] [i_17])) : (((/* implicit */int) ((unsigned short) 2533461540U))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 4 */
        for (unsigned int i_18 = 1; i_18 < 16; i_18 += 1) 
        {
            var_52 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_38 [i_18])) ? (5951923644243488093ULL) : (((/* implicit */unsigned long long int) -1293758424)))), (((/* implicit */unsigned long long int) var_10)))) << (((((/* implicit */int) max(((unsigned short)12350), (((/* implicit */unsigned short) (_Bool)1))))) - (12293)))));
            var_53 |= min(((-(2472678967U))), (((/* implicit */unsigned int) var_3)));
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_54 = ((/* implicit */unsigned int) var_1);
                arr_57 [14U] [i_19] = ((/* implicit */unsigned short) var_8);
            }
            for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
                {
                    var_55 = max((min((var_5), (((/* implicit */unsigned long long int) arr_59 [i_18 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2])))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_10 [3ULL] [i_18])))));
                    var_56 += ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 1])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 3988842006477776435LL)))))))));
                    var_57 &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_11 [i_4 + 2]))))));
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) (-(96628379)))) ? (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) arr_24 [i_4 + 1] [i_4 + 1] [i_4 + 2] [(_Bool)1]))))) : ((-(((((/* implicit */int) (unsigned char)198)) >> (((2732733559U) - (2732733545U)))))))));
                }
                for (long long int i_22 = 0; i_22 < 18; i_22 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned int) min((((/* implicit */int) var_14)), ((+((+(((/* implicit */int) arr_39 [(unsigned char)13]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        arr_70 [i_23] [10ULL] [(unsigned char)12] [i_22] [i_20] [i_23] [i_23] = ((/* implicit */unsigned short) var_4);
                        arr_71 [i_4 - 1] [(unsigned short)14] [i_23] [i_23] [i_4 - 1] = ((/* implicit */unsigned short) 18135667491533227634ULL);
                    }
                    var_60 = ((/* implicit */_Bool) min((((/* implicit */int) (short)26666)), (((((18446744073709551605ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_56 [i_20] [i_4 + 1])) : (((/* implicit */int) arr_49 [8]))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    var_61 = ((/* implicit */short) ((max((arr_47 [i_4 + 2] [i_18 + 2] [i_18 + 1] [i_18 + 2]), (arr_47 [i_4 + 2] [i_18 - 1] [i_18 + 1] [i_18 + 1]))) ? (((((/* implicit */int) arr_47 [i_4 - 1] [i_18 - 1] [i_18 + 2] [i_18 + 2])) & (((/* implicit */int) arr_47 [i_4 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])))) : (((/* implicit */int) arr_47 [i_4 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
                    var_62 = ((/* implicit */int) min((arr_67 [i_4] [(_Bool)0]), (((/* implicit */unsigned long long int) (+(min((730991092U), (((/* implicit */unsigned int) var_13)))))))));
                    var_63 |= ((/* implicit */short) max((arr_47 [i_4] [i_18] [(unsigned short)15] [16ULL]), (((1196615928U) != (((unsigned int) arr_51 [1ULL] [i_18 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_20] [i_20])) ? (1822288329U) : (1822288329U)))) ? (((((/* implicit */int) var_4)) << (((-4868378458502554723LL) + (4868378458502554741LL))))) : (((/* implicit */int) arr_36 [11ULL] [i_18] [(unsigned short)13] [i_24] [i_25] [i_25])))))));
                        var_65 = ((/* implicit */unsigned int) var_14);
                    }
                    for (short i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        var_66 ^= ((/* implicit */signed char) max((2472678967U), (3016893061U)));
                        arr_81 [(_Bool)0] [i_18] [i_24] [i_24] [(_Bool)1] = ((/* implicit */unsigned int) ((var_12) > (arr_66 [i_26] [(_Bool)1] [13ULL] [i_18] [i_4])));
                        var_67 = ((/* implicit */signed char) min((var_67), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_26 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_26 [(_Bool)1] [i_18 + 1] [i_20] [i_20] [i_26])) : (var_5)))))));
                    }
                }
            }
        }
        for (unsigned char i_27 = 0; i_27 < 18; i_27 += 4) 
        {
            var_68 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_27] [(unsigned short)12]))) & (((15457593991213970236ULL) & (((/* implicit */unsigned long long int) 2472678967U))))))));
            arr_84 [i_27] = ((/* implicit */unsigned short) (+(min((2580539645U), (((/* implicit */unsigned int) arr_18 [i_4] [i_27] [i_4]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_28 = 0; i_28 < 18; i_28 += 1) 
            {
                var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4 + 1])) ? (arr_19 [i_28]) : (arr_19 [i_27])));
                /* LoopNest 2 */
                for (long long int i_29 = 0; i_29 < 18; i_29 += 4) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_70 = ((/* implicit */unsigned int) arr_76 [i_28] [i_29] [i_28] [i_27] [i_27] [i_27] [i_4 + 2]);
                            var_71 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_60 [i_4 + 1] [i_4 + 1])) == (((/* implicit */int) arr_60 [i_4 + 1] [i_4 + 1]))));
                        }
                    } 
                } 
                var_72 = ((/* implicit */unsigned int) min((var_72), (((/* implicit */unsigned int) arr_73 [i_27]))));
            }
            var_73 += ((/* implicit */signed char) ((((/* implicit */_Bool) 13491901643519418927ULL)) ? (((/* implicit */unsigned int) -96628386)) : (774481100U)));
        }
        for (unsigned long long int i_31 = 1; i_31 < 16; i_31 += 4) /* same iter space */
        {
            var_74 = ((/* implicit */int) min((((((/* implicit */unsigned int) (-(var_3)))) + (var_12))), (((/* implicit */unsigned int) var_13))));
            var_75 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_45 [i_31])))) ? (((/* implicit */unsigned long long int) (~((~(185531590U)))))) : (var_16)));
            var_76 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((arr_50 [i_31] [i_4 + 1] [i_4] [i_4] [(_Bool)1] [(unsigned char)11]), (arr_90 [i_4] [i_31] [i_31] [i_4])))) && (((/* implicit */_Bool) arr_45 [i_31])))))));
            arr_98 [i_4] [i_4] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26855)) ? (1682994527U) : (arr_33 [i_4] [i_4] [i_31 + 2] [i_31 + 1] [(_Bool)0])))) ? (min((2580539645U), (((/* implicit */unsigned int) arr_14 [(unsigned char)9] [i_4] [i_31])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -96628380)) > (-7248878344523123794LL))))))), (((/* implicit */unsigned int) (unsigned short)53195)));
        }
        for (unsigned long long int i_32 = 1; i_32 < 16; i_32 += 4) /* same iter space */
        {
            var_77 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_14))))));
            var_78 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((arr_96 [i_4]) ? (192797772875452702ULL) : (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) 8999179715117390958LL)))))));
        }
    }
}
