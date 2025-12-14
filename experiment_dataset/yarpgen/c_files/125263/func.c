/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125263
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
    var_10 |= ((/* implicit */unsigned long long int) min((var_0), (var_3)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
            {
                var_11 = ((/* implicit */unsigned char) arr_0 [i_1]);
                var_12 = ((/* implicit */unsigned char) (-(7515874815214122328LL)));
                arr_9 [i_2] [19ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10205674607837065685ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (1035518585360922680ULL)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [4ULL] [4ULL])))));
            }
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
            {
                arr_13 [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1]) > (arr_4 [i_3] [i_3])));
                var_13 = var_9;
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */int) ((signed char) arr_1 [i_4] [i_3]));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_8))));
                    arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (arr_0 [i_4])));
                }
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (arr_6 [i_1]))))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)3] [i_0]);
                    var_16 = ((/* implicit */signed char) ((unsigned char) var_5));
                    var_17 = ((/* implicit */long long int) ((arr_19 [i_0] [i_0] [(signed char)16] [(unsigned char)13]) <= (arr_19 [i_0] [i_1] [i_3] [i_5])));
                    var_18 = ((/* implicit */long long int) var_9);
                }
                arr_22 [i_0] &= ((/* implicit */int) var_6);
            }
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_24 [i_6] [i_1] [i_0] [i_0]));
                var_19 = ((/* implicit */unsigned char) (~(arr_6 [19])));
            }
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-52)) > (((/* implicit */int) (signed char)-30))));
            arr_27 [i_0] [i_1] [5ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            var_21 -= ((/* implicit */signed char) arr_1 [i_0] [i_1]);
        }
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (+(((long long int) arr_14 [i_7] [i_7] [i_7] [i_7]))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned long long int) var_2);
                        var_24 = max((((((/* implicit */_Bool) min((arr_0 [i_9]), (((/* implicit */unsigned long long int) (unsigned char)84))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_8])) && (((/* implicit */_Bool) arr_30 [i_9] [i_9]))))), (((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (var_5)))))));
                        var_25 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_6 [i_9])) ? (((/* implicit */unsigned long long int) 373977618021141330LL)) : (34359736320ULL))) - (((/* implicit */unsigned long long int) arr_31 [i_0] [i_7] [i_7]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        arr_38 [i_7] |= ((/* implicit */signed char) ((min((2544652493565133378ULL), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [9])))) | (min((((/* implicit */unsigned long long int) (unsigned char)2)), (16938740943858072746ULL)))));
                        var_26 |= ((/* implicit */unsigned char) -221198649403924921LL);
                    }
                } 
            } 
        }
        var_27 ^= ((/* implicit */int) (signed char)-106);
    }
    for (int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) ^ (9263234320001312195ULL))) > (((((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : (min((34359736320ULL), (((/* implicit */unsigned long long int) (unsigned char)34))))))));
        arr_41 [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)17))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1601155232)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (arr_11 [i_13] [i_13])));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)17)), ((unsigned char)206)));
                                arr_54 [i_15] [i_15] [i_15] [(unsigned char)16] [i_15] [22LL] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_20 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_14] [i_15]))))));
                                arr_55 [i_12] [i_13] [i_14] [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) arr_20 [17LL] [i_13] [i_13] [(signed char)19] [i_15] [9ULL]);
                                var_31 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_40 [i_16])), (var_3)))), (min((1508003129851478881ULL), (((/* implicit */unsigned long long int) (signed char)-1)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-7919247366784690330LL), (((/* implicit */long long int) var_0)))))))))));
                                var_32 = ((/* implicit */unsigned char) min((max((min((arr_29 [(unsigned char)9] [(unsigned char)0] [i_14]), (arr_35 [i_13] [i_14] [i_16]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_16])) ? (var_3) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_25 [i_12] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (arr_45 [i_16] [i_15] [i_13])))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) arr_23 [i_12] [i_12]);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
    {
        arr_60 [i_17] [i_17] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))) * (min((((/* implicit */unsigned long long int) (unsigned char)149)), (arr_19 [i_17] [i_17] [i_17] [i_17]))));
        arr_61 [i_17] [i_17] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((long long int) var_2))) * (((unsigned long long int) arr_59 [2] [i_17])))), (arr_59 [i_17] [i_17])));
        var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_17] [i_17])), ((-(var_0)))));
        arr_62 [i_17] = ((/* implicit */signed char) (((-(848010240186002616LL))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned char) var_6);
    }
    for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 13; i_22 += 4) 
                        {
                            {
                                var_35 = ((arr_37 [i_18] [i_19] [i_19]) - (18446744073709551615ULL));
                                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) arr_8 [i_20])))))));
                                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_22] [i_21] [i_20])) ? (arr_66 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40))))))));
                                var_38 = ((arr_72 [i_18]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)229))))));
                            }
                        } 
                    } 
                    arr_77 [i_18] [i_18] [i_18] [i_18] = ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_18] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_18]))) : (-373977618021141308LL))))));
                    var_39 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)5)), (arr_11 [i_19] [i_19])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) | (2688257731331085810ULL))))));
                }
            } 
        } 
        var_40 = ((/* implicit */long long int) ((min(((!(((/* implicit */_Bool) (unsigned char)139)))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_8 [i_18])))))) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(var_0)))) && (((/* implicit */_Bool) arr_36 [i_18] [i_18] [i_18] [(unsigned char)13] [i_18] [i_18])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 0; i_23 < 14; i_23 += 4) 
    {
        var_41 = ((/* implicit */signed char) (~(arr_59 [i_23] [i_23])));
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_23] [i_23] [i_23])) || (((/* implicit */_Bool) arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
    }
    var_43 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? ((+(((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1515279532231707283LL)) != (var_6)))) >= ((-(((/* implicit */int) var_4)))))))));
}
