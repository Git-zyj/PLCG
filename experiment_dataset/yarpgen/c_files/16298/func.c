/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16298
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) var_16);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) arr_6 [10LL]))))), ((+(((/* implicit */int) (signed char)100))))))), (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)100))))) : (max((2599926737U), (((/* implicit */unsigned int) (_Bool)1))))))));
        var_19 = ((/* implicit */_Bool) var_13);
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_7);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) 205258284);
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))) != (((((/* implicit */_Bool) -3401318988229087408LL)) ? (arr_14 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) : (arr_6 [i_1])))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((var_0) << (((/* implicit */int) min(((signed char)100), (((/* implicit */signed char) ((205258271) > (((/* implicit */int) (unsigned char)41)))))))))))));
                    }
                    arr_19 [i_3] [i_1] [i_1] = ((/* implicit */int) ((long long int) 812469504U));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_5]))));
                                arr_33 [i_5] [i_6] = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    arr_34 [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(555191883U)))) ? (arr_27 [i_5] [i_5]) : (((((/* implicit */unsigned int) var_4)) - (555191883U)))));
                }
            } 
        } 
        var_23 = (_Bool)1;
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned short)6966)), (-4171506976709745800LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_10] [i_10])))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            for (unsigned short i_12 = 2; i_12 < 11; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) arr_41 [i_11 + 1] [i_12 + 1] [i_13])) > (2334416068U))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (signed char)100))));
                            var_26 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) arr_36 [i_12 - 1])))) * (((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-5)) + (((/* implicit */int) (unsigned char)152))))))));
                            arr_51 [i_10] [i_11 + 3] [i_12] = ((/* implicit */unsigned int) arr_36 [i_10]);
                            arr_52 [i_11] [i_12] = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_24 [i_11] [i_12] [i_13])), (3666183695U))), (((/* implicit */unsigned int) arr_15 [i_10] [i_11 - 2] [i_11] [i_12]))));
                            arr_53 [i_12] [i_11] = ((/* implicit */_Bool) (unsigned short)59222);
                        }
                        arr_54 [i_12] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)6966)) == (((/* implicit */int) (short)16256)))))));
                        var_27 = ((/* implicit */long long int) (signed char)100);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 3) 
        {
            for (unsigned short i_17 = 3; i_17 < 12; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        for (signed char i_19 = 1; i_19 < 9; i_19 += 1) 
                        {
                            {
                                arr_69 [i_15] [i_17 - 3] = ((int) (signed char)102);
                                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_6))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_15])))));
                                var_29 = ((/* implicit */signed char) ((unsigned short) (signed char)-86));
                                arr_70 [i_15] [i_16] [i_17] [i_18] [i_19] = (((+(4294967295U))) == (3739775413U));
                            }
                        } 
                    } 
                    var_30 = ((((/* implicit */_Bool) 205258280)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_16] [i_15] [i_16] [i_16] [i_16] [i_15] [i_16]))) : (4091555528U));
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)15))));
                    var_32 = ((/* implicit */unsigned short) 0);
                    arr_71 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_15] [i_15] [i_17])) ? (((/* implicit */int) (short)-16269)) : (((/* implicit */int) (signed char)74))));
                }
            } 
        } 
        arr_72 [i_15] [i_15] = ((/* implicit */int) ((_Bool) arr_5 [i_15]));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            for (int i_22 = 2; i_22 < 10; i_22 += 1) 
            {
                for (unsigned char i_23 = 3; i_23 < 12; i_23 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)6336)) && (((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)14))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_24 = 1; i_24 < 11; i_24 += 3) 
                        {
                            var_34 = ((/* implicit */int) var_10);
                            arr_87 [i_20] [i_20] [i_21] [i_23] [i_23] [i_24 + 1] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> (((-210761392) + (210761405)))));
                        }
                        var_35 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 555191887U))))), (min((((/* implicit */unsigned int) 0)), (3739775409U))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_25 = 1; i_25 < 10; i_25 += 2) 
        {
            for (unsigned short i_26 = 1; i_26 < 12; i_26 += 1) 
            {
                for (unsigned char i_27 = 1; i_27 < 9; i_27 += 1) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) -7144017856778138341LL))));
                        var_37 = ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
    }
    var_38 += ((signed char) var_8);
    var_39 = ((/* implicit */_Bool) (unsigned short)13590);
    var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (-1966194616)));
}
