/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10487
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518)))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (arr_0 [i_0] [i_0 + 1]))))));
        var_16 = ((/* implicit */_Bool) (-(((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [15ULL] [i_0]), (arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_17 = ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1]))))) & ((~(arr_3 [i_0 - 1] [i_1] [i_1 - 2])))));
            var_19 = ((unsigned long long int) (-(arr_2 [i_1] [i_1 + 1])));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) max((arr_2 [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (max((arr_9 [(unsigned short)5] [i_0 - 1] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                    var_20 = ((/* implicit */unsigned long long int) var_8);
                }
                var_21 = ((/* implicit */long long int) (~(min((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_2]), (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_2])))));
            }
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_22 = (!(((/* implicit */_Bool) var_5)));
            var_23 = ((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) 2339171432U))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), ((((-(((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_13))))))) < ((~(((/* implicit */int) arr_1 [(unsigned char)8]))))))));
            var_25 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) -6643081876947876445LL)) >= (arr_4 [i_0 - 1])))));
            var_26 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 - 1])), (var_4))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 2]))))));
        }
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (((-(((/* implicit */int) var_10)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [1U]))))))))));
    }
    for (signed char i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) min((min((-6643081876947876445LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (signed char)0))));
        var_29 -= ((/* implicit */long long int) arr_13 [i_6 - 3] [i_6]);
        /* LoopSeq 4 */
        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
        {
            var_30 = ((/* implicit */signed char) min(((~(arr_2 [i_6 - 1] [i_6 + 2]))), (((/* implicit */long long int) ((var_0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))))))));
            var_31 ^= ((/* implicit */_Bool) max((((arr_8 [i_6 - 3] [i_7 + 3] [(signed char)11] [i_7 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 3] [i_7 + 3] [i_7] [i_7]))) : (var_1))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0)))))));
        }
        for (int i_8 = 3; i_8 < 12; i_8 += 1) /* same iter space */
        {
            var_32 ^= ((/* implicit */int) (((-(var_3))) >= (var_5)));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                var_33 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_2 [i_6 + 1] [i_6])), (min((((/* implicit */unsigned long long int) arr_11 [(signed char)14] [i_6 + 1] [i_8] [i_9] [i_9])), (var_4)))));
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) (short)0)), (arr_9 [i_6] [i_6] [(unsigned char)1] [(_Bool)1]))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_5 [i_6] [i_8] [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_8])) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) arr_26 [(short)3] [i_9] [i_9]))))) : (var_4))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_12), (((((/* implicit */_Bool) arr_13 [i_8 - 3] [i_11])) ? (((/* implicit */unsigned long long int) arr_2 [i_6] [i_6])) : (((((/* implicit */_Bool) arr_35 [i_6 - 2] [i_6] [0LL] [i_6] [i_6 + 1])) ? (((/* implicit */unsigned long long int) var_6)) : (var_2)))))));
                        var_37 |= ((/* implicit */int) arr_30 [i_6] [i_8] [i_10] [i_11]);
                        var_38 = ((/* implicit */unsigned long long int) ((_Bool) -2844121055068038837LL));
                    }
                    for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) (short)-1);
                        var_40 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_6] [i_6] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) arr_15 [i_6] [i_13] [i_6])) : (arr_18 [i_6]))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_6] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_11] [i_14])) || (var_9)));
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (-(max(((-(arr_17 [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))))));
                    }
                    var_43 *= ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (short)3))));
                }
                arr_41 [i_6] = ((/* implicit */signed char) (-(arr_4 [i_6 - 3])));
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    arr_48 [i_6] [i_8] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_32 [i_15] [i_8] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1063234818U)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_6] [i_6] [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 3] [i_15]))) : (var_3)));
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (arr_17 [i_6 - 3]) : (arr_17 [i_6 - 2])));
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4865759533033802298LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (-2951836977869450500LL)));
                    }
                    var_47 = (+(var_1));
                    var_48 |= ((/* implicit */int) (-((+(18446744073709551599ULL)))));
                }
                var_49 = ((/* implicit */short) (_Bool)1);
            }
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 12; i_18 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned long long int) arr_3 [i_6] [i_6] [i_6]);
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned int) ((arr_29 [i_6 + 1] [i_6 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            arr_64 [i_6] [i_18] [i_19] [i_20] [0U] = ((/* implicit */long long int) arr_35 [8ULL] [i_18] [i_18 - 2] [12] [(signed char)11]);
                        }
                    } 
                } 
            } 
        }
        for (int i_22 = 3; i_22 < 12; i_22 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                var_52 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))))) ? (((arr_50 [i_6] [i_6] [i_6] [i_6] [i_6] [i_23] [i_23]) ? (arr_29 [i_6 + 2] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) max((arr_17 [i_6]), (((/* implicit */long long int) var_9))))));
                var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_23] [i_6]))))) - (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                var_54 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_6 + 2] [i_22 - 2] [i_6 + 2] [i_23] [i_6]))) >= (14292110200203451110ULL))), (((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_6] [i_22]))))))))));
                arr_70 [i_22] [i_6] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((_Bool) arr_29 [i_22 - 1] [i_22 - 1])) ? ((+(((/* implicit */int) arr_54 [i_6] [i_22] [i_23])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (min((1109530981), (((/* implicit */int) arr_36 [i_6] [i_22] [i_22] [i_22] [i_22])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [4] [4] [i_6])))))));
            }
            for (unsigned char i_24 = 0; i_24 < 13; i_24 += 4) 
            {
                var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)1325))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_54 [i_6 - 3] [i_22] [i_22])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_6] [i_22] [i_24] [i_24]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) < (((((/* implicit */_Bool) arr_73 [1U] [1U] [(signed char)5])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6])))))))) : ((-(((/* implicit */int) arr_71 [i_22 - 3] [i_6] [i_6]))))));
                var_56 = ((/* implicit */short) var_4);
            }
            var_57 = ((/* implicit */unsigned long long int) arr_38 [i_6]);
        }
        var_58 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-13)) * (((/* implicit */int) (signed char)39))));
    }
    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
    {
        var_59 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)247)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_5 [i_25] [i_25 + 1] [i_25] [i_25 + 1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_26 = 0; i_26 < 16; i_26 += 3) 
        {
            arr_79 [i_26] [i_26] [i_26] = ((/* implicit */long long int) ((var_3) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_6) < (arr_11 [i_25] [i_25] [i_26] [i_26] [i_25])))))))));
            var_60 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= ((+(((/* implicit */int) arr_75 [i_26])))))))) >= (min((((/* implicit */unsigned long long int) var_9)), (arr_77 [i_25 + 1])))));
            var_61 = ((/* implicit */int) max((var_61), ((+(((/* implicit */int) ((min((var_1), (((/* implicit */unsigned long long int) arr_6 [i_25] [(_Bool)1] [i_25] [4])))) <= (((((/* implicit */_Bool) arr_2 [i_25] [i_26])) ? (arr_9 [i_25] [i_25] [(signed char)7] [i_26]) : (((/* implicit */unsigned long long int) arr_11 [12LL] [i_25] [i_25] [7ULL] [10ULL])))))))))));
        }
        arr_80 [i_25] = ((/* implicit */unsigned char) arr_75 [i_25]);
    }
    var_62 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), ((~(9334150U)))))), (min((var_3), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)213)))))))));
    var_63 = ((/* implicit */signed char) (~((-(9334150U)))));
    var_64 = ((/* implicit */signed char) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_10))))));
    var_65 ^= ((/* implicit */unsigned long long int) var_13);
}
