/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173103
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) -265781296)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 265781287)) ? (11418856765695830060ULL) : (((/* implicit */unsigned long long int) -265781296))))) ? (((/* implicit */int) arr_2 [i_1] [13LL])) : (((/* implicit */int) (unsigned char)0))))) : ((-9223372036854775807LL - 1LL))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                        var_15 = ((/* implicit */_Bool) var_4);
                        var_16 = ((/* implicit */long long int) arr_2 [(_Bool)1] [(_Bool)1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (short i_5 = 4; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) arr_2 [i_5] [i_1])) ? ((~(arr_17 [i_1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7027887308013721556ULL)))));
                                var_18 = ((/* implicit */unsigned long long int) (~(max((arr_7 [i_0]), (((/* implicit */long long int) var_7))))));
                                var_19 = ((/* implicit */long long int) var_3);
                                var_20 |= ((/* implicit */int) max((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)18510)) : (((/* implicit */int) (_Bool)1))))) + (14630966581870393923ULL))), (((/* implicit */unsigned long long int) 0U))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((4503605757687696104ULL), (arr_3 [1ULL] [1ULL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1792))) : (((((/* implicit */_Bool) 25165824)) ? (72057594037927935ULL) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (7027887308013721556ULL)))))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */short) ((((((797176972780369920ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0)))))))));
    var_23 = ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (short)1022)) : (((/* implicit */int) (_Bool)1))));
        var_25 = max((((/* implicit */long long int) ((unsigned int) arr_20 [i_6]))), (((((/* implicit */_Bool) (unsigned short)18513)) ? (arr_20 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(arr_21 [i_6])))), (max((((/* implicit */unsigned long long int) var_12)), (var_4)))));
        var_27 ^= ((/* implicit */unsigned long long int) ((max((arr_16 [i_6] [i_6]), (((/* implicit */long long int) 2147483647)))) >> (((((((arr_16 [i_6] [i_6]) + (9223372036854775807LL))) >> (((arr_16 [i_6] [i_6]) + (3672640623929284733LL))))) - (43365089163480363LL)))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (short i_9 = 4; i_9 < 11; i_9 += 1) 
            {
                {
                    arr_32 [6LL] [i_8] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7] [1U] [i_7])) ? (((/* implicit */unsigned long long int) arr_8 [i_8] [i_9 + 1] [(signed char)9])) : (max((var_3), (((/* implicit */unsigned long long int) arr_4 [i_7] [(_Bool)1] [i_7]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)67)) - (64)))))) ? ((~(arr_31 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_8] [i_9] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 13; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) ((long long int) max((arr_13 [3LL] [3LL] [i_10 - 1] [i_10 - 1] [i_9 - 4] [i_7]), (arr_13 [i_7] [i_8] [i_10 - 1] [(unsigned char)4] [i_9 - 2] [(unsigned char)4]))));
                                arr_37 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_11] [i_11])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)14642))))) : ((+(arr_6 [(unsigned short)13] [(unsigned short)13])))))) : (max((((/* implicit */unsigned long long int) 1678173001U)), (7138781777334073434ULL)))));
                            }
                        } 
                    } 
                    var_29 = ((signed char) (!(((/* implicit */_Bool) arr_18 [i_9 - 4] [i_9 - 4] [5] [i_9] [5]))));
                    var_30 = ((/* implicit */unsigned long long int) (-(((arr_8 [i_9 - 4] [i_9] [i_9]) / (arr_8 [i_9 - 4] [i_9] [i_9 - 4])))));
                }
            } 
        } 
        arr_38 [i_7] = ((/* implicit */unsigned short) min(((+(max((((/* implicit */unsigned long long int) arr_20 [i_7])), (4503605757687696089ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50893)) ? (9214364837600034816LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5863))))))));
    }
    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_6 [i_12] [i_12]);
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(5682854597246995392ULL))), (4503605757687696104ULL)))) ? ((+((~(((/* implicit */int) arr_53 [i_12] [i_16] [(_Bool)1] [8ULL] [i_13])))))) : (((/* implicit */int) arr_52 [i_16] [(_Bool)1] [i_14] [i_13] [i_16]))));
                        }
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_36 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_14])) ? (((/* implicit */int) arr_41 [i_12] [1LL])) : (((/* implicit */int) arr_45 [i_12] [(_Bool)1]))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_17] [i_12])) ? (((((/* implicit */long long int) var_6)) / (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)65))))))))));
                            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_10))))) ? (max(((-(-2395383839189402994LL))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (arr_8 [i_12] [i_12] [i_12])))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_28 [i_12] [i_12]), ((short)1022)))))))));
                            arr_56 [i_17] [i_12] [i_13] [i_13] [i_12] |= ((/* implicit */long long int) arr_50 [0] [(short)0] [0] [(short)0] [(short)0]);
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((arr_49 [i_12] [i_13] [i_15]) >= (((/* implicit */int) arr_59 [i_14] [i_12] [i_14] [13U] [i_13] [i_12]))));
                            var_36 |= ((((((/* implicit */unsigned long long int) arr_31 [i_15])) / (arr_29 [(_Bool)1] [(_Bool)1] [i_12]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_12] [i_18] [i_15] [i_15] [6]))));
                            var_37 ^= ((/* implicit */int) (~(arr_46 [i_14])));
                        }
                        for (signed char i_19 = 4; i_19 < 11; i_19 += 4) 
                        {
                            var_38 = ((((/* implicit */_Bool) 12106267581569445282ULL)) ? (0ULL) : (11418856765695830060ULL));
                            arr_63 [i_12] [i_12] [i_12] [1ULL] [1ULL] = ((/* implicit */unsigned int) ((_Bool) ((var_4) + (13943138316021855512ULL))));
                            arr_64 [(unsigned char)1] [i_13] [i_13] [i_13] [i_15] [i_15] [i_19] = ((/* implicit */unsigned long long int) ((long long int) arr_21 [i_19]));
                        }
                        /* LoopSeq 2 */
                        for (short i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)22174))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18525))) : (((((/* implicit */_Bool) -8803844891798325055LL)) ? (1678172984U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))))));
                            var_40 = ((/* implicit */_Bool) (short)-1029);
                        }
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */signed char) (~(var_5)));
                            var_42 = ((/* implicit */int) arr_16 [i_21] [i_21]);
                            arr_70 [i_15] [i_15] [i_14] [i_15] = ((/* implicit */signed char) ((arr_47 [i_15]) ? (((/* implicit */int) arr_47 [i_15])) : (var_2)));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(var_2)))) * (2408178075U)));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6897973345412555548LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-1022))));
                        }
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) 7027887308013721555ULL)))))));
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((arr_29 [i_12] [i_12] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_47 [i_12])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_12] [i_12]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(var_8)))), ((~(arr_35 [i_12] [i_12]))))))));
        var_47 += max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_3))) | (5682854597246995394ULL))), (((/* implicit */unsigned long long int) arr_55 [i_12] [(_Bool)1] [i_12] [3ULL] [i_12] [i_12] [i_12])));
        var_48 += ((/* implicit */unsigned int) min((arr_19 [i_12] [9] [i_12] [9] [i_12]), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (arr_69 [i_12] [i_12] [i_12] [(signed char)10] [i_12] [i_12])))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) ((signed char) var_9)))))));
    }
}
