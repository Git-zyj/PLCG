/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166584
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
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_14 -= ((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 3]))) ? (((/* implicit */int) ((_Bool) ((long long int) var_10)))) : ((+(((/* implicit */int) arr_0 [i_0 + 3])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_11)))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)56)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) (short)15872);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((min((arr_0 [i_0 + 3]), (arr_1 [i_0 + 1] [i_0 + 3]))), (min((arr_1 [i_0 + 1] [i_0 + 3]), (arr_0 [i_0 - 2])))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */short) (_Bool)1))))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_7))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) 68182605824ULL);
                            arr_16 [i_4] [i_2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_2] [i_2]))), (min((max((((/* implicit */unsigned long long int) (unsigned char)1)), (arr_8 [i_5] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((short) arr_0 [i_3])))))));
                            arr_17 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_13 [i_2] [i_4 - 2] [i_4 - 2] [i_4])))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_21 [i_2] [i_2] [i_6] [i_2] = ((((/* implicit */_Bool) arr_8 [i_6] [i_1] [i_1])) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2]))));
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */int) (-(arr_14 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7])));
                        arr_26 [i_6] = ((((/* implicit */int) var_7)) % ((~(((/* implicit */int) (_Bool)1)))));
                    }
                    var_19 = ((/* implicit */unsigned char) (-(((unsigned long long int) min((arr_12 [i_6] [i_6] [i_6] [i_2] [i_6] [i_6]), (((/* implicit */short) arr_1 [i_1] [i_1])))))));
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_33 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (_Bool)1);
                        arr_34 [i_6] [i_9] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_11 [i_10])))) ? (((((/* implicit */_Bool) arr_5 [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (1463841797)));
                    }
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)37)) * (((/* implicit */int) arr_0 [i_6]))))) / (((var_10) ? (((/* implicit */unsigned long long int) arr_27 [i_1] [i_6] [i_6] [i_6])) : (arr_8 [i_1] [i_1] [i_1])))));
                        arr_38 [i_6] [i_6] [i_6] [i_9] [i_9] [i_6] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_24 [i_1] [i_2] [i_2] [i_6] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2])))) : ((-(((/* implicit */int) (signed char)-29))))));
                        arr_39 [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) arr_28 [i_9 + 1] [i_6] [i_9 - 2] [i_6] [i_6]));
                        var_21 -= ((/* implicit */unsigned short) arr_23 [i_1]);
                        var_22 = ((/* implicit */long long int) var_3);
                    }
                    arr_40 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_6] [i_6] [i_6]);
                    var_23 += ((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_6] [i_1] [i_9]);
                    arr_41 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)80))) ? (((arr_24 [i_1] [i_6] [i_1] [i_6] [i_1]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_9 - 2] [i_9 + 1] [i_6])))));
                }
                arr_42 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) 0U);
                arr_43 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_6] [i_1] [i_1] [i_6])) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-59)) && (arr_7 [i_1] [i_6]))))));
            }
            var_24 ^= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))) % (((arr_11 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))));
        }
        for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            arr_47 [i_12] = ((/* implicit */unsigned long long int) arr_12 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(arr_32 [i_1] [i_1] [i_1] [i_12] [i_1] [i_12]))) / (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)29))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_5))))) : (arr_19 [i_12] [i_12])))))))));
        }
        for (int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
        {
            arr_50 [i_1] = ((/* implicit */_Bool) (signed char)-122);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (long long int i_15 = 3; i_15 < 10; i_15 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            arr_60 [i_1] [i_1] [i_1] [i_15] [i_15] [i_16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_13]))))) ? (((/* implicit */int) arr_59 [i_1] [i_1] [i_1] [i_1] [i_16])) : (((/* implicit */int) max(((_Bool)1), (arr_0 [i_15]))))))) && (arr_0 [i_13])));
                            var_26 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_61 [i_15] [i_15] [i_14] [i_1] [i_1] = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) var_12)) ? (arr_49 [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) % ((((((+(-4))) + (2147483647))) >> (((/* implicit */int) (!((_Bool)1))))))));
                            arr_62 [i_1] [i_1] [i_1] [i_14] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((arr_58 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 + 2]), (((((/* implicit */int) arr_1 [i_14] [i_14])) * (((/* implicit */int) arr_30 [i_1] [i_1] [i_14] [i_14] [i_15] [i_14])))))), (((/* implicit */int) ((unsigned char) ((unsigned char) arr_15 [i_1] [i_1] [i_16]))))));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 2) 
                        {
                            arr_65 [i_1] [i_1] [i_1] [i_1] [i_17] = ((/* implicit */int) (((_Bool)1) ? ((~(((((/* implicit */_Bool) arr_64 [i_1] [i_1] [i_14] [i_14] [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_8 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_66 [i_1] [i_1] [i_14] = ((/* implicit */unsigned char) (short)29582);
                        }
                        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 3) 
                        {
                            arr_70 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_18 + 2] [i_14] [i_14] [i_14])) / ((+(((/* implicit */int) (unsigned char)25)))))), (((/* implicit */int) (_Bool)1))));
                            arr_71 [i_1] [i_1] [i_1] [i_1] [i_18] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (97582436U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (min((arr_35 [i_1] [i_1]), (arr_49 [i_1] [i_1]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_56 [i_13] [i_13] [i_15] [i_15])) : (((/* implicit */int) var_7)))) * (((/* implicit */int) ((2435743351U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                        }
                        for (short i_19 = 1; i_19 < 11; i_19 += 3) 
                        {
                            var_27 |= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_15 - 1] [i_19 + 1] [i_19 - 1] [i_19 - 1]))))) ? ((~(max((arr_48 [i_1] [i_1]), (((/* implicit */long long int) var_8)))))) : (-8310549774014739872LL));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 3670924786U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13536))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-30)) ? (var_2) : (((/* implicit */unsigned int) arr_27 [i_1] [i_19] [i_1] [i_19])))), (min((4197384857U), (((/* implicit */unsigned int) (short)13536))))))) : (9121211966562778745LL)));
                            var_29 -= ((/* implicit */_Bool) min((((arr_28 [i_1] [i_1] [i_1] [i_19 + 1] [i_1]) ? (((/* implicit */long long int) arr_58 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15] [i_19 + 1])) : (((((/* implicit */_Bool) arr_35 [i_15] [i_15])) ? (((/* implicit */long long int) var_2)) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) (!(arr_36 [i_1] [i_1] [i_13]))))));
                        }
                        arr_75 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (arr_35 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) ((arr_24 [i_1] [i_13] [i_1] [i_13] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) (short)13536))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (unsigned char i_21 = 2; i_21 < 8; i_21 += 2) 
                {
                    {
                        var_30 -= ((/* implicit */unsigned long long int) (unsigned char)143);
                        var_31 = ((/* implicit */_Bool) (unsigned char)166);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_22 = 4; i_22 < 11; i_22 += 1) /* same iter space */
        {
            arr_85 [i_1] = ((((/* implicit */_Bool) ((unsigned short) arr_32 [i_22 - 1] [i_22 - 2] [i_22 - 2] [i_22 - 1] [i_22 - 2] [i_22 - 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_1] [i_1] [i_22])) ^ (((/* implicit */int) min(((short)13531), (arr_80 [i_1] [i_1] [i_1]))))))) : ((~(min((97582421U), (((/* implicit */unsigned int) arr_58 [i_1] [i_1] [i_22] [i_1] [i_1])))))));
            var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)162)) ? (arr_74 [i_1] [i_1] [i_1] [i_1] [i_22]) : (((/* implicit */unsigned long long int) 97582421U)))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) arr_73 [i_1] [i_1] [i_1] [i_1] [i_1] [i_22] [i_1])), (-8310549774014739872LL))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) | (-8310549774014739878LL)))))) : (min(((-(((/* implicit */int) arr_6 [i_22])))), (((/* implicit */int) arr_18 [i_1] [i_1] [i_1]))))));
        }
        for (unsigned char i_23 = 4; i_23 < 11; i_23 += 1) /* same iter space */
        {
            arr_88 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(arr_7 [i_1] [i_23]))) ? (((((/* implicit */_Bool) arr_58 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)-33)))) : (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((~(arr_23 [i_1]))) : (((/* implicit */unsigned long long int) arr_63 [i_1] [i_1] [i_1] [i_1] [i_23] [i_1]))));
            /* LoopNest 3 */
            for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                for (unsigned char i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    for (short i_26 = 0; i_26 < 12; i_26 += 2) 
                    {
                        {
                            var_33 -= ((/* implicit */long long int) min(((-(min((((/* implicit */unsigned int) var_4)), (97582433U))))), (((/* implicit */unsigned int) 2147483631))));
                            var_34 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            } 
            arr_96 [i_23] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_31 [i_1] [i_23 - 2] [i_1] [i_1] [i_1] [i_1])))) ? (((arr_8 [i_23 - 1] [i_23 - 1] [i_23 - 1]) | (arr_8 [i_23 - 4] [i_23] [i_23 - 4]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
            /* LoopNest 3 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (long long int i_29 = 4; i_29 < 11; i_29 += 2) 
                    {
                        {
                            arr_106 [i_1] [i_23] [i_1] [i_1] [i_29] = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_23] [i_1] [i_1] [i_23]);
                            arr_107 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_23 + 1] [i_29 + 1])) ? (arr_49 [i_23 - 1] [i_29 - 1]) : (arr_49 [i_23 - 2] [i_29 + 1])))) ? ((-(var_0))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) + (arr_49 [i_23 + 1] [i_29 + 1])))));
                        }
                    } 
                } 
            } 
        }
        var_35 += ((/* implicit */unsigned char) (signed char)-24);
    }
    var_36 ^= ((/* implicit */signed char) var_3);
    var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) -4170708990558584612LL))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_7))))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
}
