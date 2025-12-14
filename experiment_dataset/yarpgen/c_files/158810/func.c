/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158810
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) var_8);
            arr_7 [(unsigned short)8] [i_1] [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_0] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((((/* implicit */int) (unsigned short)5)) << (((arr_5 [i_0]) - (8114896005030806238ULL)))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) (+((~(arr_3 [i_0] [8ULL])))));
                            var_10 -= ((/* implicit */unsigned long long int) (+(5203295463629537965LL)));
                            var_11 = ((/* implicit */unsigned char) (+((-(16965993359772882351ULL)))));
                            var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (arr_3 [i_0] [7ULL])))) ? (((5203295463629537966LL) / (((/* implicit */long long int) -748599047)))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 2] [i_3] [i_2 - 2])))))))) && (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0] [i_1] [(unsigned short)3] [i_3])), (var_8)))) || (((/* implicit */_Bool) max((arr_2 [(unsigned char)9] [(unsigned short)8]), (arr_2 [3ULL] [3ULL]))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 8; i_5 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_5 + 1] [i_5 + 1] [i_5 + 1]);
            var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (arr_2 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_9 [i_5]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_5] [i_5] [9LL])))))))));
        }
        for (long long int i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_20 [i_6 - 1] [i_6]), (arr_20 [i_6 + 2] [i_6]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((+((~(arr_8 [i_0] [i_6 - 1] [i_7] [i_8])))))));
                    var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (-(arr_0 [(unsigned char)7])))) ? (((((/* implicit */int) arr_14 [i_8] [i_8] [5ULL] [i_6 - 1] [i_6 + 2] [i_6 + 2])) - (((/* implicit */int) arr_14 [i_8] [(unsigned char)3] [i_8] [i_6 + 1] [9ULL] [i_6 - 1])))) : (((/* implicit */int) var_4))))));
                    arr_26 [(unsigned char)1] [i_6] [i_6] [i_6] [8] [i_6] = ((/* implicit */unsigned long long int) (-(63)));
                    var_17 ^= ((/* implicit */unsigned short) min(((-(arr_3 [i_6 - 1] [3]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -5203295463629537958LL)), (256ULL)))) ? (max((((/* implicit */unsigned long long int) arr_2 [5] [i_0])), (arr_9 [5LL]))) : (arr_17 [i_0] [i_0] [i_7])))));
                }
                for (long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    var_18 += ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_1 [i_6])) : ((+(var_0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [9LL] [i_9]) > (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (unsigned short)19)) ? (var_7) : (18446744073709551348ULL)))))));
                    arr_29 [i_6] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_20 [i_6 + 1] [i_6])) == (((/* implicit */int) arr_20 [i_6 + 2] [i_6])))));
                    var_19 = ((unsigned long long int) ((((/* implicit */long long int) arr_4 [i_6 + 2] [i_6 - 1] [i_6 + 2])) / (arr_23 [i_6 + 1] [i_6 - 1] [i_6])));
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 4) 
                    {
                        arr_36 [3ULL] [9ULL] [9ULL] [i_10] [i_6] [8LL] [i_6] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned short)41277)))));
                        arr_37 [(unsigned char)4] [i_6] [i_7] [2ULL] [i_6] [i_0] [i_7] = ((/* implicit */int) (((~(((var_7) << (((/* implicit */int) var_3)))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_3 [(unsigned short)6] [i_6])) ? (((/* implicit */int) var_3)) : (arr_2 [i_0] [(unsigned short)2]))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) (+(((arr_34 [i_0] [i_0] [i_0] [i_0] [i_6]) * (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_9))))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_16 [i_0] [i_6] [i_0])))))))))));
                    arr_38 [i_6] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_7] [i_6 - 1] [i_0])))))));
                }
                var_22 = ((((/* implicit */_Bool) ((unsigned char) arr_30 [i_7] [i_6] [i_6] [0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [7]))) : (max((arr_8 [i_6] [i_6 - 1] [i_6] [i_6]), (((/* implicit */unsigned long long int) var_2)))));
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_16 [(unsigned char)1] [i_6 - 1] [i_6]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)101))))))) / (((/* implicit */long long int) arr_0 [i_0]))));
                    arr_42 [i_6] [i_6 + 2] [(unsigned char)2] [i_6 + 2] = ((/* implicit */int) ((var_5) * (max((((2047ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((unsigned long long int) arr_27 [8ULL] [(unsigned char)7] [5] [i_12] [4] [i_12]))))));
                }
            }
            for (unsigned long long int i_13 = 1; i_13 < 6; i_13 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) != ((~(var_8)))));
                var_25 = min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_6] [i_6])), (((((/* implicit */_Bool) arr_35 [i_13 + 4] [i_13 + 2] [i_6 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_13 + 4] [i_6] [i_6 + 2]))))));
                arr_46 [i_0] [6LL] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-2147483647 - 1)) - (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) arr_20 [i_6] [i_6]))));
                arr_47 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65509)) ? (((/* implicit */int) (unsigned short)56488)) : (-748599043)));
            }
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) arr_34 [i_6] [i_6 + 1] [i_6 + 2] [0LL] [i_6]);
                arr_50 [i_6] = ((/* implicit */int) arr_27 [i_0] [i_6 + 1] [i_0] [5] [i_14] [i_14]);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (var_5)));
            }
            arr_51 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) 681181880)) && (((/* implicit */_Bool) arr_49 [7ULL] [i_6] [(unsigned short)9]))))) % (((((/* implicit */int) var_2)) % (((/* implicit */int) var_4)))))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_24 [5LL] [5LL])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) - (34047)))));
        }
        for (long long int i_15 = 1; i_15 < 8; i_15 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned char) ((unsigned long long int) min((arr_1 [i_15 - 1]), (((/* implicit */int) var_4)))));
            arr_54 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47500)) < (((/* implicit */int) (unsigned short)18053))));
            var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_48 [i_0]) & (((/* implicit */unsigned long long int) -748599050))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_0] [i_15] [i_15] [i_15])) - (arr_34 [i_0] [i_15 + 2] [i_0] [i_0] [i_0])))) : (((var_5) << (((((/* implicit */int) var_4)) - (46690)))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_35 [i_15 - 1] [i_15 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_23 [i_15 + 1] [i_15 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_15] [i_0])) && (((/* implicit */_Bool) var_8)))))) : ((~(arr_43 [i_0])))))));
            arr_55 [i_15] [i_15] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * (arr_49 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11642384554385010533ULL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_53 [(unsigned short)8])))))))) : (var_7)));
            arr_56 [i_0] [i_15] [0] = ((((/* implicit */_Bool) (+((+(arr_28 [i_15] [i_15 + 2] [i_0] [i_15])))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0] [i_15]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            arr_60 [i_16] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) == (((((arr_52 [i_0] [i_16] [i_0]) + (9223372036854775807LL))) << (((((var_8) + (6629539874143402311LL))) - (48LL))))))))));
            var_30 = ((/* implicit */unsigned char) (((-(681181907))) == (((arr_2 [i_0] [i_16]) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_16])))))))));
            var_31 = ((/* implicit */int) ((max((((((/* implicit */_Bool) arr_5 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0]))) : (arr_9 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_34 [(unsigned char)8] [i_0] [(unsigned char)8] [i_16] [i_0]) : (arr_34 [i_0] [i_0] [i_16] [i_0] [i_16])))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_16])))))))))));
        }
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (var_0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_63 [i_17] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_22 [i_0] [i_0])))) / (max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) var_2))))))));
            var_33 = ((/* implicit */long long int) arr_9 [i_0]);
            var_34 -= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_4)) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [4ULL] [i_0]))))))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
        }
        var_35 = (-(var_7));
    }
    for (int i_18 = 3; i_18 < 21; i_18 += 4) 
    {
        var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18035))) - ((+(11812349896617350417ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 1; i_19 < 23; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 22; i_20 += 2) 
            {
                {
                    var_37 -= ((/* implicit */unsigned char) ((15919588021852758793ULL) % (((/* implicit */unsigned long long int) 8464018889266340722LL))));
                    arr_72 [i_18] [i_18] [4ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_71 [i_19 - 1] [(unsigned char)21])))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (((unsigned long long int) var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_71 [(unsigned short)9] [(unsigned short)9])) - (9223372036854644736ULL)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 598875248))))))));
                }
            } 
        } 
    }
    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
    {
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) var_6))))))) ? (((((/* implicit */_Bool) arr_71 [i_21] [i_21])) ? (((/* implicit */unsigned long long int) arr_75 [(unsigned short)10] [(unsigned short)10])) : (arr_74 [i_21] [i_21]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_73 [i_21] [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_21] [22]))) : (max((6141001533253137587ULL), (arr_69 [(unsigned char)21]))))))))));
        var_39 = ((/* implicit */unsigned long long int) ((((long long int) (+(((/* implicit */int) var_4))))) & (((/* implicit */long long int) (((-(-477207486))) << (((((/* implicit */int) arr_67 [i_21] [i_21] [i_21])) - (53495))))))));
        arr_77 [i_21] = ((/* implicit */int) (+(18446744073709551601ULL)));
    }
    var_40 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (var_0) : (var_5))) : (var_5)))) ? ((+(((((/* implicit */_Bool) 477207486)) ? (((/* implicit */int) var_2)) : (477207486))))) : ((-(((/* implicit */int) max((var_4), (var_4)))))));
}
