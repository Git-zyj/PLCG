/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165041
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
    var_20 *= ((/* implicit */short) var_11);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned char) var_17);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11))))) : (((/* implicit */unsigned long long int) var_6))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (var_11)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_6)) : (var_8)));
                arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_12);
                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))));
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2782)) ? (-1) : (((/* implicit */int) (unsigned short)8662))));
                var_25 = ((/* implicit */signed char) var_9);
            }
            for (long long int i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20720))) : (8774041331968632598ULL)))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */unsigned int) 1)) : (2753897857U)))))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            arr_21 [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 2] = var_12;
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)227))))) ? (var_11) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            }
            for (unsigned int i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_15))))) ? (var_17) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_17)))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_7 = 4; i_7 < 9; i_7 += 2) 
                {
                    arr_28 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned char)53))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_19)))))));
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_16)) ? (-1004723093663938714LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1973549126097365730ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535)))))));
                    arr_31 [i_0] [i_1] [i_6] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                }
                arr_32 [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11909)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */int) (short)-25085)) : (((/* implicit */int) (short)-11882))))) : (((((/* implicit */_Bool) (short)-11910)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40287))))));
            }
            for (int i_9 = 4; i_9 < 7; i_9 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (0)))) ? (((((/* implicit */_Bool) (unsigned short)6733)) ? (1307530297955576030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186)))));
                arr_35 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (var_16)))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
            }
            arr_36 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_17) : (var_2)))) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) var_5))))));
        }
        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (var_6)))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5702))))));
        /* LoopSeq 4 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_39 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-11909)) ? (7709263360979955375LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_11 = 1; i_11 < 8; i_11 += 3) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) var_3))));
                arr_43 [i_0 - 1] [i_11] [i_0 - 1] [i_11 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                var_35 = ((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                arr_47 [i_12] [i_10] [i_10] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) 25)) : (3644489969U)));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) 8774041331968632598ULL)) ? (((/* implicit */int) (unsigned short)21811)) : (((/* implicit */int) (unsigned char)3)))))));
                arr_48 [i_12] [i_10] [i_0] &= ((/* implicit */_Bool) var_7);
            }
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        }
        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            arr_51 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1966080)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) : (var_11)));
            arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) var_16);
            arr_53 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12)))))));
            var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))) ? (((((/* implicit */_Bool) var_17)) ? (var_11) : (var_11))) : (((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (signed char i_14 = 2; i_14 < 9; i_14 += 2) 
        {
            var_40 = ((/* implicit */unsigned long long int) var_15);
            arr_58 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            var_41 *= ((/* implicit */unsigned char) var_6);
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 190139309U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-9223372036854775803LL)));
            arr_59 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_4)) : (var_17)));
        }
        /* vectorizable */
        for (unsigned char i_15 = 2; i_15 < 8; i_15 += 3) 
        {
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_18))));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            arr_64 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
            arr_65 [i_0 - 1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) 224U)) ? (((/* implicit */int) (unsigned short)4448)) : (((/* implicit */int) (short)-16721))));
        }
    }
    for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 2) /* same iter space */
    {
        arr_68 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15)))));
        var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_12))));
    }
    /* vectorizable */
    for (signed char i_17 = 1; i_17 < 20; i_17 += 1) 
    {
        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_16) : (var_11))))));
        var_47 = ((/* implicit */long long int) var_17);
    }
    for (unsigned int i_18 = 2; i_18 < 17; i_18 += 1) 
    {
        var_48 &= ((/* implicit */unsigned int) var_11);
        /* LoopSeq 2 */
        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_17)) : (var_3)))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3049576576765780779LL)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (short)-16739)))))));
            arr_76 [i_19] [i_18 + 1] [i_18 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            var_50 = ((/* implicit */unsigned int) max((var_50), (var_3)));
            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21815))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
        }
        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                for (unsigned short i_22 = 0; i_22 < 19; i_22 += 1) 
                {
                    {
                        arr_86 [i_22] [i_20] [i_21] [i_20] [(unsigned short)3] [i_18 + 2] = ((/* implicit */signed char) var_11);
                        arr_87 [i_21] &= ((/* implicit */_Bool) var_17);
                    }
                } 
            } 
            arr_88 [i_18] = ((/* implicit */signed char) var_16);
            arr_89 [i_20] = ((/* implicit */signed char) var_5);
        }
    }
}
