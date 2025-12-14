/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174003
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1468950838)) ? (4686856638636516235LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned int) ((-847098131) >= ((~(((/* implicit */int) (short)-5179))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3])) << (((var_11) + (1981536115)))));
                            var_19 = ((/* implicit */signed char) (((!(arr_1 [i_0] [i_2]))) ? (((/* implicit */int) var_13)) : (var_6)));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((524994574U) << (((((/* implicit */int) (unsigned char)131)) - (119))))))));
                            var_21 |= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_4]))))) ? ((~(4294967272U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28477))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 4686856638636516245LL))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((arr_12 [i_3]) ? (var_11) : (((/* implicit */int) (short)24638)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            arr_17 [(short)19] [i_3] [(unsigned short)22] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20477)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3391))) : (6543479515802358327ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1]))) : (arr_6 [i_2])));
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((arr_12 [i_3]) ? (var_0) : (((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_1] [i_1 - 3] [i_1 - 3]))));
                            arr_19 [i_0] [(unsigned char)1] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_3] [(unsigned char)8]))))) ? (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_3] [i_3 - 1] [i_3])) : (((var_8) % (((/* implicit */int) var_14))))));
                            var_23 |= ((/* implicit */short) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) ((unsigned char) (short)12))) : (((/* implicit */int) (short)-20470))));
                        }
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((arr_7 [i_0]) <= (max((-2125919487), (arr_7 [i_0])))));
                            arr_26 [i_0] [i_1 - 2] [i_6] [i_6 - 1] [i_6] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_1 - 2] [i_6 - 1] [i_6]))));
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-20470)), (max(((~(((/* implicit */int) (unsigned short)33525)))), (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_6 - 1] [i_7]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_30 [i_6] [i_1] [(signed char)16] [i_6] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) > (-1508752584))))));
                            arr_31 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) ? (((((/* implicit */_Bool) 5049867911977585125ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28945))) : (964947455205767273LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [(unsigned short)20] [i_0])))));
                            var_26 = ((/* implicit */short) (unsigned short)33042);
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_34 [i_0] [i_0] [i_1 - 3] [i_0] [i_6] [i_9] = var_0;
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [18] [i_1] [18] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)25082)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) arr_16 [i_6] [i_1] [23ULL] [i_6] [i_9] [(unsigned char)12])) ^ (((/* implicit */int) (signed char)107)))) : (((((/* implicit */_Bool) 616986067432459035LL)) ? (((/* implicit */int) (unsigned short)54372)) : (((/* implicit */int) (signed char)25)))));
                        }
                        var_28 = ((/* implicit */int) arr_27 [i_6] [(short)10] [i_6 - 1] [(short)10] [i_6]);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_29 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_4));
                        var_30 = ((/* implicit */int) (short)3410);
                        arr_38 [i_10] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) 134217727)), (511U)));
                        var_31 = ((/* implicit */unsigned char) ((-1LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28493)) ? (((/* implicit */unsigned int) 134217727)) : (907016642U)))) ? (-225545932) : (((/* implicit */int) (short)-31343)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_43 [i_11] [(_Bool)1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [(_Bool)1] [i_1 + 1] [i_2] [12ULL] [(short)20] [i_0]) ? (((((/* implicit */_Bool) -1144353102394634500LL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_29 [(signed char)15])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1 - 2])) ? (var_6) : (var_6)))))) ? (max((max((var_6), (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) var_2))));
                        var_32 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_3), ((short)3)))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)22] [i_2] [i_11] [0LL]))) - (35184372088831LL)))))) ? (((/* implicit */long long int) ((var_8) + (var_12)))) : (((max((((/* implicit */long long int) var_13)), (1144353102394634499LL))) - (((/* implicit */long long int) ((/* implicit */int) max(((short)-145), (((/* implicit */short) arr_21 [i_0] [8] [8] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)12)) <= (((/* implicit */int) (short)-13))));
        arr_48 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)183)) ? (var_0) : (((((/* implicit */_Bool) arr_21 [i_12] [17] [(unsigned char)10] [i_12])) ? (((/* implicit */int) arr_25 [i_12] [i_12] [(_Bool)1] [i_12] [i_12])) : (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned short)17464)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_34 = ((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) 132857662U))));
            var_35 = ((/* implicit */short) var_5);
            arr_51 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 134217727)) ? (((/* implicit */int) (short)-29605)) : (var_8)));
            var_36 = ((/* implicit */short) ((arr_12 [i_13]) ? (var_11) : (var_6)));
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) ((((1512764034U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-9279))))) ? (((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14] [9LL])) : (((/* implicit */int) arr_15 [(_Bool)1] [i_14] [i_14] [i_14] [i_14]))));
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                var_38 += ((/* implicit */unsigned char) arr_10 [18U] [i_14]);
                arr_60 [i_14] [i_15] [i_16] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -83691447)) ? (((/* implicit */int) (unsigned short)17464)) : (((/* implicit */int) (unsigned char)11)))) ^ (((/* implicit */int) arr_59 [i_14]))));
            }
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_11)) >= (arr_23 [i_14] [(short)8])));
            var_40 = ((/* implicit */short) (-(((/* implicit */int) ((134217721) <= (((/* implicit */int) arr_33 [19U] [i_15] [19U] [i_15] [(_Bool)0])))))));
            var_41 += ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            {
                var_42 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_53 [2]), (((/* implicit */long long int) var_3))))) ? (((int) (unsigned char)16)) : (((/* implicit */int) ((short) arr_42 [i_17] [i_18])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    var_43 = ((/* implicit */long long int) (short)-1);
                    arr_69 [9LL] [i_18] [i_19] [9LL] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_28 [i_17] [i_18] [(signed char)8] [i_17] [20ULL])))));
                }
                for (unsigned short i_20 = 0; i_20 < 19; i_20 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        arr_74 [i_17] [i_18] [i_20] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (-1LL) : (((/* implicit */long long int) var_5))))) ? (-1) : (1718576310)))) ? ((~(((/* implicit */int) min(((unsigned short)65516), (((/* implicit */unsigned short) (short)3))))))) : (((((/* implicit */_Bool) arr_58 [i_17] [(short)17] [i_17])) ? (min((1532627984), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_56 [i_17] [(short)17] [i_20])))));
                        arr_75 [i_21] [(short)7] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_17] [(short)18] [(unsigned char)18] [i_21])) ? (((/* implicit */int) var_14)) : (arr_67 [i_21] [i_20] [i_17] [i_17]))))));
                        var_44 = ((/* implicit */long long int) max((var_44), (max((((((/* implicit */_Bool) (unsigned short)17478)) ? (((((/* implicit */_Bool) 898781180)) ? (arr_0 [i_20]) : (((/* implicit */long long int) 1062011241U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4338506871443795229LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_20] [i_21]))) : (arr_73 [i_17] [i_18] [i_20])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 671165850170477637LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19564))) : (arr_0 [i_21])))) || (arr_59 [i_17]))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_22 = 1; i_22 < 17; i_22 += 1) /* same iter space */
                    {
                        arr_80 [i_22] [i_22] [i_20] [(_Bool)1] [i_18] [i_17] = ((/* implicit */long long int) ((3273983083U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167)))));
                        arr_81 [i_18] [i_20] [i_18] [9LL] = ((/* implicit */unsigned int) (-((~(max((var_10), (((/* implicit */long long int) arr_56 [i_22] [i_18] [i_17]))))))));
                    }
                    for (short i_23 = 1; i_23 < 17; i_23 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */signed char) ((var_4) <= (max((var_4), (((/* implicit */long long int) arr_65 [i_17]))))));
                        var_46 = ((/* implicit */short) (-(((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54705))) : (16U))))));
                        var_47 |= ((/* implicit */unsigned char) (~((-(((((/* implicit */unsigned int) var_11)) | (arr_76 [i_17] [i_18] [i_20] [i_23])))))));
                        var_48 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(var_8))) > (((((/* implicit */_Bool) (short)19541)) ? (var_8) : (((/* implicit */int) arr_40 [(unsigned short)10] [(unsigned short)10] [13LL] [i_18] [i_20] [i_23 + 1])))))))));
                        var_49 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_17] [i_20] [i_18] [i_18] [i_17] [i_17]))));
                    }
                    var_50 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_20] [i_18] [i_17]))) : (arr_70 [10LL] [i_18]))), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)-16950), ((short)-13695)))))))));
                }
                for (unsigned short i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
                {
                    arr_86 [i_17] [i_18] [i_24] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-85))))) ? ((+(var_0))) : (((((((/* implicit */int) (short)-25450)) + (2147483647))) >> (((((/* implicit */int) var_14)) - (3388)))))))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_85 [i_17] [i_18] [(_Bool)1] [i_18])))))) : (((((((/* implicit */int) var_14)) == (((/* implicit */int) var_14)))) ? ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_58 [i_17] [i_17] [i_24])))));
                    arr_87 [i_17] [i_18] [i_18] [i_24] = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3273983084U)))))) : ((~(((((/* implicit */_Bool) arr_29 [i_24])) ? (-4338506871443795229LL) : (((/* implicit */long long int) 278653621))))))));
                }
                for (unsigned short i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
                {
                    var_51 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3322297519U)) ? (((((/* implicit */_Bool) min(((short)0), (arr_35 [i_17] [i_17] [i_25] [i_17] [(signed char)4] [i_18])))) ? (4359020181808928265LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_25] [i_18] [(signed char)18])))));
                    var_52 ^= ((/* implicit */short) (~(var_12)));
                }
            }
        } 
    } 
}
