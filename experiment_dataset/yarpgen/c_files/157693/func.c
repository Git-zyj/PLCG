/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157693
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
    var_14 = ((/* implicit */unsigned int) ((int) var_2));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (var_11)))) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (((unsigned int) arr_0 [i_0 - 1]))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -3030052739173099456LL))))) >> (((arr_1 [14U]) + (1835144061)))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_1 + 2] [i_1 + 2] [i_1] = ((/* implicit */signed char) var_12);
            arr_10 [i_1] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(-3030052739173099456LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) -3030052739173099456LL))) : (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) -247683053)) : (12601411557800708068ULL)))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_20 [i_1 + 2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((3030052739173099476LL) != (((/* implicit */long long int) 1652689089U))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_1))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (short)11490)) / (arr_14 [i_1 - 1] [i_2] [i_4 + 1] [i_4] [i_4 + 1]))))));
                        }
                        arr_21 [i_2] [i_3] [i_2] = ((/* implicit */int) 5673614655071283622LL);
                        arr_22 [i_1] [i_1] = 399571570U;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-1))) ? (((/* implicit */int) (signed char)6)) : ((-(arr_14 [i_4 + 2] [i_1 - 1] [7U] [i_6 + 1] [(_Bool)1])))));
                            var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) > (1652689089U))) ? (8064U) : (var_9)))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((int) (_Bool)1))) != (((((/* implicit */_Bool) -1306773135)) ? (3030052739173099456LL) : (((/* implicit */long long int) var_2)))))))));
                            arr_26 [i_6] [i_1 + 2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) * (((/* implicit */int) (short)-12)))));
                            arr_27 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((short) (_Bool)1));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */_Bool) var_4);
                            var_23 = ((/* implicit */long long int) 131071);
                            arr_30 [i_1] = ((/* implicit */_Bool) -4323972537311582419LL);
                            arr_31 [1ULL] [i_7] [i_4] [i_4 + 2] [i_3] [i_2] [0U] = ((var_12) ? (((/* implicit */long long int) 661498039)) : (((long long int) (_Bool)1)));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) 
        {
            var_24 &= ((/* implicit */int) var_0);
            /* LoopSeq 1 */
            for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_25 = ((((/* implicit */_Bool) (+((-(213597622U)))))) ? (var_4) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((-661498051) <= (131071))))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) (short)18030)) - (18030)))))) ? ((~(6025352009442324942ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_27 = 5567272516543397003LL;
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        arr_43 [9ULL] [i_8] [i_8 + 1] = ((/* implicit */unsigned int) var_2);
                        var_28 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_33 [i_10] [i_8] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18))))), (((/* implicit */unsigned long long int) var_12))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_10))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_0))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        var_31 += ((/* implicit */int) min((((/* implicit */short) min((var_12), (arr_13 [i_1 - 1] [i_1] [(short)6] [i_1] [i_8 - 1])))), ((short)0)));
                        arr_46 [i_1] [i_1 + 1] [i_8] [i_1 + 1] [i_1 + 1] [i_10] [(signed char)2] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        arr_49 [i_1] [i_8 + 1] [i_8 + 1] [i_1] [i_10] [i_13] [i_13] = ((/* implicit */unsigned int) ((long long int) -661498040));
                        arr_50 [10ULL] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_5)) + (var_4))) + (((/* implicit */unsigned long long int) ((int) ((var_6) ? (((/* implicit */unsigned long long int) 3536700436U)) : (3682808859046135715ULL)))))));
                        arr_51 [i_8] = 2436397551U;
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((661498039) < (arr_11 [i_1 - 1])))), (min((1858569744U), (((/* implicit */unsigned int) arr_11 [i_1 - 1])))))))));
                    }
                    arr_52 [i_1] [i_1] [i_1] [(signed char)5] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_39 [i_1 + 1] [i_1 + 1] [i_9 - 2] [i_9 + 2] [i_10]))) > (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [4ULL]))))));
                }
                var_33 = ((/* implicit */short) 2436397551U);
            }
            var_34 = ((/* implicit */unsigned int) (short)6);
            var_35 = ((/* implicit */unsigned int) (~(var_13)));
        }
    }
    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((((/* implicit */_Bool) 978487775)) ? (213597622U) : (((/* implicit */unsigned int) 1116282738)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            arr_58 [i_14] = ((((/* implicit */_Bool) (short)31045)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-31046)) <= (((/* implicit */int) (signed char)(-127 - 1))))))));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                for (long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                {
                    {
                        var_37 = ((/* implicit */short) 11246631267314806653ULL);
                        arr_65 [i_14] [i_14] [i_15] = ((/* implicit */signed char) 978487775);
                        arr_66 [(short)0] [i_17] [2] &= ((((/* implicit */_Bool) (short)-31046)) ? (((((/* implicit */_Bool) 2436397570U)) ? (1073709056U) : (1652689107U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                } 
            } 
            var_38 ^= ((/* implicit */_Bool) (short)-132);
            var_39 = 2436397552U;
        }
    }
}
