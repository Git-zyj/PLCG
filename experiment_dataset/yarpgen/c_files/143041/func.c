/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143041
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
    var_20 = ((/* implicit */short) min((((((unsigned int) (unsigned char)43)) >= (max((4294967282U), (((/* implicit */unsigned int) (_Bool)1)))))), (((_Bool) (+(var_5))))));
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (917504U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (!(arr_0 [i_0 - 1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [(short)20])) <= (((/* implicit */int) arr_9 [(unsigned short)10])))))));
                        var_24 = ((/* implicit */long long int) (+(262080U)));
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [(signed char)17] [i_1]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(signed char)16] [(short)10] [i_0 - 1] [i_0 - 1] [(signed char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0 + 1])))) : (((((/* implicit */_Bool) 262090U)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                var_27 *= ((/* implicit */unsigned char) (-(arr_1 [i_0 + 1])));
            }
            for (int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1] [i_1]))));
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_6 - 1]))));
                    arr_17 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) arr_7 [(short)12] [i_5])))));
                    var_30 += arr_4 [i_0 - 1] [i_6 + 1];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) ((unsigned short) arr_9 [i_7]));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                        arr_21 [i_0 - 1] [i_0] [i_5] [i_5] [(signed char)2] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [(short)3])))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) 4294705226U))));
                        arr_22 [i_0 + 1] [i_0 + 1] [9LL] [i_5] [9LL] [(short)15] = ((/* implicit */unsigned long long int) ((signed char) (((_Bool)0) ? (6930393035230964819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25134))))));
                    }
                    for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        arr_26 [22U] [i_6 + 1] [i_5] [14ULL] [14ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_5] [(_Bool)1] [i_6 - 1] [i_6 - 1] [i_8 - 1]))));
                        var_34 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_23 [i_6] [i_6 + 2] [i_6 + 1] [i_6] [i_8 - 1])) + (2147483647))) << (((((/* implicit */int) var_10)) - (21)))));
                        var_35 *= ((/* implicit */unsigned short) ((unsigned char) arr_18 [i_6] [i_6 - 1] [20ULL] [i_6 + 1] [i_6 - 1]));
                        var_36 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(short)7] [i_6 + 1] [i_5] [i_1] [i_0])))))) == (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                    }
                }
                var_37 = ((/* implicit */_Bool) arr_15 [i_5]);
            }
        }
        arr_27 [9U] [i_0] = ((/* implicit */unsigned short) (short)32764);
    }
    for (unsigned int i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_10 = 1; i_10 < 22; i_10 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 + 1]))))), (((((/* implicit */_Bool) arr_18 [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10]))) : (arr_31 [i_10 - 1] [i_10])))));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 2; i_12 < 19; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            arr_42 [i_9] [i_10] [i_11] [i_11] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_36 [i_9 - 1] [i_10 - 1]))) || ((!(((/* implicit */_Bool) arr_36 [i_9 + 1] [i_10 - 1]))))));
                            arr_43 [i_9] [i_11] [6ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61555)) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (_Bool)1))));
                            arr_44 [(unsigned short)3] [i_11] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_9]))));
                            var_39 -= ((/* implicit */_Bool) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_12] [i_10 + 1] [(short)4] [i_10 + 1] [i_13]))) + (3264814089U))))), (((/* implicit */unsigned int) (_Bool)0))));
                        }
                    } 
                } 
            } 
            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 984286287)) ? (((/* implicit */unsigned long long int) min((917504U), (((/* implicit */unsigned int) (unsigned short)40401))))) : (max((((/* implicit */unsigned long long int) (unsigned short)65506)), (var_16)))))) ? (((((arr_0 [i_10 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_38 [i_9] [i_9] [i_10 - 1] [i_9]))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32765)))))))) : (((/* implicit */long long int) (~(arr_3 [i_9 + 1]))))));
        }
        /* vectorizable */
        for (short i_14 = 1; i_14 < 21; i_14 += 3) 
        {
            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_9 + 1]))));
            var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_14] [i_14]))));
            var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        }
        arr_49 [i_9 + 1] [(short)20] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [3U])))))));
    }
    var_44 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)3980))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32764))))) ? (max((2287479047171266910ULL), (((/* implicit */unsigned long long int) 9105618516039628775LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8882487898220597906LL)) ? (2310213530U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
}
