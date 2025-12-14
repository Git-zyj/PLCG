/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174570
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)185))))))))));
        var_12 -= ((/* implicit */short) (signed char)0);
        var_13 -= ((/* implicit */short) (+((+(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)112))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) arr_1 [i_1]))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (238)))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 4; i_2 < 8; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)98)) >> (((/* implicit */int) (_Bool)1))));
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)209)));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 3] [i_2 - 3])))))));
                var_19 = ((/* implicit */signed char) ((arr_14 [i_2 - 1] [i_2 - 4] [i_5]) * (arr_14 [i_2 - 3] [i_2 + 3] [i_5])));
                arr_17 [(signed char)8] [6U] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = (-(((/* implicit */int) arr_15 [i_1] [i_2] [i_6] [i_1])));
                arr_22 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) arr_8 [i_2] [i_2 + 3] [7U]))));
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)0))));
                var_22 = ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_15 [i_2 + 2] [i_6] [i_6] [i_6])));
            }
        }
        for (unsigned short i_7 = 4; i_7 < 8; i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] = ((/* implicit */unsigned char) arr_1 [i_1]);
            /* LoopSeq 4 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_7] [i_7 - 3] [i_8])) && (((/* implicit */_Bool) (signed char)-28)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((1852722417U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_7 - 3] [i_7 + 2] [i_7 + 1] [(_Bool)1])) + (((/* implicit */int) var_5))));
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_12 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_7 + 2]))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    for (unsigned char i_11 = 4; i_11 < 7; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)127)) - (101))))))));
                            var_27 = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_28 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 874868251U)) ? (((/* implicit */int) (short)21230)) : (((/* implicit */int) var_4))))));
                arr_37 [i_7 + 1] [i_7] = ((/* implicit */short) arr_35 [i_1] [i_1] [i_1] [7U] [6U] [i_9]);
            }
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_7] [i_7] [i_1] [i_7 + 1] [i_7 + 3])) << (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [(short)9] [i_7] [i_1])) && (((/* implicit */_Bool) var_5)))))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_7 - 1] [i_7 + 2] [i_7 - 3] [i_7 - 3])) & (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)184)))))))));
                var_31 = ((/* implicit */unsigned int) var_3);
            }
            for (long long int i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                arr_42 [i_7] [i_7] = ((/* implicit */unsigned char) arr_18 [i_1] [i_7] [i_13] [i_13 + 1]);
                arr_43 [i_7] [1LL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_1] [(unsigned short)7] [i_1])) : ((-(((/* implicit */int) var_0))))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_29 [i_1] [i_7 - 2] [i_7 - 2]))));
            }
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_0))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_1))))))));
                        /* LoopSeq 1 */
                        for (short i_16 = 2; i_16 < 9; i_16 += 2) 
                        {
                            arr_54 [4U] [i_7 + 3] [(unsigned char)8] [i_15] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)3840))));
                            arr_55 [i_1] [i_7] [(signed char)7] [0U] [i_1] = ((/* implicit */signed char) ((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14460)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)-112)))))));
                        }
                        var_35 = ((/* implicit */unsigned char) min((var_35), (var_5)));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        var_36 = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned char)76)))), ((+(((/* implicit */int) (short)2597))))));
        var_37 |= ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (short)-17036)))));
        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_57 [i_17]))))))) >= (((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (signed char)31)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-69))))) : (((1827343406) + (((/* implicit */int) var_9))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 3; i_18 < 15; i_18 += 1) 
    {
        for (unsigned int i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                {
                    arr_69 [i_18 + 2] [i_19] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))))) ? ((+(((/* implicit */int) arr_58 [i_18 - 2] [i_18 - 1])))) : (max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_9))))));
                    var_39 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)34428))))) > (9223372036854775807LL)));
                    var_40 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (unsigned char)90)))));
                    var_41 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)0))))) ? (min((((/* implicit */int) var_3)), (876840986))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 3; i_21 < 15; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 17; i_22 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)6422))));
                                arr_74 [i_21] [i_21] = ((/* implicit */unsigned int) arr_59 [i_18 + 1]);
                                var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_4)))))) + (arr_62 [i_18 - 2] [i_18])))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (short)-15734)) ? (((/* implicit */int) arr_0 [i_20])) : (((/* implicit */int) (unsigned short)25602))))))) : (arr_62 [i_21] [i_21])));
                                arr_75 [i_21] = ((/* implicit */short) (+((-(844963675U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
