/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164045
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
    var_16 += ((/* implicit */_Bool) min((3180555414107940538LL), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_1 [i_1]) < (arr_1 [i_1])))))))));
                var_18 += ((/* implicit */unsigned short) max(((signed char)-54), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (long long int i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_3 - 2])) > (((/* implicit */int) arr_8 [i_4] [i_3] [i_2]))))))), (((/* implicit */int) (unsigned char)79))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((_Bool) max(((+(var_12))), (((/* implicit */long long int) arr_3 [i_3])))));
                        var_21 += ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_6 [i_3 + 1] [14]))))));
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [3] [i_5])) ? (min(((-(7484366915811393680ULL))), (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        arr_19 [(unsigned short)9] [(unsigned short)9] [i_4] [i_3] = ((/* implicit */short) var_3);
                        var_23 -= ((/* implicit */unsigned short) arr_0 [i_2]);
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_2] [i_3] [i_3 - 2] [i_6 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        arr_22 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)3))));
                        arr_23 [i_2] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_21 [i_3 - 2] [i_3] [i_7 + 2] [9LL]));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_3] [i_3] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_8])) > (min((min((arr_20 [(signed char)15] [i_3] [i_4] [(unsigned char)10] [(_Bool)1] [i_8]), (((/* implicit */unsigned long long int) arr_17 [(unsigned short)6])))), (((/* implicit */unsigned long long int) arr_13 [i_2] [(_Bool)1] [i_2] [(unsigned short)11] [4LL] [i_2]))))));
                        var_25 = ((/* implicit */unsigned short) ((min(((-(var_5))), (((/* implicit */int) arr_2 [i_2] [i_3 - 3] [i_3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                    arr_28 [i_3] [i_3 + 1] [i_3 - 2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_2] [i_3 - 3]) ? (((/* implicit */int) arr_6 [i_3 - 3] [i_3 - 3])) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_3 + 1] [i_3 - 3] [i_2] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_3] [i_2])) || (((/* implicit */_Bool) (short)30954))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1507284930U))))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 3] [i_3] [i_3])) != (arr_10 [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) arr_36 [i_10] [i_10] [i_10] [i_10] [i_11]);
                        arr_39 [i_9] [(short)9] [i_11] [i_12] = ((/* implicit */int) min((((/* implicit */long long int) arr_32 [i_12 + 2] [i_10] [i_10 + 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_12] [i_11] [i_10 - 2] [i_9] [i_9])) ? (((/* implicit */int) arr_33 [i_10] [18LL])) : (((/* implicit */int) arr_33 [19] [i_10 + 1]))))) : (max((((/* implicit */long long int) arr_35 [i_12 + 2] [i_11] [i_10 - 2] [7LL])), (arr_30 [i_9])))))));
                        var_27 = ((/* implicit */long long int) (((-(arr_29 [i_12 + 4] [i_10 + 1]))) != (((((/* implicit */unsigned int) arr_37 [i_12 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_9])) ^ (arr_29 [i_12 - 1] [i_10 - 1])))));
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_42 [i_9] [i_9] [(unsigned char)18] [i_9] [(_Bool)1] [i_9]))));
                        arr_43 [i_10 + 1] [i_9] [i_11] [i_10 + 1] [i_9] [i_9] = ((/* implicit */signed char) var_8);
                        var_29 = ((/* implicit */_Bool) (unsigned char)120);
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_37 [i_9] [i_9] [(unsigned char)0] [i_11] [(signed char)21] [i_13])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9] [(_Bool)1] [i_13]))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((int) (unsigned short)58778))))))))));
                    }
                    for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_10] [(short)8] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) || (((/* implicit */_Bool) (unsigned short)26656))))))))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (unsigned short)38888))));
                    }
                    var_33 = arr_33 [i_11] [(signed char)4];
                    var_34 = ((/* implicit */short) arr_45 [(_Bool)1] [i_10] [i_10] [i_11]);
                }
                for (unsigned short i_15 = 2; i_15 < 19; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */int) (unsigned char)121);
                        var_36 -= ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) arr_32 [i_16] [(short)20] [i_10 - 2])) ? (((/* implicit */unsigned long long int) arr_35 [i_9] [i_10 - 2] [i_15] [i_16])) : (15ULL)))))));
                    }
                    arr_52 [i_15 + 2] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_10 - 1] [i_15 - 2])))))));
                    var_37 = ((/* implicit */long long int) ((unsigned short) arr_46 [i_10] [i_10] [i_15] [i_9] [i_9]));
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    var_38 *= ((/* implicit */unsigned long long int) arr_46 [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1]);
                    arr_55 [i_17] [(unsigned short)20] [i_17 + 1] = ((/* implicit */unsigned int) (+(arr_49 [i_9])));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_10 + 1] [i_10 + 1] [i_10 + 1]))));
                        arr_59 [(short)10] [i_10] |= ((/* implicit */signed char) (-(arr_48 [i_9] [i_10 - 2] [i_17 + 1])));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 1; i_19 < 21; i_19 += 1) 
                        {
                            arr_62 [i_9] [i_9] [i_10] [i_17] [i_17] [10ULL] [i_19 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_18] [i_18] [(unsigned short)9] [i_18] [5])) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) 14395949761092321389ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_57 [i_9] [i_10 - 1] [i_17] [i_17 + 1] [i_19] [i_19]))))));
                            arr_63 [i_9] [i_9] [i_17] = ((/* implicit */unsigned long long int) (~(arr_44 [i_19] [i_18] [i_17 + 1] [i_10] [9LL])));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [(_Bool)1] [i_9] [i_9])) > (((/* implicit */int) arr_58 [i_9]))))) >> (((arr_30 [i_10]) + (3659643481278815421LL)))));
                        }
                    }
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) arr_40 [i_9] [i_10 + 1] [i_17] [11LL] [i_21]);
                            var_42 = ((/* implicit */_Bool) (+(arr_29 [i_17 + 1] [i_10])));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_46 [i_21] [i_20] [i_17 + 1] [i_10] [i_9]))));
                            var_44 = ((/* implicit */_Bool) arr_33 [i_21] [i_10 - 2]);
                        }
                        arr_69 [i_17] [i_10 - 1] [i_17] [i_17] [i_20] = (~(arr_45 [i_10 + 1] [i_10] [i_17 + 1] [i_17]));
                        arr_70 [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % (arr_46 [i_9] [21] [11U] [(short)14] [i_10 + 1]))))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (arr_34 [i_17 + 1])));
                    }
                    var_46 = ((/* implicit */long long int) arr_64 [i_10 + 1] [i_10 - 1]);
                }
                for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) 
                        {
                            {
                                arr_78 [2U] [i_10] [2U] [i_23] [(unsigned short)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_49 [i_10 - 2])))) ? (((/* implicit */long long int) arr_49 [i_9])) : (-4048952216591464680LL)));
                                var_47 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(arr_74 [i_10] [i_22] [i_22] [(unsigned short)5])))) > (((((/* implicit */_Bool) arr_44 [(unsigned char)13] [(signed char)12] [i_10 + 1] [i_24] [i_10 + 1])) ? (((/* implicit */unsigned int) -986996313)) : (arr_44 [(unsigned short)4] [i_24] [i_24] [i_24] [i_10 + 1])))));
                                var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_10] [i_22] [i_23] [i_24])) ? ((+(arr_46 [0U] [i_10] [i_10] [i_23] [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [19] [i_10] [2ULL] [12]))) >= (arr_29 [i_9] [i_10 + 1])))))));
                                arr_79 [i_9] [i_10 + 1] = ((/* implicit */unsigned int) arr_37 [i_24] [i_24] [i_23] [i_10] [i_10] [i_9]);
                            }
                        } 
                    } 
                    arr_80 [i_22] [i_10] [i_9] = ((/* implicit */unsigned long long int) (((+(arr_45 [1LL] [i_10] [i_22] [i_22]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_75 [i_9]), (((/* implicit */unsigned short) arr_57 [i_22] [i_22] [15U] [i_10 - 1] [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)16084)) >= (((/* implicit */int) arr_34 [9U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [18] [i_10] [(unsigned short)9] [i_10 - 2]))))))))));
                    arr_81 [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (arr_45 [i_9] [i_22] [i_22] [i_9])))), (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) arr_73 [i_9] [i_9] [i_22] [i_9] [(_Bool)1]))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [(_Bool)1] [i_22] [16ULL] [7] [i_9] [i_9]))))))) : (((/* implicit */int) var_2))));
                }
                var_49 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [6] [i_10])) ? (2781826328333853402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_9] [i_10] [i_10 - 2])))))) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) arr_30 [i_9]))))) : (((/* implicit */int) ((arr_36 [i_9] [i_10] [i_10] [i_10 + 1] [5]) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
    {
        for (int i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            {
                var_50 += ((/* implicit */signed char) ((((/* implicit */int) arr_4 [(unsigned short)0] [i_26])) & ((+((~(((/* implicit */int) arr_16 [i_25] [i_26] [i_26] [i_25] [5ULL]))))))));
                var_51 *= ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 3890355847031098673LL)))))))));
            }
        } 
    } 
}
