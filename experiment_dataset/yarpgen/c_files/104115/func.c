/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104115
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
    var_12 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (min((var_9), (((/* implicit */unsigned long long int) 262143)))) : (((/* implicit */unsigned long long int) min((831492860U), (((/* implicit */unsigned int) (signed char)50))))))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_2))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (min((((/* implicit */unsigned int) var_1)), (arr_3 [i_1])))));
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(arr_3 [i_0])))), ((((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (arr_0 [i_0])))) : (arr_4 [i_1] [i_0])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((3463474455U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((unsigned int) arr_5 [i_2] [i_0])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (3463474435U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1]))))))), (((/* implicit */unsigned int) arr_0 [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255)))))));
                        var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)237))))) + (min((831492860U), (((/* implicit */unsigned int) var_6))))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) * (3901504563U)))), (min((arr_10 [8LL]), (((/* implicit */long long int) (unsigned char)12))))))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_17 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [(unsigned char)6])) && (((/* implicit */_Bool) (short)28515)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32747)) && (((/* implicit */_Bool) var_2)))))) : (min((arr_10 [i_4]), (((/* implicit */long long int) 1597894895))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_10 [i_2])))) ? (((((/* implicit */_Bool) (short)6797)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [5ULL]))) : (arr_3 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) 1073741792)), (831492860U))))))))))));
                        arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29431)) ? (((((/* implicit */_Bool) -1597894896)) ? (((/* implicit */int) arr_8 [11U] [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((int) var_0))))) ? (((/* implicit */int) min((arr_7 [i_0] [i_0] [(unsigned short)2]), (arr_7 [i_1] [i_1] [i_1])))) : (min((((1597894904) / (((/* implicit */int) var_2)))), ((~(arr_0 [i_0])))))));
                        arr_15 [i_2] [i_2] [i_2] [9] = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) ? (((/* implicit */int) arr_7 [(signed char)0] [i_2] [i_4])) : ((-(((var_10) - (((/* implicit */int) arr_13 [i_4]))))))));
                    }
                }
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((621129554U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)0] [i_1] [i_1] [1LL]))))), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_0] [5] [5] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)10])) - (86)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3463474464U))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)28515))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) arr_18 [i_5 - 2])) ? (((/* implicit */int) arr_17 [i_5])) : (-1597894896)))))) : (((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 1]))) : (var_9))))))));
        arr_19 [i_5 - 1] = ((/* implicit */int) min(((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2373))) : (var_8))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_17 [i_5])))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_27 [i_9] [i_7] [i_7] [i_6])), (((((/* implicit */_Bool) var_3)) ? (268427264U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9] [(unsigned short)0] [i_9] [(unsigned short)2] [i_6])))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_9] [(unsigned char)6] [(signed char)15] [(unsigned char)6]))))) ? (((var_9) >> (((((/* implicit */int) (unsigned char)237)) - (191))))) : (var_9)))));
                        var_21 ^= ((/* implicit */short) (((((!(((/* implicit */_Bool) (short)1)))) && (((/* implicit */_Bool) arr_25 [(unsigned short)6] [15U] [i_6])))) && (((((((/* implicit */_Bool) (signed char)-119)) || (((/* implicit */_Bool) arr_17 [i_6])))) && (((((/* implicit */_Bool) 1597894896)) && (((/* implicit */_Bool) (short)-5839))))))));
                        arr_32 [i_6] = ((/* implicit */short) min((max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */int) arr_20 [(unsigned short)18])) | (((/* implicit */int) arr_17 [i_6])))))), (((/* implicit */int) arr_22 [i_6]))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [(short)10]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [(signed char)4] [(signed char)4] [i_7] [i_6] [i_7]))) + (120198560U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28515)))))) ? ((-(((/* implicit */int) arr_17 [i_6])))) : (((((/* implicit */_Bool) min((621129561U), (((/* implicit */unsigned int) (signed char)120))))) ? ((-(((/* implicit */int) var_3)))) : (-427295744))))))));
                        var_23 += ((/* implicit */unsigned int) (+((+(-1597894914)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [(unsigned short)6] [(unsigned short)16] [i_6]))) * (3463474435U)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((1597894895) + (((/* implicit */int) arr_25 [i_6] [(unsigned char)0] [i_7]))))))) != (((((/* implicit */_Bool) (-(-1597894897)))) ? (((/* implicit */long long int) ((3463474435U) >> (((var_4) - (1716879158)))))) : (((long long int) arr_24 [i_6] [i_6] [i_6]))))));
            var_25 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [9U] [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3463474437U))))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6])) >= (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_7] [i_7] [i_6] [i_6] [i_6] [i_6])) > (arr_21 [i_6] [i_6])))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_30 [i_7] [i_7] [6LL] [i_6] [i_6] [i_7])), (var_11)))))));
            arr_33 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_11)))))) - (65451)))));
            var_26 *= ((/* implicit */short) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        }
        for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
        {
            arr_38 [i_6] [(_Bool)0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_6] [i_10 + 4]))) : (621129571U))))) ? (((/* implicit */long long int) min((min((139587056U), (((/* implicit */unsigned int) arr_30 [(short)3] [7LL] [i_10] [i_10 - 1] [i_10 + 4] [i_6])))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) : (min((((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_23 [i_6] [6U] [i_10 + 2]) - (16914492583653160756ULL)))))), (((((/* implicit */_Bool) (unsigned short)36801)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-3903989746908194034LL)))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_31 [i_10] [(unsigned char)0] [15ULL] [i_10 - 1] [i_10 + 1] [(signed char)5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_10] [i_10 + 4] [i_10 - 1] [i_10 + 3] [i_10] [i_10 + 2])) && (((/* implicit */_Bool) arr_31 [i_10] [i_10] [(short)10] [i_10 + 1] [i_10] [(short)6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10 + 4] [i_10] [i_10] [i_10 + 2] [i_10] [i_10]))))))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_28 = 0ULL;
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_12] [i_12] [i_14] [i_14])))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (+(var_9))))));
            arr_51 [(unsigned char)14] [(unsigned char)14] |= ((/* implicit */unsigned long long int) ((arr_37 [(short)6]) >> (((((/* implicit */int) arr_18 [i_11 - 3])) + (29331)))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57344)) - (((/* implicit */int) (unsigned short)14907))))) : (16510385149573860416ULL)));
        }
        arr_52 [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1597894918)) ? (577078633U) : (((/* implicit */unsigned int) -1597894896))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_47 [i_6])))) : (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) / (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)255)) + (-1597894901))), (1384233159)))));
    }
    for (unsigned int i_15 = 1; i_15 < 18; i_15 += 4) 
    {
        var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (short)32285)))))), (var_9)));
        /* LoopSeq 1 */
        for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (3673837734U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? ((-(((/* implicit */int) (short)32748)))) : (1597894895)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_15])) == (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) (short)27393)), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_15])) ? (((/* implicit */int) var_0)) : (var_10))))));
                arr_61 [i_15] [i_15 - 1] = ((/* implicit */unsigned char) arr_36 [i_15] [i_17]);
                var_34 = ((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_30 [i_15] [i_16] [(short)2] [(short)4] [i_17] [i_15]))));
            }
            /* LoopSeq 2 */
            for (short i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    for (unsigned char i_20 = 1; i_20 < 18; i_20 += 4) 
                    {
                        {
                            arr_72 [i_16] [i_16] [i_16] [i_15] [i_16] = ((/* implicit */unsigned char) (-(arr_31 [(short)12] [i_16] [i_18] [i_18] [i_19] [i_20])));
                            arr_73 [i_15] [i_19] [(_Bool)1] [i_16] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-21348))));
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) arr_68 [i_18] [i_19] [i_18] [i_20])) ? (arr_66 [i_15] [i_15] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))))));
                            var_36 *= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_50 [i_20] [i_18] [i_18] [i_18] [i_15 + 1])) % (((/* implicit */int) var_7)))) != (1597894895))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32752))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_67 [i_15] [i_15 + 1] [i_15] [i_15 - 1]))));
                            arr_74 [(unsigned char)7] [i_15] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_65 [i_19] [i_16] [i_18] [13U])))))) : (3649036220U)))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-16)), (621129561U))))))));
                        }
                    } 
                } 
                arr_75 [i_18] [i_18] |= (!(((((/* implicit */int) arr_65 [i_16] [i_18] [i_16] [i_15 + 1])) == (((/* implicit */int) var_11)))));
            }
            for (signed char i_21 = 2; i_21 < 18; i_21 += 2) 
            {
                arr_79 [i_15] [i_15] [i_15] [i_21 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_59 [i_21 - 1] [i_21 - 1] [i_15 - 1] [i_15 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -1311935588)))) : (((((/* implicit */_Bool) arr_42 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_40 [i_15] [i_15])))));
                arr_80 [i_21] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1363538680151961710LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8))), (((/* implicit */unsigned long long int) arr_48 [i_15] [(short)4] [i_15] [i_16] [i_21 - 2] [i_16]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_15 - 1])) ? (((var_0) ? (645931085U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) -1597894895)) : (536870880U)))))) : (max((arr_23 [i_15] [i_15 + 1] [i_15]), (arr_23 [i_15] [i_15 + 1] [i_15])))));
            }
            arr_81 [i_15] [i_15] = 1597894895;
            var_37 *= ((/* implicit */long long int) var_5);
        }
    }
    var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_6)) ? (3463474435U) : (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (-4693211656703547771LL))))))));
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)61176)))), (max((var_9), (var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (var_4)))) ? (((/* implicit */int) max((var_0), (var_5)))) : (((/* implicit */int) var_1))))) : ((((_Bool)0) ? (3463474435U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))));
}
