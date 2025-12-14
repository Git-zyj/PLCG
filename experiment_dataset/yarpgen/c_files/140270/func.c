/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140270
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_11 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (~(2728899260U)));
                            var_17 = (short)-13576;
                        }
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1566068035U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]))) : (9223372036854775807LL)))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28466)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)-13565))));
            var_20 = ((/* implicit */short) 1566068039U);
        }
        for (unsigned short i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
        {
            arr_20 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-19)))));
            arr_21 [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18144544024665621015ULL)) ? (arr_16 [i_5] [i_7] [i_7]) : (((/* implicit */int) (unsigned short)353)))) >= (((/* implicit */int) var_11))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
        }
        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
        {
            arr_25 [i_5] [i_5] [22U] &= ((/* implicit */unsigned int) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [(unsigned char)8] [i_8] [i_8])) >= (((/* implicit */int) (signed char)-17))))))));
            var_22 ^= arr_13 [i_5];
        }
        for (unsigned short i_9 = 2; i_9 < 23; i_9 += 3) /* same iter space */
        {
            arr_28 [i_9] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_5])) ? (arr_26 [i_5] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5]))))));
            var_23 = ((/* implicit */signed char) (-(arr_14 [i_5])));
            var_24 = ((/* implicit */unsigned short) var_4);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 23; i_11 += 1) 
                {
                    {
                        arr_34 [i_9] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_16 [i_5] [i_10] [i_11])) != (var_7)));
                        arr_35 [i_5] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        arr_36 [i_5] [i_9] [i_9] [i_11] = ((/* implicit */long long int) arr_15 [i_5]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        var_26 &= ((/* implicit */_Bool) arr_42 [i_14] [i_13] [i_12] [i_5]);
                        arr_44 [i_5] [i_12] [i_5] [i_5] = ((/* implicit */long long int) 9410571858771518979ULL);
                    }
                } 
            } 
        } 
        var_27 = ((((/* implicit */_Bool) ((short) 2728899265U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 15U)) != (arr_42 [i_5] [i_5] [i_5] [i_5]))))) : (arr_41 [(signed char)22]));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                arr_50 [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18144544024665621011ULL)) ? (arr_22 [i_5] [i_15] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (337701587481200645LL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    var_28 |= ((/* implicit */unsigned short) (~((-(arr_30 [i_5] [i_15] [i_16])))));
                    var_29 = ((/* implicit */short) arr_52 [i_17] [i_17] [i_17] [i_17 + 1]);
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_32 [i_15] [i_16] [i_16] [i_17 + 4])))))));
                        var_31 = ((/* implicit */short) (signed char)-111);
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_45 [i_15]))));
                    }
                }
                for (short i_19 = 2; i_19 < 23; i_19 += 3) 
                {
                    var_33 = ((/* implicit */long long int) (~(arr_41 [i_19])));
                    /* LoopSeq 3 */
                    for (int i_20 = 2; i_20 < 22; i_20 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_12))))));
                        arr_64 [i_15] [i_19] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-46)))) ? (3755425132U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)120)) || (((/* implicit */_Bool) var_7))))))));
                    }
                    for (signed char i_21 = 3; i_21 < 22; i_21 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_5] [i_15] [i_16] [i_19]))));
                        arr_68 [i_19] [i_15] [i_16] [i_19] [i_21] = ((/* implicit */signed char) 2360274979789042407LL);
                        var_36 *= ((/* implicit */_Bool) (~(302200049043930617ULL)));
                    }
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        var_37 = ((/* implicit */int) arr_23 [i_5]);
                        var_38 &= ((/* implicit */signed char) ((int) arr_33 [i_16] [i_19] [i_19 - 1] [i_19]));
                        var_39 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
                        var_40 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 302200049043930617ULL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                }
                arr_72 [i_5] [i_5] [i_15] [i_16] = ((/* implicit */long long int) ((unsigned char) 9223372036854775807LL));
            }
            arr_73 [i_5] = ((/* implicit */unsigned short) (~(302200049043930577ULL)));
            var_41 &= ((/* implicit */unsigned short) (-(((unsigned long long int) (signed char)100))));
        }
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) -690759223134838758LL);
            var_43 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (8935141660703064064LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_44 = ((/* implicit */int) var_1);
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) 
        {
            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) & (7392032503164362244ULL)))) ? (arr_60 [i_25] [22LL] [22LL] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7392032503164362234ULL)))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_26 = 1; i_26 < 22; i_26 += 3) /* same iter space */
            {
                var_46 ^= ((/* implicit */long long int) (short)5911);
                arr_83 [i_24] [i_24] [i_26] = ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned long long int i_27 = 1; i_27 < 22; i_27 += 3) /* same iter space */
            {
                arr_88 [i_24] [i_24] [i_27] = ((/* implicit */short) ((unsigned short) ((arr_77 [i_27] [i_25]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_24] [i_25] [i_27] [i_27]))))));
                var_47 = ((/* implicit */signed char) var_12);
                var_48 &= ((/* implicit */unsigned short) arr_53 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]);
                var_49 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) 4179350245U)) >= (var_4))))));
            }
            var_50 = ((/* implicit */_Bool) (~(((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
            var_51 = ((/* implicit */unsigned long long int) var_4);
        }
        /* LoopSeq 2 */
        for (unsigned char i_28 = 2; i_28 < 23; i_28 += 3) 
        {
            var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            var_53 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (8548623154463802883ULL)));
        }
        for (long long int i_29 = 0; i_29 < 24; i_29 += 2) 
        {
            var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_29])) ? (1446238430U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_84 [i_29] [i_24] [i_24]))))));
            var_55 -= ((/* implicit */unsigned long long int) var_5);
            var_56 &= ((/* implicit */unsigned char) (~(-611143701625694458LL)));
        }
        var_57 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_23 [i_24])) <= (((/* implicit */int) (_Bool)1))))));
        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (302200049043930611ULL)))));
        arr_93 [i_24] = ((/* implicit */unsigned int) (~(((302200049043930611ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    }
    for (unsigned long long int i_30 = 0; i_30 < 19; i_30 += 3) 
    {
        var_59 = ((/* implicit */unsigned short) ((((_Bool) (unsigned char)154)) ? (((((/* implicit */_Bool) 2148100835U)) ? (((/* implicit */unsigned long long int) 2993842461723834737LL)) : ((-(6918819109046988318ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))));
        var_60 ^= ((/* implicit */unsigned short) -2993842461723834738LL);
    }
    var_61 += ((/* implicit */unsigned char) ((short) -2949502940569569437LL));
    var_62 += ((/* implicit */unsigned long long int) ((unsigned short) ((short) ((((/* implicit */_Bool) 4858768659825521195LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))));
}
