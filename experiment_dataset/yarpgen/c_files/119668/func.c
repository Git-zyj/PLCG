/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119668
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_12 *= ((/* implicit */signed char) (~(max((-6975257752176560289LL), (((/* implicit */long long int) (unsigned short)2040))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)22195)) << ((((~(arr_0 [i_0]))) - (1737926086)))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [(short)16]), (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [14] [i_0]))) : (var_0))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_2 [(signed char)18] [i_1]))) | (((/* implicit */int) var_6)))))));
            var_15 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63481))))))));
        }
        for (int i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_16 &= ((/* implicit */short) min(((-(((/* implicit */int) arr_8 [i_2 + 1] [i_2])))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_6)))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) (+(((unsigned int) (unsigned short)49021))));
                    arr_15 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [i_2] [(unsigned short)2] = ((/* implicit */short) ((unsigned int) ((int) min((((/* implicit */unsigned char) var_4)), (var_8)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((short) arr_2 [i_0] [i_0]));
                        arr_22 [i_0] [i_2] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                    }
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_20 [i_5] [i_3] [i_2] [i_0] [(unsigned char)22]))));
                    var_20 = ((/* implicit */int) 1369876966521925779ULL);
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_21 = ((/* implicit */int) var_7);
                    arr_26 [i_0] [i_2 - 1] [i_3] [i_7] = ((/* implicit */unsigned int) max((var_1), (var_1)));
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_22 = ((/* implicit */int) var_10);
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_8])) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)120)))))))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((2030531791U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2040)))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 24; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((int) var_8)) / (max((((/* implicit */int) var_8)), (arr_16 [i_0] [i_2 + 1] [i_9 - 3] [i_2])))));
                            arr_37 [(short)13] [i_2 + 1] [i_10] [i_9] [i_10] [i_0] [i_9] = ((/* implicit */signed char) ((short) (unsigned short)2040));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_8))));
                            var_27 = ((unsigned int) arr_6 [i_0]);
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_9] [i_10]))))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63496))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_29 = ((/* implicit */signed char) arr_5 [i_2 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    for (int i_13 = 3; i_13 < 24; i_13 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_27 [i_0] [i_2] [i_13]))));
                            arr_46 [i_0] [i_2] = ((/* implicit */short) (+(arr_14 [i_2] [i_2] [i_2 - 1] [i_12] [i_12])));
                        }
                    } 
                } 
                var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_11] [i_0] [i_2 - 1])) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_2))))));
                var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)203)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4223))) : (1369876966521925794ULL)))));
            }
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            var_33 = ((/* implicit */unsigned int) ((-6476585219449307142LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (arr_19 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8))))));
            var_35 = ((((/* implicit */int) arr_11 [i_14] [i_14] [i_14] [18ULL])) - (((((/* implicit */int) (signed char)32)) / (((/* implicit */int) (signed char)82)))));
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_21 [i_0] [(unsigned short)10]))));
        }
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned int) (short)7273);
        /* LoopSeq 2 */
        for (unsigned char i_16 = 1; i_16 < 23; i_16 += 1) 
        {
            var_38 *= ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_15] [i_15] [i_15] [i_15]))) & (var_10))) ^ (var_10))) & (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */int) (_Bool)0)))))));
            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)48))));
            arr_56 [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_16 + 2])) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [0])) ? (arr_19 [i_16]) : (var_0)))) ? (((((/* implicit */_Bool) 543402027)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27109))) : (-6476585219449307142LL))) : (((/* implicit */long long int) var_2))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            var_40 ^= ((/* implicit */unsigned short) var_5);
            var_41 = ((/* implicit */unsigned short) ((-6476585219449307142LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_15] [18LL] [i_17] [i_17])) ? (((/* implicit */int) ((var_2) >= (var_2)))) : ((~(var_2))))))));
        }
        arr_61 [i_15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -271713184)), (((((/* implicit */_Bool) (short)-12829)) ? (((((/* implicit */unsigned long long int) 783109456)) % (17377913950192365713ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2852))))))))));
        var_42 = ((/* implicit */unsigned long long int) ((unsigned char) 1369876966521925791ULL));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
    {
        arr_65 [i_18] [i_18] = ((/* implicit */int) (!(((var_2) == (((/* implicit */int) var_1))))));
        arr_66 [i_18] = (+(-759254828));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            for (int i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                for (long long int i_21 = 3; i_21 < 22; i_21 += 2) 
                {
                    {
                        arr_76 [(_Bool)1] [i_18] [i_19] [i_21 - 3] = ((/* implicit */unsigned int) ((unsigned short) arr_67 [i_18]));
                        arr_77 [i_19] [(short)11] = ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) arr_73 [i_19] [i_20 - 1] [i_20 + 2] [i_21] [i_21 - 2] [i_21 + 1])) : (((((/* implicit */int) (short)2857)) ^ (((/* implicit */int) var_1))))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_14 [i_18] [i_19] [i_19] [i_20] [i_21])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_34 [i_18] [i_20] [i_21 + 2])) ? (((/* implicit */int) arr_44 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_42 [i_19] [i_19] [i_20] [i_21]))))));
                    }
                } 
            } 
        } 
        var_44 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [(unsigned char)0] [i_18] [i_18] [(unsigned char)0])) ? (((/* implicit */int) arr_42 [(short)4] [i_18] [i_18] [(short)4])) : (((/* implicit */int) arr_42 [24] [i_18] [i_18] [i_18]))));
        var_45 = ((/* implicit */signed char) var_5);
    }
    for (int i_22 = 0; i_22 < 25; i_22 += 3) /* same iter space */
    {
        var_46 ^= ((/* implicit */short) (+(max((((/* implicit */int) arr_38 [i_22] [14] [i_22] [i_22])), (((((/* implicit */_Bool) (unsigned short)63481)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))));
        /* LoopNest 3 */
        for (short i_23 = 0; i_23 < 25; i_23 += 3) 
        {
            for (short i_24 = 1; i_24 < 24; i_24 += 2) 
            {
                for (long long int i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    {
                        var_47 = ((/* implicit */int) ((-249182151) <= (1310869045)));
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 25; i_26 += 1) 
                        {
                            var_48 += ((/* implicit */int) (((~(var_0))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_91 [i_22] [i_25] [18LL] [i_23] [i_22] = ((/* implicit */signed char) var_0);
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) var_3))));
                        }
                        arr_92 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_22] [i_24]))) + (arr_43 [i_22] [i_23] [i_22] [i_25]))) - (((/* implicit */unsigned long long int) max((1614741261U), (((/* implicit */unsigned int) (short)-2847))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)24038)))))))));
                    }
                } 
            } 
        } 
    }
    var_51 *= ((/* implicit */unsigned long long int) var_7);
    var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
}
