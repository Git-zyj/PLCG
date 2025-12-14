/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107761
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (11639225326854949863ULL)))) ? (1016917058U) : (((((/* implicit */_Bool) (signed char)117)) ? (var_12) : (1016917043U)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) arr_2 [3]);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1016917062U)) ? (((((/* implicit */_Bool) (-(arr_0 [17ULL])))) ? (var_1) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(short)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 3278050252U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1016917043U))))))));
        var_18 = ((/* implicit */unsigned long long int) 1016917051U);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) (_Bool)1))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 3]))) : (var_1)));
                        arr_15 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) arr_12 [i_1 + 1]));
                        var_21 = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_2]));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) (~((((_Bool)1) ? (var_7) : (((/* implicit */long long int) var_13))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_24 [i_1] [i_2] [i_2] [(unsigned char)1] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [(unsigned char)11])) ? (1016917043U) : (1201965658U)))));
                            arr_25 [i_1] [i_2] [i_1] [i_6] [i_2] [i_7] = ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_5] [i_6] [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                            arr_26 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)65))))));
                            arr_27 [i_1] [i_2] [i_1] [i_2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1201965637U)) ? (arr_20 [i_2] [i_1] [i_2 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1 + 1] [i_2 - 1])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_33 [i_1 + 1]) : (arr_6 [i_8] [i_2 + 3])));
                            var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_1 + 1]))));
                            arr_37 [i_2] [i_2] [i_8] [i_9] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1])));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3093001637U)) ? (((((/* implicit */_Bool) 2147483646)) ? (3311353376U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            arr_38 [i_1] [i_2] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1 + 1]))) : (var_1)));
                        }
                        var_26 = ((((/* implicit */_Bool) arr_16 [i_1] [i_2])) || (((/* implicit */_Bool) arr_17 [i_1] [i_2 + 3] [i_2])));
                    }
                } 
            } 
            var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
        }
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            arr_42 [i_1] [i_11] [i_11] &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
            var_28 += ((/* implicit */unsigned char) ((arr_30 [i_1] [i_11] [i_1 + 1]) ? (((/* implicit */int) arr_30 [i_1] [i_11] [i_1 + 1])) : (((/* implicit */int) arr_30 [18LL] [i_11] [i_1 + 1]))));
            var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_1 + 1] [(unsigned char)20] [i_1] [i_11])) - (((/* implicit */int) var_0))));
        }
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))))));
            arr_45 [(unsigned short)7] &= ((/* implicit */unsigned short) arr_17 [(unsigned char)20] [i_12] [i_12]);
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_12] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_12] [i_1 + 1] [i_1 + 1]))));
        }
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            arr_52 [i_13] [i_13] = ((/* implicit */long long int) ((unsigned char) 1016917047U));
            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14] [i_14] [i_13] [i_13] [i_13 + 1] [i_13])) ? (((/* implicit */int) arr_44 [i_13] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_23 [i_14] [i_14] [i_14] [i_13] [i_13 + 1] [i_13]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_33 [i_13 + 1]), (arr_33 [i_13 + 1])))) ? (((arr_33 [i_13 + 1]) - (arr_33 [i_13 + 1]))) : ((~(((/* implicit */int) (signed char)-113)))))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_13] [i_13]))))) == (min((((/* implicit */long long int) var_4)), (-14LL)))));
                var_35 = ((/* implicit */short) ((signed char) (-(((((/* implicit */_Bool) arr_33 [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
            }
            /* vectorizable */
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) arr_56 [(unsigned char)14] [i_15] [(unsigned char)18] [i_13 + 1])))))));
                var_37 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(signed char)18] [i_15] [i_17] [i_17])) % (((/* implicit */int) arr_11 [18LL] [i_15] [i_17] [(unsigned short)8]))));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                var_38 = ((((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 1])) ? (((((/* implicit */_Bool) arr_49 [i_13 + 1] [i_15])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1)))));
                arr_63 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_13] [i_15] [i_13] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_13] [i_13 + 1] [i_15] [i_13] [i_18]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) - (arr_19 [i_18] [i_18] [20ULL] [i_13])))));
                var_39 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) + (var_2))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767)))))));
            }
            var_40 += ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) arr_30 [i_15] [16ULL] [i_13]))) == ((+(((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (arr_48 [(short)6])));
            var_41 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (_Bool)1))), ((+(((/* implicit */int) (unsigned char)255))))))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */_Bool) 2982717759U)) || (((/* implicit */_Bool) (unsigned char)249)))))));
            var_42 = ((/* implicit */long long int) var_6);
        }
        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_5 [(unsigned short)21])), (var_3))) << (((max((1291364583U), (((/* implicit */unsigned int) (unsigned short)255)))) - (1291364531U)))))) ? (((((/* implicit */_Bool) arr_56 [i_13] [i_13] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) : (((arr_10 [i_13]) ? (((/* implicit */long long int) var_2)) : (arr_41 [i_13] [i_13 + 1] [i_13]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (max((((/* implicit */long long int) var_8)), (var_7)))))));
        /* LoopSeq 4 */
        for (int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 1; i_20 < 22; i_20 += 4) 
            {
                for (unsigned int i_21 = 2; i_21 < 22; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        {
                            arr_74 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))))) : (min((((/* implicit */unsigned int) arr_12 [i_13 + 1])), (var_13)))));
                            var_44 = ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */long long int) arr_14 [i_13] [i_19] [i_20] [(unsigned char)16] [i_13] [i_13])))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) var_4)));
                            var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_13] [i_21] [i_13])) || (((/* implicit */_Bool) var_3))))), (var_2))))));
                            arr_75 [i_13] [i_20] [i_20 + 1] [i_21] [(short)8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_56 [i_13] [i_20 + 2] [i_20 - 1] [i_21 - 1])))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_19] [i_19] [i_13])))))));
        }
        for (int i_23 = 0; i_23 < 24; i_23 += 2) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_12)), (arr_54 [i_13 + 1]))), (arr_54 [i_13 + 1])));
            var_48 &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) 1226637561U)));
        }
        for (int i_24 = 0; i_24 < 24; i_24 += 2) /* same iter space */
        {
            var_49 = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) ((var_0) && (((/* implicit */_Bool) -295614092790739660LL))))), ((unsigned short)65280)))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_53 [i_13] [i_13])) : (((/* implicit */int) max(((_Bool)1), (var_10))))))));
            arr_80 [i_13] [(short)13] [i_24] = arr_62 [i_13];
            arr_81 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_64 [i_13 + 1])), (arr_35 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 1])))) ? (((/* implicit */int) ((((8504255617184288504ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (min((((/* implicit */unsigned long long int) var_11)), (10927161221733581322ULL)))))) : (((/* implicit */int) (unsigned short)258))));
        }
        for (int i_25 = 0; i_25 < 24; i_25 += 2) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_69 [i_25] [i_25] [i_13]))));
            var_51 = var_10;
            arr_85 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)157))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_49 [i_13 + 1] [i_25])) ? (arr_76 [i_13 + 1] [i_13 + 1] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(unsigned char)17] [i_13] [(unsigned char)17])))))))));
            var_52 = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_13]))) + (var_2))));
        }
    }
    var_53 |= ((/* implicit */unsigned long long int) min((max((max((((/* implicit */int) var_8)), (-2147483646))), (((/* implicit */int) max((var_8), (var_11)))))), (((/* implicit */int) var_8))));
    var_54 = ((/* implicit */unsigned short) var_6);
}
