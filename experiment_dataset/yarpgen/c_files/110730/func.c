/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110730
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
    var_19 = ((/* implicit */short) ((1152921435887370240LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25701)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */long long int) (((!(var_8))) || (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_8)))))))), (var_1)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        arr_8 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & ((-(arr_3 [i_3 - 1] [i_3] [i_2 - 1]))))))));
                        arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                    }
                    var_22 |= ((/* implicit */short) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) || (arr_0 [i_1] [i_0])))))));
                    var_23 = ((/* implicit */unsigned char) min((min((max((arr_3 [3LL] [i_1] [i_0]), (((/* implicit */long long int) arr_0 [3] [3])))), (((/* implicit */long long int) (!(arr_0 [i_0] [i_0])))))), (((min((var_9), (arr_3 [(short)8] [(short)3] [(short)3]))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)25708), ((unsigned short)38506)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (((~(var_14))) << ((((~(var_12))) - (3669304580U)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned short)57360), (((/* implicit */unsigned short) (short)12510)))))));
                        var_26 &= ((/* implicit */short) (-(((arr_15 [(short)1] [i_5] [i_4]) - (arr_15 [i_4] [6LL] [i_7])))));
                    }
                } 
            } 
        } 
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) var_0)), (var_2)))), (max(((short)-12506), ((short)12510)))))) < (((/* implicit */int) (((!(arr_18 [i_4] [(short)11] [i_4]))) || (((((/* implicit */_Bool) var_13)) && (arr_18 [i_4] [i_4] [i_4]))))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 4; i_8 < 10; i_8 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                arr_28 [i_4] [i_4] [i_4] = var_2;
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_11] [i_10] [i_8 - 1] [i_4])))))));
                            arr_34 [i_4] [i_4] [i_4] [i_4] [i_11] = ((/* implicit */_Bool) (~(arr_29 [i_8 + 1] [(_Bool)1] [i_8 + 1] [i_4])));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) arr_26 [i_4] [(unsigned short)10]);
                /* LoopSeq 1 */
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    var_29 = ((/* implicit */int) arr_18 [i_12] [11LL] [i_4]);
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_40 [i_4] [(_Bool)0] [(_Bool)0] [i_12] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8 + 1]))));
                        arr_41 [i_12 + 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_33 [(unsigned char)0] [i_8 + 1] [i_9] [i_12 + 1] [i_8 + 1]))));
                    }
                    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_12] [i_12] [i_12 + 1] [i_12 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_31 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_44 [(unsigned char)8] [i_8 - 1] [i_9] [i_9] [i_14] [i_12 - 1]))));
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [(_Bool)1] [i_8 - 3] [i_8] [i_8 - 3] [(_Bool)1]))));
                        arr_45 [i_4] [i_8] [i_9] [i_12 + 1] = ((/* implicit */signed char) arr_13 [i_4]);
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        var_33 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_12 + 1] [i_8 - 4]))));
                        arr_49 [i_4] [i_8 + 2] [i_9] [2LL] [5LL] = arr_26 [i_4] [i_4];
                        arr_50 [i_4] [i_4] [i_9] [i_12] [i_9] [6] |= ((/* implicit */short) arr_11 [(unsigned short)8] [i_8 - 4]);
                    }
                    arr_51 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_8 - 4] [i_8] [i_4] [i_4]))));
                }
            }
            for (int i_16 = 2; i_16 < 9; i_16 += 2) 
            {
                arr_56 [i_16] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_16 - 2] [i_8] [i_16 - 1] [i_8] [i_8] [i_4])) + (((((/* implicit */int) arr_10 [i_4] [i_4])) + (((/* implicit */int) var_16))))));
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (+(max((((/* implicit */int) (short)-1681)), ((-(((/* implicit */int) (short)10254)))))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */int) arr_52 [i_18]);
                            arr_64 [(_Bool)1] [i_4] = (+((+(var_9))));
                            var_36 |= ((/* implicit */short) (-((+(var_5)))));
                        }
                        /* LoopSeq 3 */
                        for (int i_20 = 1; i_20 < 11; i_20 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_57 [i_4]))));
                            arr_68 [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31808))) | (1321225760U)))), (((var_17) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned long long int) var_15)), (arr_35 [i_17] [i_8] [(_Bool)1] [i_18])))));
                            arr_69 [(unsigned short)10] [(unsigned short)10] [i_4] = ((/* implicit */short) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_4]))) | (var_9))), (((/* implicit */long long int) arr_38 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8] [i_8 + 2] [i_8 - 3] [i_8 - 3])))) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_38 -= ((/* implicit */unsigned int) min(((short)12507), ((short)-12511)));
                            var_39 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39988)))))));
                            var_40 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_18])) >= (((/* implicit */int) var_6))))), (max((var_16), (((/* implicit */unsigned short) arr_65 [i_4]))))))) - (33943)))));
                            arr_72 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_71 [i_4] [i_8] [i_8] [i_4] [(_Bool)1] [i_21]);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_76 [i_22] [7U] [i_4] [i_18] [i_4] [7U] [8U] = ((/* implicit */unsigned int) var_11);
                            var_41 = min((max((arr_47 [i_8 - 2] [i_17] [i_8 - 2] [i_17] [i_17] [(_Bool)1]), (arr_47 [i_8 - 4] [i_8 - 4] [i_8 - 4] [i_17] [i_8 - 4] [i_18]))), (((/* implicit */long long int) max(((short)-11419), (((/* implicit */short) (_Bool)1))))));
                        }
                        arr_77 [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((arr_30 [0U] [0U] [(signed char)7] [i_8 + 2] [(signed char)7] [0U]), (var_7)))), (arr_17 [i_4] [i_8] [3] [7ULL])));
                    }
                } 
            } 
        }
    }
    for (int i_23 = 0; i_23 < 25; i_23 += 1) 
    {
        var_42 = ((/* implicit */unsigned char) (-((-(max((arr_79 [i_23]), (((/* implicit */int) var_10))))))));
        /* LoopNest 3 */
        for (int i_24 = 3; i_24 < 23; i_24 += 4) 
        {
            for (int i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 25; i_26 += 4) 
                {
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max(((~((+(5094360038117369150ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)202)), ((unsigned short)1784)))), (((((/* implicit */int) (short)-23387)) + (((/* implicit */int) (unsigned char)188))))))))))));
                        var_44 = arr_85 [i_24 + 1] [i_25] [(short)11];
                        arr_88 [(unsigned short)23] [i_23] [(_Bool)1] [i_25] [(unsigned char)12] = min((((/* implicit */long long int) (+(((/* implicit */int) (short)31802))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_78 [i_26]))))), (min((((/* implicit */long long int) arr_85 [i_25] [i_25] [i_25])), (arr_78 [(short)6]))))));
                    }
                } 
            } 
        } 
        arr_89 [i_23] [i_23] = (i_23 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((arr_80 [i_23]) + (8114998146435398920LL)))))) / (min((arr_80 [i_23]), (((/* implicit */long long int) var_14))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((arr_80 [i_23]) + (8114998146435398920LL))) - (5350836614211171652LL)))))) / (min((arr_80 [i_23]), (((/* implicit */long long int) var_14)))))));
    }
    var_45 |= (!(var_8));
}
