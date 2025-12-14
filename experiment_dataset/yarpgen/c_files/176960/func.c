/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176960
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-974815279) : (((/* implicit */int) (signed char)112))))) ? (((17830944317339397206ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29142))))) : (((unsigned long long int) -974815278)))))));
        arr_4 [(unsigned short)6] [i_0 + 1] = ((/* implicit */unsigned char) var_11);
        arr_5 [10LL] = ((/* implicit */unsigned long long int) (unsigned short)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)65535)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((var_15) / (((/* implicit */unsigned long long int) arr_20 [i_1] [0ULL] [i_2] [i_3] [0ULL] [i_4] [i_5 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65509))) : (var_9))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)0)))) : (((/* implicit */int) (unsigned short)42)))))));
                            arr_22 [i_3] [i_3] [i_3] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_15 [i_4] [i_3] [i_1] [i_1]))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 1] [i_5]))))));
                            arr_23 [(short)3] [(short)3] [i_2] [i_4] [14LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3]))))))) ? (var_4) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_9 [i_5 - 1] [i_2])))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_28 [i_2 - 1] [i_4] [i_3] [i_3] [i_3] [i_1] [(signed char)4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_1])) ? (min((var_7), (((/* implicit */int) arr_24 [i_1])))) : (((/* implicit */int) arr_27 [i_1] [i_1]))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_6 + 1]) & (arr_10 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (var_10) : ((-2147483647 - 1))))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((min((-1376876856), (((/* implicit */int) var_18)))) - ((-(var_14)))))) : (((((((/* implicit */_Bool) 1664815861)) ? (var_3) : (0ULL))) & (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_19 [i_7] [i_4] [i_3] [i_2] [i_1])));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((-(((/* implicit */int) var_17)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 + 1]))) >= (1946596613U)))))))));
                            arr_34 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((int) ((var_5) * (((/* implicit */unsigned long long int) 8388606))))));
                            arr_35 [i_1] [i_1] [i_1] [i_4] [i_7 - 1] [i_1] [i_3] &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
                            arr_39 [i_2] [i_3] [(unsigned char)4] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) % (var_15)));
                        }
                        arr_40 [i_4] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_12 [i_2] [i_2 + 1]))))));
                        arr_41 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) -1LL);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) 3667085707783888862LL);
    }
    for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_54 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_45 [i_12])), (var_6)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), ((unsigned short)0)))) : (var_1)))));
                        var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (unsigned short)65533))), (((int) (!(((/* implicit */_Bool) -479360091)))))));
                        var_28 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_51 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_10 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (arr_51 [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_10 - 1]))) * (((((/* implicit */_Bool) arr_51 [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_10 - 2])) ? (arr_51 [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_10 + 1]) : (18446744073709551613ULL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((unsigned char) var_12))))) + (2147483647))) << (((((/* implicit */int) min(((unsigned short)65523), (((/* implicit */unsigned short) ((signed char) var_15)))))) - (15)))));
            var_30 = ((/* implicit */short) ((((long long int) arr_45 [i_13])) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_9 + 1])) ? (var_10) : (((/* implicit */int) arr_45 [i_9 - 2])))))));
            var_31 = ((/* implicit */_Bool) ((((long long int) arr_53 [i_9] [i_13] [i_13] [i_13] [i_9 + 1])) << (((((((/* implicit */_Bool) 3U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) : (9223372036854775806LL))) - (6LL)))));
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_33 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [(_Bool)1]))))))));
            var_34 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2119700373433790509LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32364))))) : (min((var_9), (arr_44 [i_14] [i_9])))))));
            var_35 = ((/* implicit */unsigned long long int) var_14);
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((((/* implicit */_Bool) arr_44 [i_16] [i_15])) ? (arr_43 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_16] [i_15] [i_14] [3LL] [i_9])))))))) - ((((!(((/* implicit */_Bool) arr_46 [(unsigned short)11] [(unsigned short)11])))) ? (max((var_5), (12116934429465559372ULL))) : (((/* implicit */unsigned long long int) arr_62 [i_9] [i_9 + 1] [i_9]))))));
                        arr_64 [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) var_18)) + (((/* implicit */int) arr_47 [i_9 + 1] [i_9 - 2] [i_9 - 2]))))));
                        arr_65 [i_9] [i_14] [i_15] [i_16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (arr_46 [i_15] [i_15])))) : (((((/* implicit */_Bool) 4294967289U)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_9])))))));
                        arr_66 [i_9] [i_16] [(unsigned short)11] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (225903311))))) ? (var_14) : (((/* implicit */int) ((_Bool) (short)-5945)))));
                    }
                } 
            } 
            arr_67 [18U] [i_14] &= ((/* implicit */unsigned char) var_4);
        }
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_37 = ((/* implicit */signed char) 1383012993926127054ULL);
        arr_70 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_17] [3ULL] [i_17] [(_Bool)1] [i_17] [i_17] [i_17])) ? (var_3) : (var_11)));
        /* LoopSeq 2 */
        for (unsigned char i_18 = 1; i_18 < 8; i_18 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_19 = 2; i_19 < 11; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_19 - 1] [i_18 + 3] [i_20 + 1]))) : (var_11))))));
                            arr_80 [4LL] [i_20] [i_19 + 1] [0] [i_17] [i_17] [i_17] &= ((unsigned long long int) ((unsigned char) arr_19 [10ULL] [12ULL] [(_Bool)1] [12ULL] [i_17]));
                            arr_81 [i_20] [i_20] [i_17] [i_20] [i_20] = ((/* implicit */int) ((long long int) (signed char)0));
                            arr_82 [(unsigned short)8] [(unsigned short)8] [(signed char)2] [6] [4LL] [10ULL] [(unsigned char)4] &= ((/* implicit */long long int) ((_Bool) (unsigned short)15));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (arr_37 [i_18 + 4] [i_18 + 4] [i_18 - 1] [i_18 + 2] [i_18]) : (arr_37 [i_18 + 4] [i_18 - 1] [i_18 - 1] [i_18 + 3] [i_17])));
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) (~(417268054)));
                            var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)106)) * (((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) (unsigned char)254)) : (var_1)))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) << (((var_5) - (32806453310795134ULL)))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_60 [i_18 + 1] [i_18 - 1])));
                            var_44 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_22])) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : ((-(3667085707783888862LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            arr_96 [(short)4] [(short)4] &= ((/* implicit */unsigned char) (signed char)(-127 - 1));
            /* LoopNest 2 */
            for (unsigned char i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    {
                        var_45 = ((/* implicit */int) ((arr_93 [i_17] [i_17] [(_Bool)1]) + (((/* implicit */long long int) var_1))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((_Bool) var_8))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    {
                        arr_107 [i_17] [i_28] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_10)) : (var_15)));
                        var_47 &= ((((/* implicit */_Bool) arr_6 [i_17])) ? (var_15) : (((/* implicit */unsigned long long int) var_8)));
                        var_48 = ((/* implicit */signed char) ((unsigned long long int) var_6));
                    }
                } 
            } 
        }
        arr_108 [(unsigned char)8] &= ((/* implicit */unsigned short) arr_29 [0LL] [(unsigned short)6] [i_17] [(unsigned short)4] [i_17] [16U] [(unsigned char)16]);
        var_49 &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)6))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_30 = 2; i_30 < 23; i_30 += 2) 
    {
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                {
                    for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_118 [i_30 - 2] [i_32] [i_32] [i_32] [i_32])) ? (((((/* implicit */_Bool) arr_46 [(_Bool)1] [i_33])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))) : (((var_10) / (((/* implicit */int) var_6)))))) : (((((/* implicit */int) (_Bool)1)) - (-417268054)))));
                            var_51 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_53 [8U] [8U] [8U] [i_30 + 1] [i_30 - 2])), (var_3)))));
                            var_52 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8547530656202243996LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) arr_45 [i_30 - 1])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)1))))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)9742))))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */_Bool) ((short) ((unsigned char) (_Bool)1)));
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned char) 2147483647);
}
