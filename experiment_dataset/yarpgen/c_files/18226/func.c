/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18226
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
    var_20 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) max((992146393), (((/* implicit */int) (signed char)100))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (211106232532992ULL))) : (((/* implicit */unsigned long long int) min((-8836185595521177431LL), (var_15)))))));
    var_21 = ((/* implicit */unsigned short) min(((-(2251799813685247ULL))), (((min((1931142531248467879ULL), (((/* implicit */unsigned long long int) var_12)))) >> ((((~(((/* implicit */int) var_6)))) - (23856)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (+((+((-(((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned short)12] [i_2]))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) % (arr_2 [i_0]));
                    var_23 = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_0])) & (-992146379)))));
                    var_24 = ((/* implicit */signed char) ((unsigned short) (+(min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_0))))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)19))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))))) | ((~(899368581948390883ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) : (18446744073709551610ULL)));
                                var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [(unsigned short)14] [(unsigned short)14]))))) + (((-6038424839929070602LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) -6800234567433541676LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) arr_17 [i_3] [(_Bool)1])) : (1931142531248467883ULL)))) && (((/* implicit */_Bool) 4503599627370488LL))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_29 [i_3] [i_8] [i_3] [i_8] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) + (max((var_17), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) var_14))));
                                var_28 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) ((short) var_3))) % ((+(((/* implicit */int) (unsigned char)236))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_3] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) var_4)) : (arr_27 [i_3] [i_3] [(short)10] [(short)10] [i_3]))), (min((((/* implicit */long long int) var_13)), (arr_27 [i_3] [i_3] [i_3] [i_3] [i_3])))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 18; i_12 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [(unsigned short)6]), (arr_19 [(_Bool)1])))) ? (min((((/* implicit */long long int) arr_14 [14])), (arr_20 [i_10] [16LL] [i_10] [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [(short)4])))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 4; i_13 < 18; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            {
                                arr_46 [8LL] [8LL] [i_12] [8LL] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (949491580) : (((/* implicit */int) arr_34 [i_14])))), (((((/* implicit */_Bool) arr_23 [i_14] [i_13] [i_12 + 1] [i_11] [i_10])) ? (((/* implicit */int) arr_23 [i_10] [7] [i_10] [i_10] [i_10])) : (((/* implicit */int) var_1))))));
                                arr_47 [i_10] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)8188))) != ((+(max((var_15), (((/* implicit */long long int) (unsigned char)213))))))));
                                var_30 = ((/* implicit */unsigned int) ((short) var_1));
                                var_31 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_10] [i_11] [i_12 + 1] [i_10] [i_10]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2966361204U)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_15 = 2; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((int) -6038424839929070602LL)), (((/* implicit */int) max((((/* implicit */signed char) arr_25 [i_10] [i_11] [i_12] [i_15])), ((signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_10] [i_10] [i_12 + 1] [i_15] [i_15]))))) ? (((arr_20 [i_15] [i_15] [i_15 - 1] [i_15] [i_12 - 1] [i_15] [i_10]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20910))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (arr_35 [7ULL] [13ULL] [i_12 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [16] [i_11] [i_15 + 1])))));
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
                        {
                            arr_53 [i_10] [i_10] [i_11] [(short)2] [i_11] [(short)2] [i_16] = ((/* implicit */short) (~((+(((/* implicit */int) arr_45 [(unsigned char)4] [i_11] [(unsigned char)4] [(unsigned char)4] [i_15]))))));
                            arr_54 [i_10] [13U] [i_12] [i_15 + 1] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_37 [i_10]))));
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [i_11] [i_12 + 1] [i_12 + 1]))))), (((unsigned long long int) arr_40 [i_10] [i_10] [i_10]))));
                        }
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) arr_31 [i_10] [i_10])))) ? (((/* implicit */int) arr_56 [(unsigned short)14] [i_11] [i_12 - 1])) : (((((/* implicit */int) (unsigned short)20901)) << (((((/* implicit */int) (unsigned short)44625)) - (44617)))))))));
                            arr_58 [i_10] [(_Bool)1] [i_12 + 1] [i_11] [i_10] [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_18) != (((/* implicit */int) (short)9310)))))) != (max((((/* implicit */long long int) (_Bool)0)), (arr_24 [i_10] [i_10] [0U] [0U] [i_17] [(unsigned char)15]))))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) var_15);
                            arr_62 [i_10] [i_18] = ((/* implicit */unsigned short) arr_14 [i_18]);
                            var_36 = ((/* implicit */unsigned int) ((var_0) < (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)20910))) * (((((/* implicit */int) arr_28 [i_10] [i_11] [i_11] [i_15 - 2] [i_11] [i_18] [i_10])) * (((/* implicit */int) arr_51 [i_10] [i_10] [(short)5] [i_15 - 2] [i_10] [i_11] [(_Bool)1])))))))));
                        }
                    }
                    for (long long int i_19 = 2; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_40 [i_19 - 2] [i_11] [i_12])), (arr_31 [i_11] [i_11]))) >> (((arr_43 [i_10] [i_10] [i_12] [i_19 - 2]) + (6998143396990844154LL)))))) : ((~(((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_43 [i_10] [i_11] [i_12 - 1] [i_11])))))));
                        var_38 &= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12779412627417569044ULL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 1; i_20 < 18; i_20 += 3) 
                        {
                            var_39 = ((((/* implicit */_Bool) max((-704239724), (((/* implicit */int) arr_49 [i_12 - 1] [i_12 - 1] [i_20 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((arr_43 [i_10] [i_10] [i_10] [i_10]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : ((((!(((/* implicit */_Bool) arr_43 [i_10] [i_11] [i_12 + 1] [i_20 + 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)47318))))) : (arr_39 [3] [i_12]))));
                            arr_69 [1ULL] [i_11] [i_12 + 1] [1ULL] [i_20] = ((/* implicit */unsigned char) min((max((arr_21 [i_20] [i_19 - 1] [i_12 + 1] [i_12 + 1] [i_10] [i_10]), (arr_21 [i_10] [i_10] [i_10] [i_19 + 1] [i_10] [i_10]))), (((/* implicit */short) var_10))));
                            var_40 = ((/* implicit */unsigned short) (-(-1804190987)));
                            var_41 = ((/* implicit */signed char) (unsigned short)41220);
                        }
                        var_42 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_34 [i_11])), (var_11)))), (((arr_55 [i_10] [(signed char)3] [i_11] [i_10] [18ULL] [(short)8]) - (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (var_11)))) && (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_60 [i_10] [7ULL] [14U] [i_12 + 1] [15U])))))))));
                    }
                    arr_70 [i_10] = ((/* implicit */unsigned long long int) min((-2034691158), (((((/* implicit */int) (signed char)51)) & (((/* implicit */int) (signed char)51))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) (~(arr_73 [i_10] [i_21])));
            var_44 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5581272374707596433ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL))))) : (((/* implicit */int) arr_66 [i_10] [i_10] [i_10]))));
            arr_74 [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122)))))));
        }
        /* vectorizable */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            arr_77 [i_10] [0LL] [i_22] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(var_2))))));
            var_45 = ((short) arr_75 [17LL]);
            var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_10] [i_10] [9] [i_10] [i_22] [i_22]))));
            arr_78 [i_22] = ((/* implicit */unsigned long long int) ((arr_60 [i_10] [i_22] [i_22] [i_10] [i_22]) == (((/* implicit */long long int) ((/* implicit */int) arr_40 [(_Bool)1] [(_Bool)1] [i_10])))));
            var_47 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned int i_23 = 2; i_23 < 15; i_23 += 2) 
        {
            var_48 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_23]))));
            var_49 = ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((signed char) (signed char)110))) : (((((((/* implicit */_Bool) arr_18 [i_23])) ? (((/* implicit */int) arr_50 [i_23])) : (((/* implicit */int) arr_38 [i_10] [i_23 - 1] [i_23])))) + (((((/* implicit */_Bool) (unsigned short)41743)) ? (((/* implicit */int) arr_68 [(signed char)5] [(signed char)5] [i_23] [i_23] [i_23 + 3] [(signed char)5] [i_23 + 3])) : (((/* implicit */int) arr_81 [i_10] [i_10] [i_10])))))));
            arr_82 [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_68 [i_10] [i_10] [i_10] [i_23 + 1] [i_23 - 1] [i_23 + 4] [i_23 - 2]), (arr_34 [i_10]))))));
            arr_83 [i_10] [i_10] [6LL] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)12972)), (6939936642432741136LL))) - (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)251)) ? (-377257366) : (((/* implicit */int) (short)19071)))), ((+(((/* implicit */int) (unsigned short)58255)))))))));
        }
    }
}
