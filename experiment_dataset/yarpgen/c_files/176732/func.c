/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176732
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((((unsigned int) min((((/* implicit */unsigned int) var_11)), (var_0)))), (min((3255161754U), (((/* implicit */unsigned int) (_Bool)1))))));
        var_14 = ((/* implicit */int) max((3255161750U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10815)) || (((/* implicit */_Bool) (unsigned char)248)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [(unsigned char)1] = var_9;
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */_Bool) (short)16204);
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) 4194303U);
                var_16 = (-(((/* implicit */int) (_Bool)1)));
            }
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)-111))));
                    var_17 = (!(var_5));
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3612350363U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (682616933U)));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-83))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)152))))));
                    arr_18 [i_0] [i_1] [i_3 + 1] [i_5] = (((-(((/* implicit */int) (short)24922)))) <= (((/* implicit */int) ((((/* implicit */_Bool) -8825773554705658091LL)) && (((/* implicit */_Bool) (unsigned short)48040))))));
                }
                var_20 |= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)81)) * (((/* implicit */int) (_Bool)0)))));
            }
            for (unsigned short i_6 = 3; i_6 < 6; i_6 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_9))));
            }
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [4] [i_8] [i_9] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1806433138U))))) : (((/* implicit */int) var_8))));
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (signed char)66))))), ((+((+(((/* implicit */int) (unsigned short)57839))))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)78)))) + (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) var_8))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)30)) : (((/* implicit */int) (short)29122)))) > (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 1 */
                        for (int i_13 = 1; i_13 < 7; i_13 += 2) 
                        {
                            arr_42 [i_0] [i_10] [i_11] [(_Bool)1] [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) 3584)) ? (393216) : (-393220))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
                            arr_43 [i_13] [i_10] [i_11] [i_11] [i_10] [(unsigned char)3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (-11898012)))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_9))))) ^ ((+(2973537474U)))));
                        }
                        var_28 = ((/* implicit */unsigned int) (signed char)125);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) var_9);
            var_30 = ((/* implicit */int) ((var_2) >> (((var_6) + (4858153000719478971LL)))));
        }
        arr_44 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2573933681U))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) << (((/* implicit */int) min(((unsigned short)14), (((/* implicit */unsigned short) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) (unsigned char)177);
        arr_47 [i_14] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) var_12)))));
            arr_51 [i_15] [i_15] [i_14] = ((/* implicit */unsigned char) var_10);
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        arr_57 [i_15] [i_15] [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)21))))) ? ((~(-11898012))) : (-393220)));
                        var_33 = ((/* implicit */unsigned short) 3375860227U);
                        arr_58 [i_17] [i_15] [i_15] [i_15] = ((/* implicit */signed char) var_0);
                        arr_59 [i_14] [i_15] [i_16] [i_14] [i_17] = ((/* implicit */int) var_7);
                    }
                } 
            } 
            arr_60 [i_14] [i_14] [i_15] &= ((/* implicit */signed char) var_3);
        }
        for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
            var_35 = ((/* implicit */unsigned char) var_3);
        }
        var_36 = ((/* implicit */unsigned int) ((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (59558)))));
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) ((3805583205U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_66 [i_19] = ((/* implicit */_Bool) var_10);
        var_38 = ((/* implicit */unsigned char) (+(var_0)));
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((((/* implicit */long long int) 1721033615U)) % (4284898069562916505LL))) ^ (((/* implicit */long long int) var_2)))))));
        var_40 -= ((/* implicit */int) (unsigned char)206);
    }
    var_41 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 2103351260U)) && (((/* implicit */_Bool) var_3)))))))), (((long long int) 1265241998U))));
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) var_10)), (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
}
