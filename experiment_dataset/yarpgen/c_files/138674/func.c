/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138674
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) : (var_4)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [10LL] [i_1]))) : ((-(var_4)))));
            arr_6 [(_Bool)1] [10LL] &= ((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */short) ((long long int) (_Bool)1));
                        arr_14 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_3)))))) < (((var_11) / (var_11))))) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) 2147483647))))) : (((/* implicit */int) arr_1 [(short)3]))));
                        var_18 += ((short) ((((/* implicit */_Bool) (short)-16999)) ? ((~(1061642356))) : (((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        for (short i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
        {
            arr_18 [i_0 + 1] [i_0 - 1] [i_4] = ((/* implicit */long long int) var_0);
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(min((var_6), (((/* implicit */long long int) arr_9 [i_4] [i_0] [(unsigned char)8]))))))));
            /* LoopNest 2 */
            for (short i_5 = 4; i_5 < 9; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((unsigned long long int) var_6))))) >> (((((((/* implicit */long long int) 1071012161U)) * (2047LL))) - (2192361893545LL))))))));
                        var_20 = ((/* implicit */unsigned char) min((0LL), (((/* implicit */long long int) (_Bool)1))));
                        var_21 |= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((short) var_6))) || (((((/* implicit */_Bool) arr_21 [i_0] [6] [(short)8])) || (var_2)))))), (min((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] = ((/* implicit */signed char) var_6);
        }
        for (short i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_22 ^= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (var_13))))) + (((((/* implicit */_Bool) ((long long int) var_15))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (7238763465129850314ULL) : (((/* implicit */unsigned long long int) 1460707649U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
            var_23 = ((/* implicit */_Bool) ((unsigned int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) ((short) 876199437230681003LL)))))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_14)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_11))))))))));
                            var_25 = ((short) (!(((/* implicit */_Bool) min(((short)24015), (((/* implicit */short) var_2)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned int) ((var_14) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11)))) ? (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (min((arr_26 [i_0 - 1]), (((/* implicit */long long int) var_3)))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_34 [i_0] [i_7] [i_11] [i_0])))), ((!(((/* implicit */_Bool) var_6))))))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((~(-809128123))), (((((/* implicit */int) var_1)) >> (((/* implicit */int) var_2))))))) * (((unsigned int) (+(((/* implicit */int) var_0)))))));
                            arr_44 [7LL] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12))))))));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_10))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) arr_21 [i_15] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        var_31 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_5)))))) != (var_13));
                        var_32 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_35 [i_0 - 1]));
                    }
                    for (unsigned char i_17 = 2; i_17 < 12; i_17 += 3) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 2047LL)) ? ((((_Bool)0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_15] [i_15]))))) : (((/* implicit */long long int) 1598107666))));
                        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_15] [(_Bool)1] [i_14] [i_0 - 1] [i_15]))) : (var_4)))))));
                    }
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [1LL] [i_14]))) : (var_7)))) ? (((((arr_17 [i_0] [(signed char)10]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-28224)) + (28260))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14] [i_14]))) ^ (arr_23 [i_0] [i_0]))))), (min((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_1)))))))));
                    var_36 = ((/* implicit */long long int) min((var_2), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_42 [i_0] [(_Bool)1] [i_0 + 1] [(short)2] [i_14] [(short)2])) : (arr_43 [i_0] [i_0 + 1] [i_14] [i_14] [i_15] [i_15]))))))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((var_9) ? ((~(arr_33 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))))))));
                }
            } 
        } 
        var_38 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [2] [2]))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_57 [i_18] &= ((/* implicit */short) -5564350525314519486LL);
        var_39 ^= ((/* implicit */_Bool) 1587208193663267142ULL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_19 = 4; i_19 < 22; i_19 += 3) 
    {
        var_40 = ((/* implicit */long long int) (unsigned char)153);
        var_41 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_0)))));
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19] [i_19]))) == (var_4)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_58 [(short)15] [i_19])) : (((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            var_43 |= ((/* implicit */_Bool) -1061642362);
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_20] [i_19 - 4] [i_19 - 3])))))));
        }
    }
    for (short i_21 = 3; i_21 < 24; i_21 += 2) 
    {
        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) arr_63 [i_21 + 1] [22])))))))));
        var_46 = ((/* implicit */unsigned char) min(((!(((_Bool) (unsigned char)179)))), ((!(((/* implicit */_Bool) var_6))))));
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (+(((/* implicit */int) var_15)))))));
        /* LoopSeq 4 */
        for (unsigned char i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            arr_69 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_6)) : (min((((/* implicit */unsigned long long int) ((long long int) var_0))), ((+(var_14)))))));
            var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_12))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_66 [(signed char)16] [i_21] [i_21]))))))));
            arr_70 [i_21] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_67 [i_21 + 1] [i_21 - 1] [i_21 - 3])), (arr_66 [i_21 - 1] [i_21 - 1] [i_21])))) : ((+(var_7)))));
        }
        /* vectorizable */
        for (short i_23 = 1; i_23 < 23; i_23 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    {
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-30457)))))))));
                        arr_78 [i_21 - 2] [(unsigned char)7] [i_21] [i_21 - 2] = ((/* implicit */long long int) (~(1071012144U)));
                        var_50 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (var_13)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_7))))));
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) var_15))));
                    }
                } 
            } 
            var_52 -= ((/* implicit */long long int) arr_73 [i_21 - 3] [i_23 + 2] [i_23]);
        }
        /* vectorizable */
        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 2) 
        {
            var_53 ^= ((/* implicit */short) (-(((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_26]))))))));
            var_54 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_72 [i_21]))) != ((-(((/* implicit */int) arr_75 [(short)19] [(short)19] [i_21] [i_26]))))));
            var_55 -= ((var_2) ? (var_7) : (((/* implicit */long long int) var_3)));
            arr_81 [i_21] = ((/* implicit */unsigned long long int) (~(arr_72 [i_26])));
        }
        for (long long int i_27 = 0; i_27 < 25; i_27 += 1) 
        {
            var_56 = ((/* implicit */_Bool) arr_84 [i_27]);
            var_57 = ((/* implicit */unsigned long long int) min((var_57), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_21] [(_Bool)1] [i_27])) ? (((/* implicit */int) var_12)) : (arr_77 [i_21] [i_21] [23U] [(_Bool)1])))) || (var_2))))) % (((((/* implicit */_Bool) ((long long int) 5564350525314519498LL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (16859535880046284474ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [(short)0])))))))));
            var_58 += ((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (268434432U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [(signed char)6]))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (arr_68 [(short)22])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)8850)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_76 [i_27] [i_27] [2LL]))))));
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_59 = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 876199437230681003LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9170484082721285451LL))));
                var_60 = ((/* implicit */int) ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_29 = 1; i_29 < 21; i_29 += 1) 
                {
                    var_61 = ((/* implicit */int) var_15);
                    arr_90 [i_21] [i_27] [i_27] [i_27] [i_27] [i_29] = ((/* implicit */unsigned char) ((_Bool) var_12));
                }
            }
            arr_91 [i_21] = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((short) var_5))), (((var_2) ? (arr_66 [i_21 - 3] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_21]))))))), (((/* implicit */unsigned int) ((_Bool) ((signed char) var_2))))));
        }
    }
}
