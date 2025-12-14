/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103122
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
    var_19 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(short)10] &= ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (_Bool)1)));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (unsigned char)173)), (2657282410614050395ULL)))));
                                var_21 = ((/* implicit */signed char) (_Bool)1);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 2] [i_1] [i_2] [i_3] [i_4])) == ((-(((/* implicit */int) (_Bool)1))))));
                                var_22 &= ((/* implicit */unsigned short) max((arr_1 [(unsigned char)18] [i_3]), (((/* implicit */short) max((((4802538832139658341ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_3]))))), (arr_6 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2]);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((var_18), ((short)10481))))));
                            arr_22 [i_0] [i_1] [14LL] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_0] [i_0]))));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_6 - 1] [i_0 - 1]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_5] [i_2]))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_1] [i_0 - 1] [17ULL] [i_7])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_7])))) : (((/* implicit */int) var_13))));
                            arr_27 [i_2] [i_2] [i_0] = ((/* implicit */signed char) (-(7860940570363727107LL)));
                            var_24 = ((/* implicit */unsigned short) (short)11608);
                            arr_28 [i_0 - 1] [i_1 + 2] [(short)1] [i_0] [(signed char)7] = ((/* implicit */signed char) arr_8 [i_0] [i_5] [i_0]);
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                        arr_30 [i_0] = ((/* implicit */_Bool) min((arr_15 [i_1] [i_0]), (var_6)));
                        var_25 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 2] [i_1] [i_1]))))));
                        var_26 *= (((((_Bool)1) ? (-4811884041942868507LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (min((((/* implicit */long long int) (_Bool)1)), ((~(-881428528167642728LL))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_2] [i_8] [7LL] [(unsigned short)14] = ((/* implicit */unsigned long long int) var_5);
                        var_27 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0 + 1]);
                    }
                    var_28 = ((/* implicit */short) min((var_28), ((short)423)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */short) arr_9 [i_0 + 1] [i_0] [i_0]);
                        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_9]))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_33 [i_0] [i_2] [i_2] [i_9]);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0] [i_0])) % ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) var_11);
                        var_33 = ((/* implicit */unsigned long long int) arr_36 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]);
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)14627)) : (((/* implicit */int) (short)-10980))));
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 19; i_14 += 4) 
                    {
                        for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_35 += ((/* implicit */_Bool) arr_54 [i_15] [i_12 - 1]);
                                arr_55 [i_11] [1ULL] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
                                var_36 += ((/* implicit */signed char) arr_51 [i_15] [i_11] [i_14 - 1] [i_13] [i_11] [i_11] [i_11]);
                                var_37 = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)98)), ((short)-1191)));
                                arr_56 [i_11] [i_12] [i_14 + 1] [i_14] [i_14] [i_15] = max((((/* implicit */short) (signed char)-51)), ((short)-19667));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 4; i_16 < 21; i_16 += 3) /* same iter space */
                    {
                        var_38 |= ((/* implicit */_Bool) (((~(arr_44 [i_11]))) | (((((/* implicit */_Bool) var_13)) ? (arr_44 [i_16 - 4]) : (((/* implicit */unsigned long long int) arr_57 [i_13]))))));
                        arr_59 [i_11] [i_13] [i_16] [i_16] = ((/* implicit */long long int) min(((~((-(((/* implicit */int) arr_52 [i_11] [i_12] [i_16] [i_16] [(unsigned char)19])))))), (((/* implicit */int) max((arr_50 [i_11] [i_11] [i_12] [i_13] [i_13] [i_13]), ((short)6780))))));
                        var_39 ^= ((/* implicit */unsigned long long int) var_13);
                        var_40 = var_14;
                    }
                    for (unsigned long long int i_17 = 4; i_17 < 21; i_17 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                        var_42 = ((/* implicit */unsigned char) var_5);
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */signed char) var_18);
        var_45 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_47 [i_11] [i_11] [(unsigned char)8] [i_11])) ? (((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_11]))))));
    }
    for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_46 += ((/* implicit */unsigned char) arr_24 [i_18] [i_18 - 1] [i_18] [i_19] [i_19]);
            arr_69 [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-10803))));
            /* LoopSeq 2 */
            for (signed char i_20 = 2; i_20 < 12; i_20 += 4) 
            {
                var_47 = ((/* implicit */_Bool) var_5);
                var_48 |= ((/* implicit */unsigned char) arr_14 [i_18] [i_18]);
                arr_72 [i_18] [i_18] [i_19] [i_20 - 1] = ((/* implicit */short) (((~(((((/* implicit */int) arr_12 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18])) << (((((/* implicit */int) (signed char)(-127 - 1))) + (157))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-29824)) == (((/* implicit */int) (short)-24405))))) < (((/* implicit */int) var_18)))))));
                var_49 = ((/* implicit */unsigned long long int) arr_14 [i_18 + 1] [i_19]);
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 3; i_21 < 12; i_21 += 2) 
            {
                var_50 = ((/* implicit */unsigned short) var_6);
                var_51 = ((/* implicit */unsigned long long int) arr_33 [(_Bool)1] [i_19] [(unsigned char)4] [(unsigned char)4]);
                var_52 = ((/* implicit */_Bool) arr_37 [i_18]);
            }
            var_53 = ((/* implicit */_Bool) arr_1 [i_18] [i_18]);
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            var_54 = ((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_18] [i_22] [i_18] [i_18] [i_18] [i_18])) ^ (((/* implicit */int) arr_60 [i_22] [i_18] [i_22] [i_18] [i_18] [i_18]))));
            var_55 = ((/* implicit */unsigned long long int) arr_35 [i_18] [i_18] [i_18 - 1] [i_18]);
        }
        arr_79 [i_18] = ((/* implicit */_Bool) var_1);
    }
}
