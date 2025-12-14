/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180679
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = min((var_11), (((((/* implicit */_Bool) var_8)) ? (min((1152921504606846975ULL), (10250990859218386584ULL))) : (13835058055282163712ULL))));
        var_21 = min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10250990859218386577ULL))))), (((((/* implicit */_Bool) 8195753214491165031ULL)) ? (17293822569102704616ULL) : (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_22 = (-(2251799813685247ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (min(((-(((((/* implicit */_Bool) var_12)) ? (13880862229300449487ULL) : (var_1))))), (((10250990859218386567ULL) << ((((-(18009446295188997095ULL))) - (437297778520554474ULL)))))))));
                arr_12 [i_1] [i_1] [i_2] = var_3;
            }
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((var_13) - (((min((18446744073709551615ULL), (17592186044415ULL))) ^ (max((var_5), (arr_5 [i_1 + 1] [i_1 + 1])))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_25 = ((((/* implicit */_Bool) (+(arr_7 [i_1 - 1] [i_4])))) ? (8038017292240554540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10250990859218386559ULL)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_26 = min((((unsigned long long int) arr_3 [i_4])), ((+(15690901074619925217ULL))));
                            var_27 = arr_1 [i_4];
                            var_28 = ((unsigned long long int) (!((!(((/* implicit */_Bool) 17944029765304320ULL))))));
                            arr_25 [i_7] [i_4] [i_4] [i_4] [i_4] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_29 ^= (-(((unsigned long long int) ((0ULL) * (var_11)))));
                var_30 = ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 5872844631021425689ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))) : (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 7862136743426583456ULL))))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                arr_31 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                var_31 = (i_4 % 2 == zero) ? (((var_12) << (((((arr_7 [i_1 - 2] [i_4]) * (8195753214491165038ULL))) - (17854415128936281042ULL))))) : (((var_12) << (((((((arr_7 [i_1 - 2] [i_4]) * (8195753214491165038ULL))) - (17854415128936281042ULL))) - (2061385544499860152ULL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((var_0) % ((+(var_8)))))));
                        var_33 = ((/* implicit */unsigned long long int) (!(((var_11) < (arr_6 [i_4])))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        arr_43 [i_1] [i_4] [i_4] [i_1] [i_12] [i_12] = ((unsigned long long int) (((~(var_11))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551586ULL)))))));
                        var_34 = 4862128506092668429ULL;
                        var_35 = min((((unsigned long long int) 18446744073709551612ULL)), (((((/* implicit */_Bool) min((var_8), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 28ULL)))))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (var_14))))));
                        var_36 = (-(((var_15) + (18446744073709551615ULL))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        arr_46 [i_4] [i_4] [i_13] [i_10] [i_4] [i_4] [i_9] = max(((~(10250990859218386541ULL))), (min((18446744073709551613ULL), (468986595925121096ULL))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551602ULL) : (var_7))))))) >= (((/* implicit */int) ((((unsigned long long int) 18374686479671623680ULL)) > (arr_7 [i_1 + 2] [i_4]))))));
                        arr_47 [i_4] = ((max((arr_16 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]), (arr_10 [i_1 - 1] [i_1 - 2] [i_4]))) - (arr_16 [i_1] [i_1 - 2] [i_1 + 2] [i_13]));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) 517055310610698434ULL))))));
                        var_39 = ((((/* implicit */_Bool) 13110098032653873257ULL)) ? (18446744073709551614ULL) : (1ULL));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        arr_52 [i_9] &= 17032753269454289513ULL;
                        var_40 ^= ((unsigned long long int) ((unsigned long long int) 140703128616960ULL));
                        var_41 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(arr_15 [i_1 + 2] [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_0)))))))));
                    }
                    var_42 = var_0;
                    arr_53 [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_1 + 1] = (((!(((/* implicit */_Bool) var_2)))) ? (((unsigned long long int) (!(((/* implicit */_Bool) 5636001542574047838ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446603370580934656ULL)))))) ^ (((((/* implicit */_Bool) 15664564899378897265ULL)) ? (14278484991573898608ULL) : (4168259082135653003ULL))))));
                }
                for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 2) 
                {
                    arr_56 [i_4] [i_4] [i_4] [i_4] = max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))));
                    var_43 = var_9;
                    arr_57 [i_1] [i_4] [i_9] [i_1] = ((unsigned long long int) 15303711175011087866ULL);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_48 [i_15 + 1] [i_1 - 2] [i_15 + 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 3]))))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (arr_5 [i_4] [i_9])));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 3) 
                    {
                        var_46 = min((((((/* implicit */_Bool) (+(var_3)))) ? ((+(15303711175011087842ULL))) : ((+(18446744073709551614ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_1 + 1] [i_4]))))));
                        var_47 *= ((unsigned long long int) min((arr_16 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2]), (4168259082135653007ULL)));
                        var_48 = var_19;
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        var_49 = min((18446744073709551607ULL), (18446744073709551612ULL));
                        arr_67 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] = var_15;
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 3) 
                    {
                        arr_71 [i_4] [i_9] [i_4] [i_4] = (-(var_15));
                        var_50 = ((unsigned long long int) arr_63 [i_19 - 1] [i_1 + 3] [i_1 + 3]);
                        var_51 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (31525197391593472ULL) : (var_16)))))))));
                    }
                }
            }
            var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (8195753214491165019ULL))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        {
                            arr_85 [i_21] = ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) ((var_2) | (var_18)))) : (((min((var_18), (var_6))) >> (((((unsigned long long int) arr_29 [i_1 - 2] [i_23])) - (10594078723865623670ULL))))));
                            var_53 = ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                            var_54 = (+(8261666897671255381ULL));
                            var_55 = ((/* implicit */unsigned long long int) min((var_55), (((((/* implicit */_Bool) arr_75 [i_1] [i_22] [i_1])) ? (arr_10 [i_23] [i_1] [i_23]) : (((((/* implicit */_Bool) 148794617134202950ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1ULL) < (arr_7 [i_22] [i_22]))))) : (max((15414783437203861163ULL), (2305702271725338624ULL)))))))));
                            var_56 = (-(1055550098349726902ULL));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */unsigned long long int) max((var_57), (((unsigned long long int) min((var_10), (var_0))))));
        }
    }
    var_58 = 0ULL;
    var_59 = ((/* implicit */unsigned long long int) ((max((var_17), (var_11))) != (var_0)));
    var_60 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_9))))));
    var_61 = 268435455ULL;
}
