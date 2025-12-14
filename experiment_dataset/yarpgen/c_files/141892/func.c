/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141892
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((unsigned int) var_16))) ? (1590655582U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30441)) < (var_15)));
    var_19 *= ((/* implicit */unsigned long long int) (!(var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [12LL] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(signed char)14]))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) 1590655567U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (short)-30466)) : (((/* implicit */int) arr_0 [i_1]))))) : (arr_4 [i_0] [i_1])))));
            var_21 = ((/* implicit */long long int) ((((arr_3 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_15))))));
            var_22 = ((/* implicit */unsigned char) ((int) arr_4 [i_0] [i_0]));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_23 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_11))))))));
                arr_9 [i_0] [i_3] &= ((/* implicit */unsigned short) ((int) arr_5 [i_0] [i_3]));
                var_25 ^= ((/* implicit */long long int) arr_7 [(unsigned char)8] [i_0] [i_2] [(_Bool)1]);
            }
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))));
                /* LoopSeq 4 */
                for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    arr_16 [i_0] [i_0] [i_4] [i_5 + 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */long long int) arr_10 [i_0] [(unsigned short)1] [i_4] [i_5 + 1])))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+((~(arr_6 [i_2]))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) ((arr_3 [i_0]) + (arr_3 [i_0])));
                    var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_6] [i_2] [i_4])) ? (var_0) : (((/* implicit */long long int) arr_6 [i_4]))));
                    arr_20 [i_6] |= ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0]));
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (arr_0 [i_0])));
                    var_32 = ((/* implicit */_Bool) var_16);
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)9)))))));
                    arr_24 [i_4] [i_2] [i_0] [i_7] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_0] [(unsigned short)14] [(short)14] [i_7]) ? (arr_8 [i_2] [(unsigned char)0]) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((((/* implicit */_Bool) arr_1 [5LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (0ULL)))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_35 = ((/* implicit */unsigned char) arr_18 [i_0] [(unsigned short)10] [i_4] [(signed char)7]);
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_4])))))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((arr_6 [i_4]) <= (arr_6 [i_4]))))));
                }
                arr_27 [12LL] [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) 0))));
                var_38 ^= ((/* implicit */unsigned short) ((short) 2704311707U));
            }
            var_39 = ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
        {
            var_40 &= ((/* implicit */long long int) ((int) var_2));
            var_41 = ((((/* implicit */_Bool) 987858130089268525ULL)) ? (((/* implicit */int) (unsigned char)237)) : ((-(-1))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_42 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((int) arr_18 [i_0] [i_9] [i_10] [i_0])) >> (((((/* implicit */int) ((signed char) var_6))) + (31)))))) : (((/* implicit */unsigned short) ((((((int) arr_18 [i_0] [i_9] [i_10] [i_0])) + (2147483647))) >> (((((/* implicit */int) ((signed char) var_6))) + (31))))));
                arr_34 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned int) arr_18 [i_0] [i_9] [i_10] [i_9]))))) ? (((int) (unsigned char)47)) : (arr_5 [i_0] [i_0])));
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [18U] [i_9] [18U])) ? (((/* implicit */int) arr_12 [8LL] [i_9] [i_9])) : (((/* implicit */int) arr_12 [(unsigned char)18] [i_9] [i_10])))))));
            }
            var_44 ^= ((/* implicit */unsigned short) (-(arr_22 [i_0])));
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_36 [i_0] [i_0] [(unsigned short)6]))));
            arr_37 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) 12));
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_11] [(unsigned short)5] [i_11])) ? (((/* implicit */int) arr_25 [(_Bool)1])) : (((/* implicit */int) arr_19 [(_Bool)1] [i_11] [i_0] [i_11] [i_11] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)9176)) == (((/* implicit */int) arr_30 [12U])))))) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_26 [i_0] [i_0] [i_0] [(unsigned short)6] [16U] [i_11])))));
            var_47 |= ((((arr_6 [12]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0]))))) ? (((((/* implicit */_Bool) arr_33 [i_11] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)59)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (_Bool)0)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_48 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (-7788438499337003442LL) : (9189293363607877611LL)));
            var_49 = ((/* implicit */signed char) (~(((/* implicit */int) arr_39 [i_0] [i_12]))));
            arr_41 [i_12] [i_12] &= ((/* implicit */long long int) var_7);
            /* LoopNest 3 */
            for (long long int i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (unsigned char i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */short) ((arr_7 [i_13] [i_13 - 1] [i_13 + 1] [(signed char)6]) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((+(((/* implicit */int) arr_42 [i_14]))))));
                            var_51 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_18 [i_0] [5ULL] [i_14 + 1] [i_15])) % (34084860461056ULL)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                var_52 = ((/* implicit */long long int) (-(18446709988849090559ULL)));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_60 [i_0] [(short)7] [i_12] [i_0] [3LL] [18LL] = ((/* implicit */short) var_1);
                            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) arr_40 [i_12] [6ULL] [i_16]))));
                            var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((((unsigned int) var_7)) << (((((int) arr_18 [i_17] [(_Bool)1] [i_12] [i_17])) - (1780704993))))))));
                        }
                    } 
                } 
            }
            for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                var_55 |= ((((/* implicit */int) arr_48 [(unsigned short)15] [i_12] [i_12] [i_12] [i_12])) + (((/* implicit */int) arr_48 [i_0] [i_0] [i_12] [i_12] [i_19])));
                arr_64 [i_19] [i_12] [i_12] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_52 [i_12]))));
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                var_56 = ((/* implicit */signed char) arr_25 [i_20]);
                var_57 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_12])) ? (((/* implicit */unsigned int) arr_5 [10ULL] [i_12])) : (arr_47 [i_20] [i_12] [i_12] [i_12] [i_0])));
                var_58 = ((/* implicit */int) ((unsigned char) arr_46 [19U] [i_12] [(short)4] [1] [i_20]));
            }
        }
    }
    for (unsigned int i_21 = 3; i_21 < 13; i_21 += 4) 
    {
        var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? ((+(((/* implicit */int) (unsigned char)239)))) : (((((/* implicit */int) arr_13 [i_21 - 3] [i_21] [i_21] [i_21 - 3])) + (((/* implicit */int) (unsigned char)221)))))))))));
        arr_71 [6] |= ((/* implicit */_Bool) arr_70 [i_21 + 1]);
        var_60 = ((/* implicit */unsigned char) -7788438499337003442LL);
    }
    for (unsigned short i_22 = 1; i_22 < 14; i_22 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                var_61 -= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_22] [(unsigned char)11] [(unsigned char)5] [i_22 + 3]))) ? ((~(2381693402U))) : (((/* implicit */unsigned int) arr_5 [i_23 - 1] [i_24]))));
                var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_23 - 1] [i_23 - 1] [i_23 - 1])) ? (((/* implicit */int) arr_52 [i_24])) : (((/* implicit */int) ((unsigned char) arr_56 [i_22 + 1] [i_23] [i_24] [i_24]))))))));
            }
            var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)0)), (-4489852632960764888LL))))));
            var_64 *= ((/* implicit */int) ((_Bool) 5422402605113951639ULL));
        }
        for (int i_25 = 4; i_25 < 14; i_25 += 3) 
        {
            arr_83 [i_25 - 3] [i_22] = ((/* implicit */unsigned int) (-(((int) arr_59 [14LL] [i_22 + 1] [i_22]))));
            var_65 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)22013))))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (arr_10 [i_22 + 3] [(unsigned short)12] [i_25] [i_25])))), (((((/* implicit */_Bool) arr_73 [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_32 [i_22 + 3] [i_25 - 4] [(unsigned char)12] [i_25 + 1])))))));
            arr_84 [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) > (((/* implicit */int) (signed char)73))));
            var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((max((arr_33 [i_25 + 3] [i_25] [i_25 + 1]), (((/* implicit */unsigned long long int) arr_74 [i_25 + 3] [(signed char)5] [10U])))) - (18298631698136445001ULL))))))));
        }
        var_67 = ((/* implicit */int) 2381693402U);
        var_68 = arr_10 [(short)18] [(_Bool)1] [i_22 + 1] [i_22 + 2];
    }
}
