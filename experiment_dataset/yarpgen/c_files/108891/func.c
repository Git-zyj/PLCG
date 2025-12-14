/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108891
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned long long int) (~(var_1)));
                                var_12 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_5 [i_4] [i_0 - 1] [i_2])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (2879719432U))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(var_1)))))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) << (((arr_9 [i_1 - 1] [i_0] [i_2] [i_0 - 1] [i_1]) - (1192160428U)))))));
                    var_14 &= var_9;
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] |= ((/* implicit */int) var_10);
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_3)))))) + (var_1)))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) ^ ((-(1415247864U)))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        var_18 = ((/* implicit */int) var_10);
        var_19 = ((/* implicit */unsigned short) (~(1415247841U)));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((-(arr_20 [(unsigned short)6]))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= ((+(((/* implicit */int) var_3))))));
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 21; i_9 += 2) 
        {
            var_22 = ((/* implicit */short) (-((-(((/* implicit */int) var_4))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (2243003720663040ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_26 [i_9 - 3] [i_9 - 1]))))));
        }
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_4);
            var_25 = ((/* implicit */unsigned long long int) (-(2524125835U)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                var_26 = ((/* implicit */int) (~(var_2)));
                var_27 += (~(arr_21 [i_11 + 2]));
                var_28 = (((!((_Bool)0))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15392))))) : (4177920U));
            }
            /* vectorizable */
            for (unsigned char i_12 = 1; i_12 < 21; i_12 += 2) /* same iter space */
            {
                arr_34 [i_8] [i_10] [i_12 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)8))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_27 [i_10] [i_12 - 1] [i_12]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 13906369917297472881ULL))));
                    var_31 = (i_8 % 2 == zero) ? (((/* implicit */short) ((2879719422U) << (((arr_31 [i_12 + 1] [i_8] [i_12 + 1]) - (8912297770698641948LL)))))) : (((/* implicit */short) ((2879719422U) << (((((arr_31 [i_12 + 1] [i_8] [i_12 + 1]) - (8912297770698641948LL))) + (9065757782889085904LL))))));
                    var_32 = ((/* implicit */signed char) 1415247864U);
                }
                for (signed char i_14 = 3; i_14 < 22; i_14 += 1) 
                {
                    var_33 -= ((/* implicit */int) ((_Bool) var_1));
                    var_34 += (-(((/* implicit */int) var_0)));
                    var_35 = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (unsigned short)55706))))));
                }
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_36 = arr_35 [i_15] [i_15] [i_15] [i_15];
                    arr_45 [i_8] [i_10] [i_8] [i_15] = var_6;
                    arr_46 [i_8] [i_10] [i_10] = ((/* implicit */unsigned int) -1929669726);
                }
            }
            for (unsigned char i_16 = 1; i_16 < 21; i_16 += 2) /* same iter space */
            {
                var_37 = arr_30 [i_8] [i_8] [i_8];
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_28 [i_16 + 2] [i_16] [i_10])))) ? ((~(arr_47 [i_16] [i_16 + 2] [i_16 - 1]))) : (min((((/* implicit */int) ((signed char) 1415247867U))), (((((/* implicit */_Bool) 1415247864U)) ? (645175641) : (2026700395)))))));
            }
        }
        var_39 |= ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_4)) & (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) (signed char)-44))));
        var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)148))));
    }
    var_41 = ((/* implicit */unsigned char) 70368735789056ULL);
    var_42 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                {
                    var_43 = ((arr_37 [i_17] [i_18] [i_19] [i_17] [i_17]) << (((arr_37 [i_17] [i_18] [i_19] [i_18] [i_17]) - (3473695557U))));
                    var_44 = (~(((/* implicit */int) arr_8 [i_17] [i_18] [i_19])));
                    arr_59 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) || ((!((_Bool)1)))));
                    var_45 = ((/* implicit */unsigned char) (unsigned short)65535);
                }
            } 
        } 
        var_46 = ((/* implicit */int) (+(var_5)));
        var_47 = ((/* implicit */unsigned short) ((var_1) / (((/* implicit */unsigned int) 1506936025))));
    }
    for (short i_20 = 0; i_20 < 11; i_20 += 2) 
    {
        var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_5))))));
        var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (2879719431U)))) ? (max((((/* implicit */unsigned long long int) arr_26 [i_20] [i_20])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_20])))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (min((9085797305942655764LL), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_4)), (2853759662U))), (min((1415247840U), (((/* implicit */unsigned int) var_3)))))))));
    }
    for (unsigned short i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) 7236287906461234409LL))));
        arr_66 [i_21] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 2 */
        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 4) /* same iter space */
        {
            var_51 = ((/* implicit */short) (~((~(arr_37 [i_21] [i_21] [i_21] [i_22] [i_21])))));
            var_52 = ((/* implicit */unsigned short) min(((-((+(18446673704973762557ULL))))), (((/* implicit */unsigned long long int) var_1))));
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                for (signed char i_24 = 0; i_24 < 17; i_24 += 1) 
                {
                    {
                        var_53 = ((/* implicit */unsigned long long int) arr_44 [i_24] [i_21] [i_23] [i_24] [i_24] [i_22]);
                        var_54 = ((/* implicit */int) var_3);
                    }
                } 
            } 
            var_55 = ((/* implicit */long long int) ((int) (+((+(var_1))))));
            var_56 = ((/* implicit */long long int) (((-(2857311463U))) + (((/* implicit */unsigned int) max((var_9), (((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)33)))))))));
        }
        for (unsigned int i_25 = 0; i_25 < 17; i_25 += 4) /* same iter space */
        {
            var_57 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(-2061685297)))) / (min((((/* implicit */long long int) 2147483647)), (-895944369429184750LL)))));
            var_58 = ((/* implicit */unsigned int) (+(arr_26 [i_21] [i_25])));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                var_59 &= ((/* implicit */unsigned short) (!(arr_70 [i_26])));
                var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_7)) | (var_9))) : (((/* implicit */int) (unsigned char)224)))))));
                var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) var_10))));
            }
            /* vectorizable */
            for (short i_27 = 2; i_27 < 14; i_27 += 3) 
            {
                arr_81 [i_25] [i_25] [i_25] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_48 [i_27 - 2] [i_27 + 3] [i_27 + 1] [i_27 - 1]))));
                var_62 = ((/* implicit */long long int) (signed char)59);
                var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)105)) && (((/* implicit */_Bool) 3157797777U))));
            }
            for (int i_28 = 2; i_28 < 16; i_28 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 3) 
                {
                    var_64 = ((/* implicit */unsigned short) (~(((long long int) (short)-10020))));
                    var_65 = ((/* implicit */int) (unsigned char)27);
                    var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_24 [i_21]))))))) || (((/* implicit */_Bool) (~(3588351413U)))))))));
                    var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) var_5))));
                }
                var_68 = ((/* implicit */_Bool) var_4);
            }
            var_69 = ((((/* implicit */_Bool) (signed char)17)) ? (3054380485119749993LL) : (((/* implicit */long long int) -892995964)));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_30 = 0; i_30 < 14; i_30 += 1) 
    {
        var_70 = ((/* implicit */long long int) ((((/* implicit */int) ((2408908137U) <= (((/* implicit */unsigned int) var_9))))) == ((+(((/* implicit */int) var_7))))));
        var_71 = ((/* implicit */short) ((((/* implicit */_Bool) arr_89 [i_30])) ? (1415247864U) : (arr_65 [i_30])));
        var_72 += (-(((/* implicit */int) var_4)));
        var_73 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
        var_74 = ((/* implicit */unsigned long long int) arr_85 [i_30] [i_30] [i_30] [i_30]);
    }
}
