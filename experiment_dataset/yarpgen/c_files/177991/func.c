/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177991
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [4] [i_0] [5ULL] [i_2 + 1] [i_4 - 2]) & (arr_10 [5] [i_1] [(unsigned short)7] [i_3] [i_4 + 2])))) ? (((((-5144514158363177660LL) ^ (3897187299509625194LL))) ^ (((/* implicit */long long int) arr_0 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [8LL]))) : (5144514158363177660LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((3039078044U), (((/* implicit */unsigned int) (unsigned short)21474))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [(unsigned short)3] [9LL] [(_Bool)1]))))))) : (((/* implicit */int) ((unsigned short) arr_12 [8ULL] [(unsigned short)0] [i_2 - 1] [(short)1] [i_0] [(signed char)10] [i_1])))));
                            }
                            for (unsigned int i_5 = 3; i_5 < 8; i_5 += 3) /* same iter space */
                            {
                                var_20 |= ((/* implicit */unsigned int) var_0);
                                var_21 = ((/* implicit */int) min((1125899369971712ULL), (((/* implicit */unsigned long long int) 3196825396U))));
                                var_22 ^= ((/* implicit */int) arr_3 [6ULL]);
                                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 3] [i_5 + 3] [i_2 - 1] [10LL]))) + (arr_10 [4ULL] [i_2 + 1] [8LL] [i_2 + 1] [i_5 - 3])))));
                                var_24 *= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(short)5] [i_2 - 1] [i_5 + 2])) || (((/* implicit */_Bool) arr_15 [(_Bool)1] [i_2 - 3] [i_5 - 2]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)44062)) : (-2066406169)))));
                            }
                            for (unsigned int i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned long long int) arr_12 [(unsigned char)4] [(_Bool)1] [i_2 - 2] [i_2 + 1] [(short)7] [4ULL] [(unsigned char)2]);
                                arr_19 [7] [i_1] [i_2 - 3] [6ULL] [(unsigned short)5] [(unsigned char)0] = ((/* implicit */unsigned char) var_13);
                            }
                            arr_20 [1] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / (((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) var_15)) - (15722)))))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 2066406172)) ? (5144514158363177635LL) : (((/* implicit */long long int) 1654697602U)))))) + (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_8 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_7] [(unsigned short)2] [(unsigned char)4] = ((/* implicit */long long int) min((max((arr_5 [i_0] [i_0] [i_7 - 2] [8]), (arr_5 [i_0] [(unsigned short)5] [i_7 - 2] [i_0]))), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [6ULL] [0LL] [i_7 + 1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_7 + 1])))))));
                            arr_28 [i_8] [4ULL] [2] &= ((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)6] [i_7 + 1] [10] [8ULL] [i_1] [i_1]);
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_28 = -5144514158363177660LL;
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [0LL])) ? ((+(var_9))) : (((/* implicit */int) max((var_5), (var_7)))))))));
                    var_30 = ((/* implicit */unsigned long long int) -2066406160);
                    arr_38 [i_9] [13] [(unsigned short)18] [19LL] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [20LL]))) % (max((((/* implicit */long long int) (+(-2147483647)))), (((((/* implicit */_Bool) (unsigned short)21474)) ? (-6907730829819347087LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228)))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [18] [(signed char)0] [20ULL] [(unsigned char)15])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63060)))))) ? (arr_35 [i_9]) : ((+(arr_34 [(signed char)13])))))) ? (((/* implicit */unsigned long long int) arr_36 [17ULL])) : (((unsigned long long int) arr_30 [(unsigned short)8]))));
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 20; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            {
                var_32 = (+(min((arr_40 [i_13]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)235))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_50 [i_15] = ((((/* implicit */long long int) 1546420920)) & (var_4));
                            arr_51 [(unsigned char)12] [i_13] [17ULL] = ((/* implicit */unsigned char) (short)-32747);
                        }
                    } 
                } 
            }
        } 
    } 
}
