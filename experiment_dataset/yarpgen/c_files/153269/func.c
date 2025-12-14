/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153269
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_14 = ((signed char) (signed char)-100);
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 + 3]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)99)) : (1784767003)))) ? (arr_4 [i_0]) : (-1784767002)));
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (unsigned char)42);
            }
            arr_14 [i_0] [i_0] [i_0] = var_4;
            arr_15 [i_0] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1])) : (((/* implicit */int) var_13))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                arr_19 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_2 + 1])) ? (5420087755296762067ULL) : (((/* implicit */unsigned long long int) var_12))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) var_10);
                        arr_25 [i_0] [i_5] [i_4] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_6);
                    }
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        var_17 -= ((/* implicit */unsigned long long int) arr_27 [i_2 + 3] [i_7 - 1]);
                        var_18 = ((/* implicit */int) (~(var_12)));
                    }
                    arr_28 [i_0] [5] [i_4] [i_0] [i_5] = ((((/* implicit */unsigned int) arr_4 [i_0])) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (var_7))));
                    var_19 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_5]);
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_31 [i_8] [i_2 + 1] [i_8] [i_0]))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1466261035)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)114))));
                    var_23 = ((/* implicit */int) ((signed char) var_0));
                }
            }
        }
        for (int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            arr_34 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_2)));
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
        {
            var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_0] [i_0]))) ? (((/* implicit */int) min((arr_7 [i_0] [i_0]), (((/* implicit */short) arr_2 [i_10]))))) : (((((/* implicit */int) arr_2 [i_10])) * (((/* implicit */int) arr_2 [i_10]))))));
            /* LoopNest 2 */
            for (long long int i_11 = 4; i_11 < 12; i_11 += 2) 
            {
                for (signed char i_12 = 2; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((min((var_1), (((/* implicit */long long int) arr_40 [i_0] [i_10] [i_10])))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 1784767023)) ? (((/* implicit */unsigned long long int) -902919709)) : (arr_41 [i_0] [i_10]))))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_10])))))))) && (((/* implicit */_Bool) max((1784767003), (1784767010))))));
                        var_27 &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_37 [i_11 - 3])), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_11 - 1])) < (((/* implicit */int) (short)-26478)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (long long int i_13 = 1; i_13 < 12; i_13 += 3) 
        {
            arr_45 [i_0] = ((/* implicit */int) max(((((!(var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))), (((/* implicit */unsigned int) ((short) var_2)))));
            var_28 = ((/* implicit */unsigned long long int) var_5);
        }
        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) 
        {
            var_29 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) -288270532))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-127)) : (-1466261038)))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0] [i_0] [(unsigned short)8] [i_0] [i_14 - 1] [i_0]))))), (arr_1 [(unsigned short)12]))))));
            var_31 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-91)), (-2002090210)));
        }
        for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 4) 
        {
            arr_51 [i_0] [i_15] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_32 [i_0 - 1] [i_0])), (var_0))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0])) ? (arr_32 [i_0 - 1] [i_0]) : (arr_32 [i_0 - 1] [i_0]))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >= (max((max((arr_21 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */int) arr_33 [i_0] [i_0] [i_0])))), (((((/* implicit */int) (_Bool)0)) - (-1784767004)))))));
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_33 |= ((/* implicit */_Bool) ((int) max((var_3), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), (arr_38 [i_16])))))));
                                var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_48 [i_16])) : (((/* implicit */int) arr_48 [i_17]))))) ? (var_11) : (((/* implicit */int) min((arr_7 [i_0 - 2] [i_0 - 1]), ((short)-29653)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) arr_44 [i_0]))))), (var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_17])) : (((/* implicit */int) var_4))))) ? ((+(arr_17 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_48 [i_0])), (arr_50 [i_17] [i_17] [i_0]))))))));
                    arr_60 [i_0] [i_0] [i_17] [i_0] = ((/* implicit */unsigned char) var_2);
                    var_36 *= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    var_37 = max((((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)8460))))), (var_10)))), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_16] [i_16] [i_16] [i_17]))) - (var_12))), (((/* implicit */unsigned int) arr_9 [i_0] [i_16] [i_0 + 1])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_20 = 2; i_20 < 10; i_20 += 3) 
        {
            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (-2055818690))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_36 [i_0] [i_0])))), (min((arr_32 [i_0 + 1] [i_0]), (((/* implicit */int) var_8))))))));
            arr_65 [i_0] [i_0] [i_20] = ((/* implicit */_Bool) arr_3 [i_0]);
        }
        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 3) 
        {
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) arr_18 [i_21]))));
            arr_69 [i_21] [i_0] [i_21] = max((1680765930), (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) >= (-2048577028)))));
            arr_70 [i_0] = ((/* implicit */short) min((1996777083U), (((/* implicit */unsigned int) -2114849721))));
            /* LoopNest 2 */
            for (short i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_72 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8495627636477645266LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_50 [i_21] [5U] [i_0]) : (((/* implicit */int) var_13))))) ? (min((arr_47 [i_21] [i_23]), (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) arr_55 [i_0] [i_0 - 1] [i_0]))))))));
                        var_40 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_0 + 1]))) : (((((/* implicit */_Bool) 8495627636477645285LL)) ? (8553123802365262142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_22]))) * (var_12))), (var_0))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_80 [i_24] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) arr_78 [i_24]))))) / (max((((/* implicit */long long int) (signed char)71)), (2033439776627817780LL))))));
        arr_81 [(signed char)9] [i_24] = ((/* implicit */signed char) arr_78 [i_24]);
        var_41 = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))))), ((unsigned char)142)));
        arr_82 [i_24] [i_24] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_24])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_24] [i_24])))))) ? (min((((/* implicit */long long int) arr_78 [i_24])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_79 [i_24] [i_24]), (arr_79 [i_24] [i_24]))))))), (((/* implicit */long long int) var_2))));
        var_42 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (((short) -4362879914278711711LL))));
    }
    var_43 = ((/* implicit */short) min((((((/* implicit */_Bool) -2033439776627817773LL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)-72)))), (((((/* implicit */_Bool) -3682084948097419718LL)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (unsigned short)55824)) * (((/* implicit */int) var_10))))))));
}
