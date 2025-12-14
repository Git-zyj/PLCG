/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117246
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
    var_14 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (((~(-1LL))) <= (var_7)))), (var_12)));
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)20)))) * (((/* implicit */int) var_11))))));
        var_18 -= ((/* implicit */unsigned short) min(((~(min((var_7), (var_10))))), (((/* implicit */long long int) (-(var_4))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (int i_5 = 3; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_4] [9] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_8 [(signed char)1]))))));
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                                arr_18 [i_1] = ((/* implicit */unsigned short) arr_14 [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_26 [11ULL] [i_2] [i_2] [i_6] [i_1] = arr_24 [i_1] [i_1] [i_1] [i_1] [i_1];
                                arr_27 [i_1] [i_1] = ((/* implicit */signed char) max((((arr_1 [i_1 - 1]) ? (var_4) : (((/* implicit */int) (unsigned short)63102)))), (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
                                var_20 = ((/* implicit */unsigned long long int) arr_9 [i_1] [3] [(short)13] [i_1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_12))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) arr_0 [i_1]);
                        var_23 += ((/* implicit */signed char) var_7);
                        var_24 |= ((/* implicit */int) 7200983745543956274LL);
                    }
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) & (((/* implicit */int) arr_6 [i_1] [i_2] [i_3])))) - (((((/* implicit */int) arr_31 [i_9] [i_3] [i_1] [i_1])) + (((/* implicit */int) var_3))))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10252))))) | (min((var_0), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_22 [(_Bool)1] [i_9] [(signed char)11] [(_Bool)1] [(signed char)11] [(signed char)11])))))))));
                        arr_35 [i_1] [(_Bool)1] [i_1] [i_9] = (!(((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) 1254068427U)), (var_0))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) min((arr_31 [i_1] [i_2] [(_Bool)1] [i_3]), ((_Bool)1)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)14] [(short)14] [(signed char)6]))))))))));
                        var_27 -= ((/* implicit */long long int) arr_7 [i_1]);
                    }
                    for (unsigned char i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) arr_8 [8LL]);
                        arr_39 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4999008323795044329ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */signed char) arr_34 [i_1] [i_2] [i_3] [i_1])), (var_2)))), (min((((/* implicit */unsigned short) (unsigned char)255)), (var_13)))))) : (max((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_38 [(short)13])))), (((((/* implicit */int) arr_15 [i_1] [i_1] [(signed char)16] [(signed char)16] [i_1] [(_Bool)1])) << (((arr_23 [i_1] [i_2] [i_2] [i_1] [i_1]) - (2812802802U)))))))));
                        arr_40 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_3] [i_1] [i_2 - 3] [i_1] [i_2])))))));
                        var_29 = ((/* implicit */signed char) ((((unsigned int) arr_29 [(_Bool)1] [(unsigned char)10] [10] [i_1] [0U] [i_1])) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))));
                        var_30 -= ((/* implicit */signed char) ((arr_23 [i_1 + 3] [i_1 + 3] [16] [i_10 + 1] [(signed char)14]) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_13 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_10 - 2] [10])), (var_6)))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        arr_45 [(_Bool)1] [(_Bool)1] [i_1] [i_11] = min((((/* implicit */unsigned int) arr_20 [(unsigned short)13] [i_1] [11] [11] [(unsigned short)13] [i_1])), (var_9));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_30 [(unsigned char)2] [(unsigned char)2] [i_2] [(unsigned char)0])))))))));
                    }
                }
            } 
        } 
        var_32 |= ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_16 [(unsigned short)7] [i_1 - 1] [(unsigned char)1] [i_1 + 3] [i_1 + 3])), (var_10))) != (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) arr_43 [i_1 + 1] [i_1] [i_1] [(signed char)7] [(unsigned short)10] [i_1 + 1])))))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 1) 
            {
                {
                    arr_50 [i_1] [4ULL] [i_13] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_30 [i_1] [6ULL] [i_13] [14LL])), (var_0)));
                    var_33 = ((/* implicit */unsigned long long int) 2587548800175691596LL);
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        var_34 = ((/* implicit */short) max((var_34), (arr_53 [9U] [9U])));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_14])))))))));
        /* LoopSeq 1 */
        for (long long int i_15 = 1; i_15 < 6; i_15 += 4) 
        {
            var_36 += ((/* implicit */unsigned long long int) (short)13705);
            var_37 = ((9223372036854775807LL) << (((((((((/* implicit */int) arr_34 [6] [(unsigned char)12] [(_Bool)1] [6])) - (((((/* implicit */int) (signed char)15)) << (((/* implicit */int) arr_7 [i_14])))))) + (44))) - (14))));
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_65 [i_14] [i_16] [i_16] [i_16] [i_14] = ((/* implicit */short) (+((~(((/* implicit */int) min((arr_3 [i_16]), ((_Bool)1))))))));
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_9))));
                            var_39 = ((/* implicit */unsigned long long int) ((short) min((min((((/* implicit */unsigned char) (signed char)98)), (arr_52 [i_18]))), (arr_62 [i_14] [i_14] [i_16] [i_14] [i_18] [i_16] [i_15 + 3]))));
                            var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-14538)), (arr_23 [i_14] [(unsigned char)13] [(_Bool)1] [i_14] [i_16])));
                            var_41 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)15758))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_8 [i_15 + 1]), (arr_8 [i_15 - 1])))), ((~(254124288)))));
            }
            /* vectorizable */
            for (int i_19 = 3; i_19 < 8; i_19 += 2) /* same iter space */
            {
                arr_69 [i_19] = ((/* implicit */unsigned char) arr_63 [(signed char)7] [i_19] [(signed char)7]);
                var_43 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) - ((~(190547014248529689LL)))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_19 - 1] [i_19 - 1] [i_15 - 1] [i_15 + 1] [i_15 + 4])) ? (((/* implicit */int) arr_22 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19])) : (((((/* implicit */int) var_3)) << (((/* implicit */int) var_8))))));
                var_45 -= ((long long int) var_13);
            }
            for (int i_20 = 3; i_20 < 8; i_20 += 2) /* same iter space */
            {
                arr_74 [i_14] [i_15] [i_20] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_20 - 1] [i_15 + 2])) & (((/* implicit */int) arr_53 [i_20 + 2] [i_15 + 4]))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_9 [14] [(unsigned short)12] [14] [(signed char)2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_14] [i_15] [i_14] [i_15] [i_14] [i_14] [(_Bool)1]))) : (max((395736557534053593ULL), (((/* implicit */unsigned long long int) var_11))))))));
                var_46 = ((/* implicit */unsigned char) arr_3 [i_15]);
            }
            for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (var_9))))), (((/* implicit */unsigned int) ((0) - (((/* implicit */int) (signed char)-75))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_22 = 1; i_22 < 8; i_22 += 2) 
                {
                    var_48 = ((/* implicit */int) min((min((max((var_0), (((/* implicit */unsigned long long int) 2147483647)))), (max((((/* implicit */unsigned long long int) arr_53 [i_14] [i_15])), (arr_28 [i_14] [i_21] [8U] [i_22]))))), (((/* implicit */unsigned long long int) min((arr_41 [i_22 - 1] [i_21] [i_22 - 1] [(short)3]), (((/* implicit */unsigned short) min((arr_53 [2LL] [9ULL]), (((/* implicit */short) (unsigned char)235))))))))));
                    var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_15 + 1] [i_21] [i_22 + 1]))));
                }
                var_50 = ((/* implicit */unsigned short) (signed char)-56);
            }
            var_51 -= ((/* implicit */signed char) var_3);
        }
    }
    for (unsigned int i_23 = 1; i_23 < 10; i_23 += 2) 
    {
        arr_85 [i_23] [i_23] = ((/* implicit */short) var_0);
        arr_86 [i_23] [(_Bool)1] = ((/* implicit */unsigned long long int) min(((~(var_10))), (((/* implicit */long long int) arr_42 [(_Bool)1]))));
    }
}
