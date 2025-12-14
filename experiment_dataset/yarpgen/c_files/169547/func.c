/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169547
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (max((var_3), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])) == (((/* implicit */int) (unsigned short)26023)))) ? (((/* implicit */int) min((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2]), (arr_6 [i_2] [i_1 + 1] [i_1 + 1] [i_2])))) : (((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_1 - 2] [i_2]))));
                    var_14 = ((/* implicit */short) arr_6 [i_0] [i_1] [i_0] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_15 += ((/* implicit */unsigned char) (short)-4402);
                        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4415)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672))) : (var_1))) : (((/* implicit */long long int) (~(arr_4 [i_0] [i_1 - 1] [i_2]))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) arr_15 [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_1 - 1] [i_1]);
                            var_17 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (short)4393)))));
                            arr_17 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [5LL] [i_4] [i_5]))) < (var_2)))), (((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            arr_18 [i_2] [4LL] [7ULL] [3ULL] [i_1] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((((int) arr_14 [(short)1] [(short)1] [(unsigned short)5] [i_4] [i_4])) + (2147483647))) >> ((((~(((6347714308228856689LL) >> (((((/* implicit */int) arr_6 [i_2] [i_4] [i_1] [i_2])) - (11600))))))) + (24795759016518985LL)))))) : (((/* implicit */_Bool) ((((((int) arr_14 [(short)1] [(short)1] [(unsigned short)5] [i_4] [i_4])) + (2147483647))) >> ((((((~(((6347714308228856689LL) >> (((((((/* implicit */int) arr_6 [i_2] [i_4] [i_1] [i_2])) - (11600))) - (38992))))))) + (24795759016518985LL))) - (24795759016518930LL))))));
                            arr_19 [i_2] [i_1] [i_2] [(_Bool)0] [i_4 - 1] [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_5] [i_1] [i_2] [i_0])) > (((/* implicit */int) arr_16 [i_2])))))) % (-8038864544159678160LL))), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)28672)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_2]))))) : (((unsigned int) var_7)))))));
                        }
                        arr_20 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 9223372036854775808ULL)) ? (var_1) : (-6347714308228856690LL))), (((/* implicit */long long int) arr_2 [i_1]))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_2] [(unsigned short)8] [i_2] = (short)-512;
                            var_18 += ((/* implicit */unsigned int) var_7);
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            arr_27 [i_7] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_0] [(unsigned short)8] [i_2] [i_4] [i_7])) : (((/* implicit */int) arr_13 [i_4]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28673))) & (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_1 - 2] [i_2] [i_2] [(short)7] [i_4 - 1])))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_31 [i_0] [i_2] [i_0] [i_4 - 1] [i_8] = ((unsigned char) arr_12 [i_4 - 1] [i_2] [i_0]);
                            arr_32 [i_0] [i_0] [i_0] [i_4 + 1] [(short)8] [i_2] = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (short)-1)))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7168)) ? (((/* implicit */long long int) 3U)) : (var_3))))));
                            arr_33 [i_8] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_1 - 1] [i_2] [i_4 + 1]))));
                        }
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4199127228U)) ^ (max((arr_23 [i_1] [i_1 + 1] [i_4] [i_4 + 1] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [(short)7] [i_2] [i_4])))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            {
                var_22 = arr_35 [i_10];
                var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_38 [i_10] [i_10 + 1] [i_10])) ? (((/* implicit */int) ((arr_35 [(signed char)7]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_37 [i_9] [i_10]))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                arr_46 [i_10] [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)25803)), (arr_36 [i_13])))), (((arr_34 [i_13]) | (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [i_9])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775788ULL) == (((/* implicit */unsigned long long int) arr_45 [i_9] [i_10] [i_11] [i_12])))))) : (((((/* implicit */unsigned long long int) 4294967288U)) - (max((arr_44 [i_13] [i_12] [i_12] [i_10] [(short)14] [i_10 + 1] [i_9]), (((/* implicit */unsigned long long int) arr_45 [(signed char)14] [(unsigned short)7] [(unsigned short)7] [(signed char)10]))))))));
                                var_24 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (unsigned short)65535))));
                arr_47 [i_9] [i_9] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_39 [i_9] [i_10 + 1] [i_10] [i_9])), ((-(var_9)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_14 = 2; i_14 < 22; i_14 += 4) /* same iter space */
    {
        arr_51 [i_14 + 3] = ((/* implicit */short) 0ULL);
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            for (short i_16 = 1; i_16 < 23; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_0)))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_14] [i_15]) && (((/* implicit */_Bool) var_8)))))) : (min((((/* implicit */unsigned long long int) var_9)), (944714531518142255ULL))))))))));
                        arr_60 [i_14 + 1] [i_15] [i_16] [i_17] = ((/* implicit */short) ((((arr_58 [i_15] [i_15] [i_17] [i_15] [i_15]) | (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_5))))))) < ((-((-(arr_53 [i_14] [i_15] [i_15])))))));
                        arr_61 [i_15] [i_16] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_16] [i_16 + 1] [i_16] [i_16 - 1])) ? (((/* implicit */int) arr_57 [i_16] [i_16 + 2] [i_16] [i_16 + 1])) : (((/* implicit */int) arr_57 [i_16] [i_16 + 1] [(unsigned short)15] [i_16 + 2])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_18 = 2; i_18 < 22; i_18 += 4) /* same iter space */
    {
        arr_64 [i_18] [i_18] = ((/* implicit */signed char) ((max((arr_54 [i_18 + 3] [i_18]), (arr_54 [i_18 - 1] [i_18]))) && (((/* implicit */_Bool) min((arr_52 [i_18 + 2] [i_18]), (((/* implicit */short) arr_54 [i_18 + 1] [i_18])))))));
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_27 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [(_Bool)1] [i_19] [i_19] [i_19])) / (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) -6738335741220594815LL)) ? (12798841208597560595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) * (((/* implicit */unsigned long long int) max((((arr_65 [i_18] [i_19]) / (((/* implicit */long long int) ((/* implicit */int) (short)-358))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34109))) * (0LL))))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_62 [i_18] [i_19])) ? (((/* implicit */int) arr_52 [i_19] [i_18])) : (-1))))))))));
        }
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((((/* implicit */int) arr_55 [i_18] [i_18] [i_18] [i_18])) % (((((/* implicit */_Bool) arr_55 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (signed char)-53)))))))))));
        var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_50 [i_18] [(unsigned short)17])) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_58 [i_18] [i_18] [i_18] [i_18 - 1] [i_18]) != (((/* implicit */unsigned long long int) var_1)))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 817688338)))))));
        var_31 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((arr_59 [i_18] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) arr_56 [i_18]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_65 [i_18] [(short)12])) : (arr_58 [i_18 + 2] [i_18] [i_18 + 2] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32387)) ^ (1)))))));
    }
}
