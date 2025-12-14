/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170111
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
    var_16 ^= ((/* implicit */short) (+(min((((unsigned int) var_10)), (((/* implicit */unsigned int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((_Bool) arr_0 [i_0])))) + (((/* implicit */int) arr_4 [i_1] [i_1] [(short)9]))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_0]);
                            var_19 = ((/* implicit */unsigned long long int) -115613832);
                            var_20 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)10)), (-8020537453032337027LL)));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) (+(var_0)));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_17 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */int) arr_6 [i_0] [(unsigned short)5] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_22 = arr_10 [i_1] [i_1] [3] [i_1];
                            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7] [i_0] [i_7])) || (((/* implicit */_Bool) var_5)))))) != (((((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_13 [(_Bool)1] [1ULL] [i_0] [i_0]))) ^ (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (arr_21 [i_5] [i_5] [i_5] [i_1] [(unsigned char)2]) : (arr_21 [i_7] [i_1] [i_0] [i_1] [i_0])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) 18446744073709551597ULL);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 7; i_9 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) arr_26 [i_0]))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0])))))));
                            arr_28 [i_5] [(signed char)1] [i_5] [i_5] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) arr_14 [i_0] [(unsigned short)0] [(unsigned short)0]);
                        }
                    } 
                } 
                var_28 -= ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0])) : (((/* implicit */int) arr_27 [i_1] [(unsigned char)2] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (min((8ULL), (10ULL))))));
            }
        }
        for (short i_10 = 2; i_10 < 7; i_10 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_12))));
            var_30 -= ((/* implicit */signed char) ((((/* implicit */int) max((arr_31 [i_10 - 2] [i_10 - 2] [i_10 + 2]), (arr_31 [i_10 + 2] [i_10] [i_10 + 1])))) / (((/* implicit */int) min((arr_31 [i_10 + 3] [i_10] [i_10 + 2]), (((/* implicit */unsigned short) (_Bool)1)))))));
            var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_10 - 1]))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) 7790212595738900930LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)15949))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) (-(min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)193))))));
                            var_34 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0] [i_13 - 1] [i_13 - 1] [i_0] [3ULL] [i_13]))));
                            var_35 = ((/* implicit */unsigned short) arr_0 [i_0]);
                            arr_41 [i_13] [i_10] [i_11] [i_0] [i_0] [i_10] [i_0] |= ((/* implicit */unsigned int) ((short) 18446744073709551597ULL));
                        }
                        var_36 *= ((/* implicit */_Bool) (signed char)29);
                    }
                } 
            } 
        }
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)154))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (8020537453032337027LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_14] [i_14] [6ULL] [i_14] [i_14]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)1)), (35ULL)))) ? (((((/* implicit */int) (signed char)-69)) % (((/* implicit */int) arr_43 [i_14])))) : (((/* implicit */int) max(((signed char)-11), ((signed char)29)))))))));
            arr_46 [i_14] [i_14] = ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_30 [i_0] [4] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_30 [i_0] [9] [6]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_7)))))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        arr_54 [i_0] [(short)0] [(unsigned short)2] [i_0] [(short)0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((arr_42 [i_0] [i_0]), (var_2))))) ? (((/* implicit */int) var_5)) : ((-(var_6)))));
                        var_38 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (min((arr_49 [(_Bool)1] [i_15] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)-3692)))) : (min((((/* implicit */unsigned long long int) var_15)), (arr_6 [i_14] [i_14] [i_14]))))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_51 [i_16] [(_Bool)1] [i_15])), (min((((/* implicit */unsigned long long int) ((short) arr_47 [i_0] [(short)0] [7] [(short)0]))), (17114554405557915121ULL))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_17 = 1; i_17 < 8; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                {
                    var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)149)))) * (min((((arr_30 [i_18] [i_18] [i_18]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)4] [i_18 - 1] [i_18 - 1]))))));
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) var_5))));
                    var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0] [i_18 + 1] [i_17 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2780))) : (((unsigned int) arr_19 [i_0] [i_17] [i_0] [i_18] [1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) arr_27 [(short)0] [7] [i_18] [i_0] [i_18] [i_18] [(short)0])), (var_11))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_38 [6ULL] [i_0] [i_18] [i_18 + 1])) ? (((/* implicit */int) arr_23 [i_17])) : (((/* implicit */int) var_12))))));
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) var_2))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                {
                    arr_65 [i_0] [i_0] [i_20] = arr_5 [i_0] [i_19] [i_0];
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 3; i_21 < 9; i_21 += 4) 
                    {
                        for (short i_22 = 0; i_22 < 10; i_22 += 3) 
                        {
                            {
                                var_44 -= ((/* implicit */unsigned long long int) var_15);
                                var_45 = min((((/* implicit */unsigned short) (unsigned char)165)), (min((((/* implicit */unsigned short) (short)15847)), (var_15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
    {
        var_46 ^= (!(((/* implicit */_Bool) arr_75 [i_23])));
        /* LoopNest 2 */
        for (short i_24 = 2; i_24 < 11; i_24 += 1) 
        {
            for (int i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                {
                    var_47 -= ((/* implicit */_Bool) ((var_14) ? ((-(((/* implicit */int) (signed char)-30)))) : ((-(((/* implicit */int) (short)(-32767 - 1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_14)))));
                                var_49 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_81 [(unsigned short)11] [i_24 + 2])) ? (((/* implicit */int) arr_81 [12LL] [i_24 + 2])) : (((/* implicit */int) arr_81 [i_24] [i_24 - 1]))));
                            }
                        } 
                    } 
                    var_50 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_24 + 1] [i_24 + 3] [(signed char)1] [i_24 - 1] [i_24 + 3])) ? (((/* implicit */unsigned int) (+(2113060728)))) : (arr_85 [i_23] [i_24 + 3] [i_25] [i_24 - 1] [i_24 + 3] [i_25])));
                    /* LoopNest 2 */
                    for (short i_28 = 1; i_28 < 13; i_28 += 1) 
                    {
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            {
                                arr_94 [i_23] [i_24] [i_24] [i_23] = (+(-2088160172));
                                arr_95 [i_23] [i_24] [i_23] [i_23] [1U] = ((/* implicit */int) (~(17114554405557915115ULL)));
                            }
                        } 
                    } 
                    var_51 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 9ULL)))) ? (((/* implicit */unsigned long long int) -457495872)) : (((((/* implicit */_Bool) arr_81 [i_23] [5])) ? (12108948011831248678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))));
                }
            } 
        } 
    }
    for (unsigned short i_30 = 2; i_30 < 17; i_30 += 2) 
    {
        var_52 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -205344371436449563LL)) ? (16838525088228742709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_96 [10])) ? (6337796061878302932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [3ULL] [i_30]))))))))) : (((/* implicit */int) ((_Bool) max((var_0), (((/* implicit */unsigned int) (short)-3688))))))));
        var_53 ^= ((/* implicit */unsigned short) min(((short)3688), (((/* implicit */short) arr_96 [i_30 - 1]))));
        /* LoopNest 2 */
        for (long long int i_31 = 0; i_31 < 20; i_31 += 1) 
        {
            for (int i_32 = 0; i_32 < 20; i_32 += 1) 
            {
                {
                    var_54 = ((/* implicit */unsigned char) arr_98 [i_31]);
                    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (457495862)))) <= (((unsigned int) arr_99 [i_30])))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), (((short) arr_98 [(short)17]))))) : (((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_33 = 0; i_33 < 20; i_33 += 1) 
                    {
                        for (signed char i_34 = 1; i_34 < 19; i_34 += 1) 
                        {
                            {
                                var_56 = ((((/* implicit */_Bool) (short)-147)) ? (2147483647) : (((/* implicit */int) min((arr_96 [i_31]), (((/* implicit */signed char) var_2))))));
                                var_57 = ((/* implicit */short) (+(((/* implicit */int) arr_102 [i_34] [i_33] [i_30]))));
                            }
                        } 
                    } 
                    var_58 -= ((/* implicit */signed char) ((unsigned short) arr_107 [i_30] [i_30 + 3] [i_30 - 2]));
                }
            } 
        } 
    }
}
