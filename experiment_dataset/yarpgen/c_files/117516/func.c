/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117516
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */int) ((max((((unsigned long long int) 0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) - (var_7))))) - ((~(max((var_10), (var_5)))))));
        var_17 &= ((arr_0 [i_0 - 1]) + (((((/* implicit */_Bool) max((13), (((/* implicit */int) var_3))))) ? (arr_0 [i_0 + 2]) : (var_5))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) (-(arr_3 [i_1 + 2])));
        var_18 = ((/* implicit */signed char) arr_3 [i_1 + 2]);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_19 -= max((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((arr_3 [i_2]) >= (arr_3 [i_2])))) : (((/* implicit */int) (unsigned short)63910)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_7 [i_2] [i_2])))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((signed char) (~((~(-1))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 3])) ? (arr_5 [i_2 - 2] [i_2]) : (((/* implicit */int) var_4))))) <= (((((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2 - 2])) % (var_14)))));
        /* LoopSeq 2 */
        for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_12 [(signed char)19] [i_3 + 1] [i_4])) & (arr_10 [i_3 + 2] [i_3 - 3] [i_4])));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) var_2);
                            var_24 = arr_5 [i_6 + 1] [10];
                            arr_21 [i_5] = ((/* implicit */unsigned short) arr_15 [7]);
                            var_25 = ((/* implicit */unsigned short) (~(arr_5 [i_2 - 1] [i_3 - 1])));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) (unsigned short)45429);
                var_27 += ((/* implicit */signed char) ((((/* implicit */int) var_0)) << ((((~(((/* implicit */int) var_13)))) + (46258)))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 3]))));
            }
            for (signed char i_7 = 2; i_7 < 24; i_7 += 4) /* same iter space */
            {
                var_29 |= ((/* implicit */unsigned long long int) ((int) ((int) var_9)));
                var_30 |= 0;
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 24; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) max((((((/* implicit */_Bool) 0)) ? (arr_17 [i_2] [19] [16ULL] [21ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10788))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_7 - 1] [(unsigned short)9]))))) ? (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_7])) ? (var_10) : (((/* implicit */unsigned long long int) arr_13 [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1042499896)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (signed char)84))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 2; i_10 < 24; i_10 += 4) /* same iter space */
            {
                var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11494))) - (max((((/* implicit */unsigned long long int) ((int) arr_3 [22ULL]))), (arr_28 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_3 - 4] [i_2] [i_3])))));
                var_34 = ((/* implicit */int) 18446744073709551603ULL);
            }
            var_35 = ((/* implicit */signed char) var_5);
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15795961810726927399ULL)) && (((/* implicit */_Bool) (signed char)38))));
        }
        for (signed char i_11 = 1; i_11 < 23; i_11 += 2) 
        {
            var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_11])), (arr_15 [i_2 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_11]))) ^ (arr_14 [i_2 - 1] [i_2 - 1] [(unsigned short)14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 525669064)))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))) && (((/* implicit */_Bool) max((var_14), (16537981445683575637ULL)))))))));
            var_38 = ((/* implicit */signed char) max((((int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_11]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_2])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    var_39 = ((/* implicit */signed char) arr_29 [i_2] [i_2] [i_2] [(signed char)8] [i_12] [13] [i_12]);
                    var_40 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_11 + 2] [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1] [(unsigned short)9]))));
                }
                arr_38 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_7 [i_2 + 1] [i_11 + 2])))))));
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1649836452)) ? (1624324244) : (((/* implicit */int) (unsigned short)55030))))) ? ((-(((/* implicit */int) (unsigned short)62828)))) : (((/* implicit */int) (unsigned short)28313))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 1; i_15 < 23; i_15 += 4) 
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2650782262982624231ULL) % (((/* implicit */unsigned long long int) arr_33 [i_15]))))) ? (((/* implicit */unsigned long long int) arr_33 [i_14])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2 - 1] [i_2]))) / (18407617474713229498ULL)))));
                        arr_46 [i_15] [5ULL] [i_12] [i_14] [i_14] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5791)) ? (0) : (1538673853))))));
                        var_44 = ((/* implicit */int) ((3ULL) + (39126598996322103ULL)));
                        var_45 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) % (((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_46 ^= ((/* implicit */signed char) arr_44 [(signed char)14]);
                    }
                    for (unsigned short i_16 = 1; i_16 < 24; i_16 += 1) 
                    {
                        var_47 += ((/* implicit */unsigned short) var_12);
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [1] [i_11 + 1] [i_12] [16])) ? (arr_34 [i_11] [i_11 - 1] [i_16] [i_14]) : (arr_34 [i_11 - 1] [i_11 + 2] [i_2] [16ULL])));
                    }
                }
                for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_49 = ((/* implicit */signed char) var_11);
                    var_50 = arr_13 [i_11];
                    arr_52 [i_2] [i_2 - 2] [i_17] [i_2 - 3] = ((/* implicit */int) var_11);
                }
                for (int i_18 = 3; i_18 < 23; i_18 += 4) 
                {
                    var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_2 - 3])) ? (arr_45 [i_2 - 3] [i_11 + 2] [i_18 - 2] [i_18 + 1] [i_12]) : (((/* implicit */int) var_13))));
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)32)) ? (arr_45 [i_2 - 1] [(unsigned short)13] [i_2 - 1] [i_12] [i_18 - 1]) : (((/* implicit */int) (signed char)-120))));
                    var_53 |= ((/* implicit */unsigned long long int) ((signed char) (signed char)45));
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 4; i_19 < 22; i_19 += 4) 
                    {
                        var_54 += ((/* implicit */unsigned short) ((arr_53 [i_2] [i_2 - 3] [i_2] [i_2 + 1] [i_2 - 3]) / ((-(((/* implicit */int) var_2))))));
                        var_55 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-71))) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (signed char)-126))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                        var_57 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)10)) >> (((((/* implicit */int) (unsigned short)17364)) - (17334)))));
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_18 + 1] [i_2 + 1])) ? (arr_37 [i_11 - 1] [i_11 + 2] [(signed char)15] [i_18 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_59 = ((/* implicit */unsigned long long int) max((var_59), (((((/* implicit */_Bool) arr_48 [i_2 - 2] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_11 + 2] [i_11 + 2]))) : (var_5)))));
                    }
                    var_60 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)19)) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -818976982)))) : (arr_2 [i_18] [i_12])));
                }
            }
            for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 1; i_22 < 23; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        {
                            arr_74 [i_2] [i_22] [i_2] [3] [(unsigned short)8] = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), (arr_19 [i_2] [4] [4])));
                            var_61 ^= ((/* implicit */signed char) ((((arr_55 [i_23]) >> (((((int) arr_71 [i_23] [i_22 + 2] [i_21] [i_2 - 2] [i_2 - 2] [i_23])) + (1367311462))))) > (arr_29 [i_2] [i_2] [i_11] [i_21] [i_22] [i_23] [i_23])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 24; i_24 += 2) 
                {
                    for (int i_25 = 0; i_25 < 25; i_25 += 4) 
                    {
                        {
                            var_62 = arr_31 [i_25];
                            arr_80 [8ULL] [1] [i_21] [i_11] [i_2] = (~((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)91)), (var_0)))))));
                            var_63 = ((((/* implicit */_Bool) arr_45 [i_2 + 1] [i_11] [i_21] [i_21] [(unsigned short)3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)35473)) != (((/* implicit */int) arr_35 [i_2 - 2]))))) : (((int) max(((signed char)94), (var_2)))));
                            var_64 = ((/* implicit */unsigned long long int) max((var_64), (max((arr_17 [i_2 + 1] [i_24 + 1] [i_21] [i_11 - 1]), ((+(var_14)))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned long long int i_26 = 3; i_26 < 24; i_26 += 2) /* same iter space */
    {
        var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) var_10))));
        var_66 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_44 [i_26 + 1])))) ? (((int) (signed char)-94)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_26 - 1])))))));
    }
}
