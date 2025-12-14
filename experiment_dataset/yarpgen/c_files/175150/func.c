/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175150
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) 3707330073U);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    var_21 = ((/* implicit */long long int) arr_0 [i_1 - 2] [i_2 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_14 [(short)2] [i_0] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((arr_7 [(unsigned short)2]) & (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_3])), ((+(((/* implicit */int) var_16)))))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) (unsigned short)42015)) == (((/* implicit */int) (unsigned char)1)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                {
                    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23520))))) ? (((4882486805723014801LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42036)) ? (2047) : (var_2)))));
                    arr_24 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)56094))));
                    arr_25 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_4]))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2446498955U))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned int) (+(-1358796149)));
                        arr_34 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) var_8);
                        var_26 = ((/* implicit */long long int) (-(arr_27 [i_9] [i_4])));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)44452)))))))));
                    }
                } 
            } 
            arr_35 [i_7] [(short)2] = arr_29 [i_4 - 1];
            var_28 = ((/* implicit */long long int) ((var_2) <= (arr_22 [11LL] [i_4 - 1] [i_4 - 1])));
            var_29 = ((/* implicit */unsigned char) (unsigned short)45873);
        }
        for (short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) ((long long int) 1358796134));
                var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_11 + 1] [i_11])) ? (arr_19 [i_10] [i_4 + 1] [i_10]) : (arr_19 [i_10] [i_4 + 1] [i_10])));
                arr_40 [i_4] [i_10] [6LL] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1213489470710653833LL) + (((/* implicit */long long int) -1358796178))))) ? ((-(-1971493617))) : (((/* implicit */int) arr_15 [i_11 + 2]))));
            }
            for (unsigned int i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            arr_49 [i_12] [(short)11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [i_10] [i_14]))));
                            var_32 += ((/* implicit */short) (+(-5587312396386966904LL)));
                        }
                    } 
                } 
                arr_50 [i_12] = ((/* implicit */unsigned int) arr_30 [i_10]);
                var_33 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                var_34 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)23485))));
            }
            var_35 = ((/* implicit */int) ((arr_41 [i_4]) & (arr_41 [i_10])));
        }
        /* LoopSeq 2 */
        for (short i_15 = 4; i_15 < 12; i_15 += 3) 
        {
            arr_55 [i_15 - 3] [i_4] = ((/* implicit */unsigned int) arr_48 [(unsigned short)0] [i_15 + 1] [0ULL] [i_4] [(short)2] [6ULL] [i_15]);
            /* LoopNest 2 */
            for (unsigned short i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    {
                        arr_63 [i_4] [i_15] [1ULL] [i_4] [i_17] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) && (((/* implicit */_Bool) (unsigned short)23482)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            arr_66 [i_4] [1LL] [i_16] [9] [i_18] = ((/* implicit */unsigned int) (unsigned short)56070);
                            var_36 = ((/* implicit */unsigned long long int) arr_20 [i_18] [i_16 - 1] [i_4]);
                            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_29 [i_4 + 1]))));
                            var_38 = ((/* implicit */long long int) arr_37 [(_Bool)1] [i_15] [i_16]);
                        }
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            var_39 = ((/* implicit */int) (short)27517);
                            arr_69 [i_19] [i_16 - 1] [(unsigned short)8] [i_19] = ((/* implicit */int) (unsigned short)42035);
                            var_40 = ((/* implicit */unsigned long long int) ((long long int) (~(arr_52 [i_4] [10LL]))));
                        }
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_15 [i_4])));
            arr_70 [10U] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_10))))));
        }
        for (short i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) (+(4882486805723014816LL)));
            var_43 = ((/* implicit */signed char) ((((((/* implicit */int) arr_45 [i_4] [i_20] [11LL] [i_4])) << (((((((/* implicit */int) arr_51 [(unsigned char)0])) + (124))) - (14))))) == (((/* implicit */int) arr_73 [i_4] [0LL] [i_20]))));
            /* LoopNest 3 */
            for (short i_21 = 0; i_21 < 13; i_21 += 2) 
            {
                for (long long int i_22 = 1; i_22 < 10; i_22 += 2) 
                {
                    for (short i_23 = 0; i_23 < 13; i_23 += 2) 
                    {
                        {
                            var_44 ^= ((/* implicit */unsigned long long int) (+(var_2)));
                            arr_82 [i_21] [6U] [i_23] [i_20] = ((/* implicit */short) ((long long int) var_2));
                            var_45 = ((/* implicit */short) ((_Bool) arr_67 [i_22 + 1] [i_22 + 1] [4LL] [i_22 + 3] [(short)10]));
                            var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_4 + 1]))));
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */unsigned int) ((-6175565003386953358LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49)))));
        }
    }
    for (signed char i_24 = 1; i_24 < 12; i_24 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30849)))))) | (min((((/* implicit */unsigned long long int) (unsigned short)9439)), (arr_31 [i_24 + 1] [i_24 + 1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_25 = 2; i_25 < 12; i_25 += 3) 
        {
            var_49 = min(((~(((((/* implicit */_Bool) (unsigned short)9428)) ? (arr_17 [i_24]) : (((/* implicit */long long int) -1358796149)))))), (((/* implicit */long long int) ((unsigned short) 34359738367LL))));
            /* LoopSeq 2 */
            for (long long int i_26 = 0; i_26 < 13; i_26 += 4) /* same iter space */
            {
                var_50 = ((/* implicit */long long int) min((var_50), ((-(min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_4)) : (arr_20 [12ULL] [i_25] [i_26])))))))));
                arr_90 [i_26] [i_24] [i_24] = ((unsigned long long int) -649446077601391800LL);
            }
            for (long long int i_27 = 0; i_27 < 13; i_27 += 4) /* same iter space */
            {
                arr_93 [(unsigned short)0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)11221))))));
                var_51 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1358796149))));
                var_52 |= ((/* implicit */unsigned char) (~((~(max((15833554713860430723ULL), (((/* implicit */unsigned long long int) 3980058))))))));
            }
        }
    }
}
