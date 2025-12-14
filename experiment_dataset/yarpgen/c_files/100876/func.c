/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100876
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
    var_17 = ((unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */signed char) ((long long int) ((unsigned int) (unsigned short)805)));
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1]))));
                                arr_15 [2ULL] [2ULL] [2ULL] [i_3] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) * (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_15)) : ((-(var_4)))));
                                arr_16 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) var_2);
                            }
                            for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                            {
                                var_20 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2776021147201327195LL)))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_3))) * (0LL)))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned short)12429))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) / (var_14))), (((/* implicit */unsigned long long int) arr_18 [i_1 + 2] [i_1] [(unsigned char)1] [i_2] [i_5 + 2] [i_0] [i_3 + 3]))))));
                                var_22 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((max((var_4), (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((min((((/* implicit */unsigned int) var_2)), (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15))))))));
                                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-13562)))) && (((/* implicit */_Bool) var_7)))))));
                                var_24 = ((/* implicit */long long int) 17014319362467180058ULL);
                            }
                            arr_19 [i_0] [i_0] [i_2] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3131868296U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (var_14)))) : ((-(((/* implicit */int) var_15))))));
                            /* LoopSeq 2 */
                            for (short i_6 = 3; i_6 < 19; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */_Bool) (signed char)-114);
                                arr_23 [i_1] [i_3] = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_26 [i_0] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
                                var_26 += ((/* implicit */unsigned long long int) ((int) ((unsigned char) arr_22 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 + 3] [i_3 + 1])));
                                arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((short) 1023313356));
                                var_27 += ((/* implicit */unsigned char) ((max(((-(var_16))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_5)))))) > ((~((-(var_10)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((short) ((unsigned short) arr_24 [i_1 + 2])));
                            /* LoopSeq 3 */
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                var_29 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 2] [i_8 + 2]))) : (var_1))) < (((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_1 + 1] [i_8 + 2])), (var_2))))));
                                var_30 = ((/* implicit */_Bool) (~(min((((/* implicit */int) min((arr_35 [i_0] [i_1 + 1] [i_8 + 1] [i_0] [i_8 + 1] [i_8 + 1]), (((/* implicit */unsigned short) var_8))))), ((~(((/* implicit */int) (_Bool)0))))))));
                                var_31 &= ((/* implicit */short) min((((/* implicit */long long int) (-((~(-16)))))), (var_10)));
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                            {
                                var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (!(var_12))))))), ((-(((var_12) ? (arr_17 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_4))))))));
                                var_33 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) : (2710880926U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5669645602487308384LL)))))))));
                                var_34 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((5106929319094186639ULL), (8301518789586741435ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (min((((/* implicit */int) var_8)), (var_2)))));
                            }
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                            {
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)46510)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_8])))))) : ((((!(((/* implicit */_Bool) var_13)))) ? (max((var_11), (((/* implicit */unsigned long long int) (signed char)8)))) : (((10145225284122810181ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25587)))))))));
                                var_36 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) * ((~(arr_41 [i_1 + 2] [i_1 + 1] [i_0] [i_1] [i_8 + 1])))));
                                var_37 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_40 [i_8 + 2] [i_8] [i_8] [i_8 - 1] [1LL] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((int) var_11)))));
                                arr_42 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) 1489464394)))))) : (var_6)));
                            }
                            var_38 |= ((/* implicit */signed char) ((int) (signed char)-113));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 884762501))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((var_5), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1 + 2])))))))));
            }
        } 
    } 
    var_40 *= ((/* implicit */signed char) ((unsigned short) var_0));
    var_41 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6)))))))) : (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5U)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_14)))))));
}
