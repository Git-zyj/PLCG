/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18480
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
    var_18 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_5)))));
                var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8795958804480LL)) ? (-8795958804480LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12741))))) % (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_4 [i_1] [i_1 + 1] [i_1 + 3]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(-5292464626601312420LL)));
            }
        } 
    } 
    var_21 = (~(var_9));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (+(var_13)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (+(var_8)));
            var_24 ^= ((/* implicit */unsigned long long int) (-(((var_16) ? (var_10) : (var_8)))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)8))));
            var_26 = ((/* implicit */long long int) ((signed char) var_16));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_27 -= ((/* implicit */long long int) (~(((/* implicit */int) var_17))));
            var_28 *= ((/* implicit */unsigned char) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_5] [i_2])) < (((/* implicit */int) var_1))))))));
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_29 ^= ((/* implicit */long long int) var_0);
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(arr_9 [22ULL] [18] [i_6]))))));
                var_31 = ((/* implicit */long long int) arr_9 [i_2] [i_5] [14LL]);
            }
            for (int i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                var_32 += ((/* implicit */_Bool) arr_15 [i_2] [i_5]);
                var_33 = ((/* implicit */long long int) (~(arr_9 [i_2] [i_2] [i_7 + 4])));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((arr_13 [i_7 + 1] [i_7] [i_7 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_2]))))))));
                var_35 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_36 -= ((/* implicit */unsigned long long int) ((signed char) var_7));
                            var_37 = ((/* implicit */int) 11805753052643611485ULL);
                            var_38 = ((/* implicit */int) 8795958804480LL);
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */long long int) -167265235)) < (-8795958804475LL))))));
                            var_40 = ((/* implicit */unsigned char) ((unsigned int) arr_28 [i_8] [i_8 - 1] [i_8] [i_8] [i_9 + 4]));
                        }
                    } 
                } 
                var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -260774372411705220LL))));
            }
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    var_42 = ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_1))));
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [17] [1ULL])) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_16)))))));
                }
                var_44 |= ((/* implicit */unsigned char) ((unsigned int) (short)12741));
            }
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) arr_38 [i_13] [i_13] [i_15]);
                            var_46 = ((long long int) arr_22 [i_13]);
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_14] [i_5] [i_2])) ? (((var_16) ? (((/* implicit */int) var_11)) : (2091165829))) : (((/* implicit */int) ((_Bool) var_10)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 24; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            arr_49 [i_2] [i_5] [i_13] [i_13] [i_16] [i_17] = ((/* implicit */signed char) ((unsigned short) var_7));
                            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_5] [i_16 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [10LL] [0ULL] [i_16] [i_16 + 1] [i_16] [i_17 + 1]))) : (arr_46 [i_13] [i_13] [i_13] [i_16 + 1] [i_16]))))));
                        }
                    } 
                } 
                var_49 += ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-12742))));
                var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)12741)) <= (((/* implicit */int) (signed char)-1))))) << (((var_10) - (921586610)))));
            }
        }
        for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    {
                        arr_57 [i_2] [i_2] [i_19] [i_19] [i_2] = ((/* implicit */unsigned int) (short)12735);
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((max((((/* implicit */unsigned int) var_10)), (arr_30 [i_20] [i_19] [i_18 - 2] [i_18 + 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */signed char) var_16)))))))))));
                        var_52 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_56 [(signed char)22] [i_18 - 1] [i_18 - 2] [i_18 - 2])), (((var_7) ^ (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_12))))));
                    }
                } 
            } 
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_0)))))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 24; i_21 += 2) 
            {
                for (unsigned long long int i_22 = 3; i_22 < 24; i_22 += 3) 
                {
                    {
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36733)) ? (((/* implicit */int) (_Bool)0)) : (-112617180)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 1) 
                        {
                            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)7680)))))));
                            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((min((arr_9 [i_21] [i_21 - 1] [i_21]), (((/* implicit */int) var_1)))) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_2])) - (117))))))));
                        }
                        for (unsigned short i_24 = 0; i_24 < 25; i_24 += 3) /* same iter space */
                        {
                            var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_67 [i_22 - 2] [i_22 - 3] [i_22 - 2] [i_22 + 1] [i_22]))))))));
                            var_58 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)-12741)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_53 [i_2] [i_18 + 2] [i_18 + 1])))) : (((((/* implicit */_Bool) var_14)) ? (arr_46 [7] [14ULL] [i_18 + 1] [i_18 + 2] [i_18 - 2]) : (arr_46 [i_18 - 2] [i_18 - 1] [i_18 - 1] [i_2] [(_Bool)1])))));
                            var_59 = ((/* implicit */signed char) arr_51 [i_2] [i_2] [i_2]);
                            var_60 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12741)) ? (((/* implicit */int) arr_47 [i_2] [i_18] [i_21] [i_22] [i_18] [i_22 - 3] [i_2])) : (1815010741)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_52 [i_2] [i_18] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_24] [i_2])))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)15)) & (((/* implicit */int) (unsigned short)44803)))))) : (var_8)));
                        }
                        for (unsigned short i_25 = 0; i_25 < 25; i_25 += 3) /* same iter space */
                        {
                            var_61 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                            arr_70 [i_25] [i_21] [i_25] [i_22 - 2] [i_2] [i_25] [i_18 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_21 - 1] [i_21 - 1] [i_21])) ? (arr_45 [i_21 - 1] [i_18] [i_22]) : (arr_45 [i_21 - 1] [i_18] [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_45 [i_21 - 1] [13ULL] [13ULL])))) : (((unsigned long long int) arr_45 [i_21 - 1] [i_25] [(unsigned char)14]))));
                        }
                    }
                } 
            } 
            var_62 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_1)))))) : (min((((/* implicit */unsigned long long int) arr_38 [i_2] [i_18 - 2] [i_18 - 2])), (var_7)))));
        }
        var_63 = ((var_10) != (((((/* implicit */int) var_11)) << (((var_7) - (10122354189472370261ULL))))));
        var_64 = ((/* implicit */long long int) arr_16 [i_2] [i_2]);
        var_65 |= ((unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_9)))));
    }
}
