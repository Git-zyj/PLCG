/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103369
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
    var_19 &= ((((/* implicit */_Bool) var_2)) ? (var_16) : (var_13));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 4]);
                        var_21 = ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (7534206863655712528ULL) : (((/* implicit */unsigned long long int) 6001536542215562688LL))))));
        var_23 = ((/* implicit */int) (~(var_12)));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23972)) ? (((/* implicit */int) (short)-26506)) : (((/* implicit */int) (short)26509))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_7)) ? (var_10) : (var_10))), (((/* implicit */unsigned long long int) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_4] [i_5] [i_5])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(short)7] [(short)7] [i_6] [i_7] [i_5])))))) ? (0ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_4] [i_5] [i_5] [i_8] [i_5])))))));
                                var_27 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) 5959993495509640210LL)) & (var_13))));
                                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_20 [i_8 + 2] [i_8] [i_8 + 1]) : (arr_20 [i_8 + 1] [1U] [i_8 + 2]))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)53))));
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23984)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_5]))))) : (var_8)))) : (max((arr_11 [i_4] [i_6]), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)30611))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((signed char) 4171627823U));
                                var_32 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)23985)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)26513)))), (((/* implicit */int) (short)23984))));
                                var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_20 [i_11 + 1] [i_11 + 1] [i_11])))));
                                var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)98)))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) ((((-6605805595225063717LL) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) >= (-5291086609037858053LL))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 1; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        var_36 = max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0))))), (((arr_33 [i_9 + 2] [i_11 - 1] [i_11 + 1] [i_14 + 1]) ? (((/* implicit */int) arr_33 [i_9 - 2] [i_11 - 1] [i_11 + 3] [i_14 - 1])) : (((/* implicit */int) arr_33 [i_9 - 2] [i_11 + 3] [i_11 + 3] [i_14 - 1])))));
                        var_37 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_36 [i_9 + 1] [i_9 - 2] [i_10] [i_10] [i_14 - 1] [i_14 - 1])) >= (((/* implicit */int) arr_36 [i_9 + 1] [i_9 + 1] [0LL] [i_10] [i_9] [i_9 + 1]))))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) 5554546797043517878LL))));
                        /* LoopSeq 4 */
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_39 = ((/* implicit */signed char) max((((unsigned int) var_4)), (((/* implicit */unsigned int) var_2))));
                            var_40 = ((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_11] [i_14] [i_14]);
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)36490)))) ? (((((/* implicit */_Bool) arr_18 [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_33 [i_9 + 2] [i_11 + 1] [i_14 - 1] [i_14 - 1])))) : (((/* implicit */int) var_5))));
                            var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_25 [i_10]), (arr_25 [i_10]))))));
                        }
                        for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            var_43 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_22 [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_10])))), (((/* implicit */int) arr_22 [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_10]))));
                            var_44 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_37 [i_10] [i_14 + 1] [i_11 - 1] [i_10] [i_10])))))));
                            var_45 = ((/* implicit */long long int) (((+(((/* implicit */int) max((arr_21 [i_9]), (((/* implicit */signed char) arr_25 [i_10]))))))) == (((/* implicit */int) (signed char)0))));
                        }
                        for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_46 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((_Bool) var_5)))) >= (((/* implicit */int) min(((short)-26506), (var_15))))));
                            var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) ? (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) arr_29 [i_10] [(unsigned short)11] [i_10]))))) : (((/* implicit */int) var_9))));
                            var_48 = ((/* implicit */_Bool) max((((long long int) (unsigned char)0)), (((/* implicit */long long int) max((arr_33 [i_14 + 1] [i_11 + 3] [i_9 - 2] [i_9 + 1]), (arr_33 [i_14 + 1] [i_11 + 2] [i_9 - 2] [i_9 + 2]))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26505))))) & (((arr_36 [i_14 - 1] [i_14 + 1] [i_14] [i_10] [i_14 + 1] [i_14 - 1]) ? (var_13) : (var_13)))));
                            var_50 = ((/* implicit */int) (unsigned short)38613);
                            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) var_0))));
                        }
                    }
                    for (int i_19 = 1; i_19 < 11; i_19 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */short) var_8);
                        var_53 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [1U] [i_10]))));
                        var_54 = (!(((/* implicit */_Bool) max((arr_35 [i_9] [i_9 + 1] [i_10] [i_9]), (arr_35 [i_9] [i_9 + 2] [i_10] [i_10])))));
                        var_55 = ((/* implicit */long long int) min((var_55), (((((/* implicit */_Bool) var_10)) ? (((long long int) arr_23 [i_9 + 2] [i_11 - 1])) : (((((/* implicit */long long int) var_12)) % (((long long int) var_15))))))));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_21])) % (((int) arr_49 [i_9] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 1) 
                        {
                            var_57 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                            var_58 = ((/* implicit */unsigned long long int) arr_42 [i_9] [i_10] [i_20] [i_21] [i_21] [i_22]);
                            var_59 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_50 [i_9 + 1] [i_9 + 2] [i_9 + 1])) ? (((/* implicit */int) arr_42 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) arr_42 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9 + 2])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_50 [i_9 + 1] [i_9 - 1] [i_9 - 2])) : (((/* implicit */int) arr_50 [i_9 - 2] [i_9 + 1] [i_9 - 2]))))));
                        }
                    }
                    var_60 = ((/* implicit */unsigned int) var_6);
                }
                var_61 = ((/* implicit */int) (+(((((var_0) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))))) & (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)123)))))))));
            }
        } 
    } 
}
