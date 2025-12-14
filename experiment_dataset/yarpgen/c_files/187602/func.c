/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187602
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] &= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_6 [(unsigned short)6] [(unsigned short)6] [i_2])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))), (var_17)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) var_6);
                        var_19 = ((/* implicit */int) var_7);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) arr_14 [i_2]))))) : (((((/* implicit */_Bool) 3634660539747226076LL)) ? (((/* implicit */unsigned long long int) arr_12 [i_5] [i_0] [i_0] [i_0])) : (6375755475027009245ULL)))));
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26102))) : ((+(arr_12 [i_1] [i_1] [i_0] [i_1])))));
                        }
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned short) arr_14 [i_0])), (var_0)))))));
                            var_22 *= ((unsigned short) max((arr_1 [i_4]), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        arr_22 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29487)) ? (((unsigned long long int) 6375755475027009243ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28491)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 599071877)) : (var_7))), (((/* implicit */long long int) var_8))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_26 [(_Bool)1] [i_2] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_2] [i_0])) ? (((/* implicit */int) ((short) (signed char)-126))) : (((((((/* implicit */int) (signed char)-38)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_2] [4LL] [i_2])) - (15172)))))));
                        var_23 = ((/* implicit */unsigned short) 6375755475027009245ULL);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned char) arr_27 [i_0])))));
                            var_25 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_6)))));
                            arr_30 [i_0] [i_0] [i_2] [i_0] [i_8 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) 
                        {
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_9 + 1] [i_2] [i_7])) ? (((/* implicit */int) arr_15 [i_0] [i_9 + 1] [i_9] [i_7])) : (((/* implicit */int) var_9))));
                            arr_33 [i_0] [i_0] [i_0] [7LL] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_9 - 1] [i_2] [i_1] [i_7] [i_7] [i_7] [i_2]))));
                            arr_34 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_9 - 1] [i_9 - 2] [i_9 + 1])) : (((/* implicit */int) var_1))));
                            var_27 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_16))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((unsigned short) arr_23 [i_0] [i_0] [i_2] [i_1]))));
                            arr_37 [i_0] [i_2] [i_2] [i_0] [i_2] [i_1] = ((/* implicit */signed char) ((long long int) (~(1658389895))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_29 = ((/* implicit */signed char) var_4);
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6)))))) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(var_5)))))))));
                            var_31 = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            } 
            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0])) ? (arr_45 [i_0]) : (arr_45 [i_0])))) ? (max((var_13), (arr_45 [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (arr_45 [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 15; i_15 += 3) 
        {
            for (long long int i_16 = 3; i_16 < 15; i_16 += 1) 
            {
                {
                    var_33 = ((/* implicit */long long int) 4852062658086567792ULL);
                    arr_53 [i_0] [i_0] = ((/* implicit */long long int) (+(24)));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 1; i_17 < 14; i_17 += 2) 
                    {
                        arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned short) (unsigned char)86)), (var_1))))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_17 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_0] [i_0]))) : (var_7)))));
                        var_34 = ((/* implicit */unsigned short) arr_35 [i_0] [i_15 + 1] [i_16]);
                    }
                    var_35 -= ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) min((arr_50 [i_15 + 1] [i_15 + 1]), (((/* implicit */short) arr_18 [i_16 + 2] [i_16 - 2] [(short)13] [i_15] [i_15 - 1] [i_0] [i_0]))))), ((-(arr_40 [(unsigned char)8] [i_15 - 1] [i_15]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        for (long long int i_19 = 2; i_19 < 8; i_19 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    for (signed char i_21 = 1; i_21 < 8; i_21 += 1) 
                    {
                        {
                            var_36 *= ((/* implicit */signed char) var_8);
                            var_37 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_21 [i_21 - 1] [i_20] [i_21 + 1] [i_21 + 1] [i_21])))));
                        }
                    } 
                } 
                var_38 *= ((/* implicit */_Bool) var_10);
                var_39 = var_13;
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((-(var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((long long int) var_13))));
}
