/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189001
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))));
                        arr_13 [(unsigned short)0] [i_0] [(unsigned char)6] [(unsigned short)0] [i_2] [(unsigned short)9] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                    }
                } 
            } 
        } 
        var_17 &= ((((((/* implicit */int) arr_0 [2LL] [2LL])) + (((/* implicit */int) arr_0 [i_0] [4ULL])))) % (((/* implicit */int) var_8)));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_9 [i_0] [i_0]))));
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (unsigned short)2235))))) < (((((/* implicit */_Bool) max((arr_15 [0LL] [i_4]), (((/* implicit */long long int) arr_14 [0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((arr_15 [i_4] [5U]), (((/* implicit */long long int) arr_17 [i_4]))))))));
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 15; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((arr_18 [i_4 + 1] [i_6] [i_4 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_7]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1254))))))))));
                        var_21 = ((/* implicit */long long int) max((((/* implicit */int) arr_22 [i_5] [i_5] [(unsigned char)10])), (((((/* implicit */int) arr_20 [i_4 - 1] [i_5 - 2])) / (((/* implicit */int) arr_24 [i_4 - 1]))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_14 [i_4])), (arr_15 [i_4] [i_4]))) + (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4])))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_5]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
    {
        arr_29 [i_8] [i_8] |= ((/* implicit */short) (((-(arr_18 [i_8 - 1] [0] [i_8 - 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_17 [i_8]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8])))))))));
        arr_30 [i_8] = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) | (arr_27 [(signed char)12]))), (((/* implicit */unsigned long long int) arr_25 [i_8] [14U] [i_8] [i_8] [(unsigned char)10])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_24 [i_8])), ((short)-1227)))))));
        arr_31 [i_8 + 1] [i_8] = ((/* implicit */unsigned int) min((arr_21 [i_8] [i_8] [i_8]), (((/* implicit */long long int) (-(((/* implicit */int) (short)31963)))))));
        var_23 = ((/* implicit */long long int) var_8);
    }
    var_24 = ((/* implicit */unsigned int) ((int) ((signed char) ((((/* implicit */_Bool) 2155154838U)) ? (((/* implicit */int) (unsigned short)17207)) : (((/* implicit */int) (short)1239))))));
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_32 [i_9])), ((~(((/* implicit */int) (short)-16322))))));
        /* LoopNest 3 */
        for (unsigned char i_10 = 4; i_10 < 19; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        arr_44 [i_10] = ((/* implicit */short) ((long long int) (((!(((/* implicit */_Bool) arr_43 [i_10] [i_12])))) && (((/* implicit */_Bool) max(((short)29242), ((short)-1233)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (short)4096))));
                    }
                } 
            } 
        } 
        arr_45 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_9] [i_9] [8LL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_41 [i_9]), (arr_43 [i_9] [i_9]))))))) : (max((((((/* implicit */_Bool) arr_41 [i_9])) ? (((/* implicit */int) arr_36 [i_9] [i_9] [(signed char)4])) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_40 [(short)10] [i_9] [i_9]))))));
        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((min((((/* implicit */short) arr_42 [(unsigned char)7] [i_9] [i_9] [(unsigned char)7] [i_9] [i_9])), (arr_41 [i_9]))), (((short) arr_40 [i_9] [i_9] [i_9]))))), (((unsigned long long int) arr_35 [i_9] [i_9]))));
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
        {
            var_27 = ((1610612736U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))));
            /* LoopSeq 4 */
            for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    var_28 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14])) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_43 [i_9] [i_9]))))) ? (arr_46 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_14]))))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-9103))));
                    arr_53 [i_14] [i_9] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_10)), (arr_46 [i_9]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))) ? (((/* implicit */int) ((unsigned short) arr_38 [i_14] [i_14] [i_13]))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_10)))))))));
                    var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_38 [i_9] [i_14] [i_15])), (((unsigned int) min((((/* implicit */unsigned long long int) arr_42 [i_14] [i_14] [i_14] [i_14] [i_14] [(signed char)13])), (arr_47 [i_14] [i_14] [2]))))));
                }
                for (int i_16 = 1; i_16 < 18; i_16 += 2) 
                {
                    arr_56 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */signed char) arr_50 [i_13]);
                    arr_57 [i_14] [i_14] [i_9] [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_14] [(_Bool)1] [i_9] [i_14]))))), (((long long int) ((((/* implicit */_Bool) arr_51 [i_16] [i_14] [i_14] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14]))) : (arr_55 [i_9] [i_9] [i_14] [i_14] [i_16 + 1]))))));
                    var_31 = ((/* implicit */short) ((unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-13)))))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_48 [i_13] [i_9] [i_9] [i_16]))));
                }
                for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    var_33 ^= ((/* implicit */short) (-((+(var_13)))));
                    var_34 -= ((/* implicit */short) max((((/* implicit */signed char) ((arr_37 [i_17] [i_17] [(signed char)18]) <= (arr_37 [i_13] [6U] [(_Bool)0])))), (arr_32 [i_17])));
                }
                for (signed char i_18 = 3; i_18 < 18; i_18 += 2) 
                {
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_18] [i_18 - 1] [i_18]))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_52 [i_9] [i_9] [i_9] [8ULL]))));
                }
                arr_63 [i_9] [i_14] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_14] [i_14] [i_14] [i_9])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned char)3] [15U]))) : (arr_39 [i_13] [i_13] [i_13] [i_13]))) : (((/* implicit */long long int) ((arr_54 [i_14] [i_14] [i_13] [i_9]) + (((/* implicit */int) arr_62 [i_14] [i_14] [i_14] [i_14] [i_9] [i_9])))))))), (((min((((/* implicit */unsigned long long int) arr_60 [i_9] [i_14] [i_13] [i_9])), (arr_47 [i_14] [i_9] [i_9]))) + (((/* implicit */unsigned long long int) arr_52 [i_9] [i_9] [7] [i_9]))))));
            }
            for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) /* same iter space */
            {
                var_37 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((short) arr_65 [i_19] [i_13] [15U] [15LL]))))) + ((+(arr_64 [i_9])))));
                arr_68 [i_19] = ((/* implicit */short) (~(((/* implicit */int) arr_38 [i_9] [i_19] [i_19]))));
                var_38 = ((/* implicit */unsigned char) arr_51 [i_9] [i_9] [i_19] [4LL]);
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_42 [i_19] [i_19 + 2] [i_19 + 1] [i_19 - 1] [i_19] [i_19 + 2]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)75)) < (((/* implicit */int) (signed char)-65))))) : (((/* implicit */int) min((arr_42 [i_19 - 1] [i_19 + 3] [i_19 - 1] [i_19 - 1] [i_19] [i_19 + 3]), (arr_42 [i_19 + 3] [i_19 - 1] [i_19 + 2] [i_19 + 3] [i_19 + 3] [i_19 + 3]))))));
            }
            for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 4) /* same iter space */
            {
                var_40 ^= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) ((short) arr_39 [i_13] [i_13] [i_13] [i_9]))), (arr_58 [i_20 + 2] [i_20 + 2] [i_20] [i_20 + 3] [i_20] [i_20 + 1])))));
                var_41 += ((/* implicit */short) arr_65 [i_20 + 1] [i_20 + 1] [i_20 + 2] [i_20 + 1]);
                arr_71 [i_9] [i_20] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */int) arr_43 [i_13] [i_20])) : (((/* implicit */int) arr_43 [i_9] [i_20])))) > (((/* implicit */int) arr_32 [i_13]))));
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    for (unsigned short i_22 = 4; i_22 < 18; i_22 += 2) 
                    {
                        {
                            var_42 &= ((/* implicit */signed char) min((((/* implicit */short) (signed char)2)), ((short)-14603)));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_72 [i_22] [i_13] [i_13] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_20]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) <= (var_15)))))))) ? (((((/* implicit */int) arr_42 [i_22] [i_22] [i_22 - 4] [(short)5] [i_22 - 2] [(short)5])) - (((/* implicit */int) arr_59 [i_21] [8U] [i_22 - 4] [i_22] [i_22])))) : (var_6)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_23 = 1; i_23 < 17; i_23 += 4) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned int) arr_70 [i_13] [i_13]);
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -21LL))) && (((/* implicit */_Bool) arr_60 [i_23] [i_13] [i_13] [i_13]))));
                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((arr_47 [i_9] [i_23 - 1] [i_23 + 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_13] [i_13] [i_23]))))))));
                var_47 = ((/* implicit */unsigned char) arr_62 [i_23] [i_23] [i_13] [i_13] [i_13] [(unsigned short)6]);
            }
            arr_78 [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_70 [i_9] [i_9]) ? (((((/* implicit */unsigned long long int) arr_33 [i_9])) + (((unsigned long long int) arr_32 [i_9])))) : (max((((/* implicit */unsigned long long int) arr_48 [i_9] [i_9] [i_9] [i_9])), ((+(arr_35 [i_9] [i_13])))))));
            /* LoopSeq 1 */
            for (unsigned short i_24 = 1; i_24 < 18; i_24 += 2) 
            {
                arr_81 [i_13] |= ((/* implicit */signed char) (+(((/* implicit */int) (short)252))));
                arr_82 [i_24] = ((/* implicit */int) arr_41 [i_24]);
            }
        }
        for (int i_25 = 0; i_25 < 20; i_25 += 2) /* same iter space */
        {
            arr_85 [i_9] = ((/* implicit */unsigned int) max(((-(((var_2) + (((/* implicit */int) arr_43 [i_9] [i_25])))))), (((/* implicit */int) ((((arr_76 [(short)16] [(short)16] [i_25] [i_25]) ? (arr_39 [i_9] [i_9] [i_9] [15ULL]) : (((/* implicit */long long int) var_1)))) > (arr_77 [i_25]))))));
            arr_86 [i_25] [i_25] = ((/* implicit */short) var_7);
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) min((arr_76 [15ULL] [15ULL] [i_25] [i_25]), (arr_42 [(unsigned char)6] [i_25] [i_25] [i_25] [(unsigned char)6] [i_9])))), (arr_38 [i_9] [i_25] [i_25]))), (((/* implicit */unsigned char) var_7)))))));
            arr_87 [i_9] [i_9] = ((/* implicit */long long int) arr_83 [8] [i_25]);
            arr_88 [i_9] [i_25] = ((/* implicit */signed char) arr_40 [i_9] [(_Bool)1] [i_25]);
        }
    }
    var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) var_15))), (var_11)));
}
