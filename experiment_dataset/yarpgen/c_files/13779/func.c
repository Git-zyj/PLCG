/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13779
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11203536494763160241ULL)) ? (-325405526) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (((((/* implicit */_Bool) (signed char)-35)) ? (-1002073959) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) arr_6 [i_1])) & (5484773044881072501ULL)))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    arr_15 [i_4 + 2] [i_1] [i_2] = -517541921;
                    var_20 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 18069279862177358998ULL)) ? (var_13) : (arr_7 [i_2]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)40350)), (var_15))))))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11280126767628357113ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 549755813887ULL)) ? (((/* implicit */int) (unsigned short)16384)) : (arr_6 [i_1]))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) 10560017938639727670ULL))))), (max((arr_13 [i_1] [i_1 + 1] [i_3] [i_2] [i_2] [i_1]), (((/* implicit */int) (unsigned short)65535)))))) : ((-(-2147483631)))));
                var_22 = ((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_2] [i_3] [i_1] [i_3] [i_1]) | (-1)));
            }
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                arr_19 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1 + 1] [i_1 - 1]))));
                arr_20 [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_16);
                arr_21 [i_1] [i_2] [i_5] = ((unsigned short) (((!(((/* implicit */_Bool) 1571457912)))) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)5543))))));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                arr_24 [i_1] = ((/* implicit */unsigned short) max((((arr_18 [i_1 + 1]) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1295))))))), ((!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2] [i_1]))))));
                arr_25 [i_1] [i_2] [i_1] [i_6] = ((max(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) < (arr_23 [i_2] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_12 [i_1 - 1] [i_2] [i_1])))) ? (-536870912) : (((/* implicit */int) ((unsigned short) arr_18 [i_1 - 1])))))) : (min((((/* implicit */unsigned long long int) var_17)), (var_13))));
            }
            arr_26 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), ((+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))))))) : (arr_23 [i_1] [i_2])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                arr_30 [i_1] [i_7] [i_1] = var_16;
                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_1 + 1])) ? ((+(((/* implicit */int) var_4)))) : (((int) var_8))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                arr_33 [i_1] [i_2] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)26866);
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_18 [i_1 + 1]) : (arr_18 [i_1 + 1])));
                var_25 = arr_13 [i_1] [i_1 + 1] [i_1] [i_2] [i_8] [i_8];
                var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (-1512396765) : (arr_6 [i_1]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_8])))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 4) 
        {
            arr_36 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -517541919)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_1 + 1] [i_9] [i_1] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (((((/* implicit */_Bool) 517541927)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1]))) : (var_18)))));
            arr_37 [i_1] = ((/* implicit */unsigned short) (~(((var_15) & (((/* implicit */int) (unsigned short)16383))))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 24; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 3; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_27 ^= (~(arr_22 [i_9] [i_9 - 2] [i_11] [i_12 + 2]));
                            arr_47 [i_12] [i_1] [i_10] [i_10 - 1] [i_9] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((arr_45 [i_1] [i_1] [i_9] [i_9] [i_10 + 1] [i_11] [i_12]) >> (((arr_45 [i_1 - 1] [i_9 + 1] [i_9] [i_10] [i_11] [i_11] [i_12]) - (8872522296082931213ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1]))) | (15686132704139499858ULL)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            var_28 = ((/* implicit */signed char) (-(min((((((/* implicit */int) (signed char)-118)) + (var_7))), (((/* implicit */int) ((((/* implicit */_Bool) 517541928)) && (((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1] [i_1] [i_13])))))))));
            var_29 = ((/* implicit */unsigned long long int) var_16);
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                var_30 = arr_9 [i_1 + 1];
                var_31 = ((/* implicit */int) min((var_31), (arr_18 [i_1 + 1])));
                var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_17))))))) ? (var_13) : (((/* implicit */unsigned long long int) 262143))));
            }
        }
        /* vectorizable */
        for (signed char i_15 = 1; i_15 < 23; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        arr_60 [i_1] [i_1] [i_15] [i_1] [i_16] [i_17] = (~(18446744073709551615ULL));
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            arr_63 [i_1] [i_15] [i_16] [i_17] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_1] [i_18] [i_16] [i_15 + 2] [i_18] [i_15] [i_1]))));
                            var_33 += ((/* implicit */unsigned short) (signed char)-70);
                        }
                        for (int i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            arr_66 [i_1] [i_15] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_42 [i_15] [i_16] [i_17] [i_19])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) ((((/* implicit */_Bool) -1315657725)) && (((/* implicit */_Bool) -517541923)))))));
                            var_34 = ((/* implicit */unsigned short) var_17);
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1 - 1] [i_1] [i_1])) ? (arr_14 [i_19] [i_15 + 2] [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_17)))))))))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) -79443483)) ? (8827486142596082679ULL) : (((((/* implicit */_Bool) arr_54 [i_1 + 1] [i_15] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))))))));
                        }
                        var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_11 [i_1] [i_15] [i_16])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_15] [i_17]))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551615ULL)))));
                        arr_67 [i_15] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1] [i_15] [i_17]))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_17] [i_16 + 3] [i_15 - 1] [i_15 - 1] [i_1 - 1])) ? ((~(arr_8 [i_1] [i_15] [i_15]))) : (((arr_7 [i_1]) ^ (arr_43 [i_1] [i_15] [i_1] [i_17])))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_64 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) (signed char)-15)))) ? (((/* implicit */int) ((arr_6 [i_1]) > (182129838)))) : ((+(var_15)))));
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    {
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 544358167))));
                        var_41 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (5484773044881072501ULL) : (arr_8 [i_20] [i_15] [i_20]))) / (((/* implicit */unsigned long long int) (-(arr_51 [i_20]))))));
                    }
                } 
            } 
            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12801))))) ? (((((/* implicit */_Bool) 7710665495085553488ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5543))) : (arr_45 [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) var_5)))))));
            var_43 = ((/* implicit */int) min((var_43), ((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_1] [i_1 - 1] [22ULL] [i_15])) && (((/* implicit */_Bool) 1778893765))))) : (((/* implicit */int) arr_34 [2] [i_1]))))));
        }
        arr_75 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26881))))) ? (var_5) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_1])))))))));
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 25; i_22 += 4) 
    {
        for (unsigned long long int i_23 = 2; i_23 < 24; i_23 += 2) 
        {
            {
                arr_81 [i_22] = (~(min(((~(arr_74 [i_22] [i_23] [i_23] [i_22] [i_22]))), (((/* implicit */unsigned long long int) ((signed char) arr_64 [i_22] [i_23] [i_22] [i_22] [i_22]))))));
                var_44 += ((/* implicit */unsigned short) ((min((arr_22 [i_23 + 1] [i_23] [i_23 - 2] [i_22]), ((-(var_7))))) % (((((arr_68 [i_22] [i_23]) + (2147483647))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_34 [i_23] [i_23])) : (((/* implicit */int) arr_78 [i_23] [i_23])))) - (17)))))));
                arr_82 [i_22] [i_23 - 2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_23])) ? (2079180391) : (((/* implicit */int) arr_69 [i_23]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_79 [i_23] [i_23 - 1])) : (var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_22] [i_23]))))))), (((/* implicit */int) (unsigned short)25524))));
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_3))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_23] [i_23] [i_22] [i_23])) ? (((/* implicit */int) arr_32 [i_22] [i_23] [i_23])) : (((/* implicit */int) (signed char)10)))))))) ? (var_5) : ((~(((var_2) ^ (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (unsigned short)38671))))) ? (((((/* implicit */_Bool) var_18)) ? (var_13) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)111)) : (var_15)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)25258)))))))));
    var_47 = (unsigned short)45364;
    var_48 = -1450108182;
}
