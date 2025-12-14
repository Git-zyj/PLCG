/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156706
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) << (((((arr_0 [i_0] [i_0]) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) - (18446744073709551606ULL)))));
        arr_4 [i_0] [i_0] = var_5;
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_1]);
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) : (arr_13 [i_2 + 2] [(unsigned short)11] [i_1 + 1] [i_1 - 1]))))));
                        var_14 = ((/* implicit */short) (-(((int) arr_1 [i_0]))));
                    }
                } 
            } 
            var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (var_12))));
            arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) (short)10592)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 2] [(signed char)0] [i_1 + 1]))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44958)) / (((/* implicit */int) (unsigned short)43427))));
            arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58280)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
            arr_19 [i_0] [i_4] [i_4] = ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0])));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            arr_23 [i_0] [i_5] = ((/* implicit */short) arr_12 [i_5 - 1] [i_5 - 3] [i_5 - 3] [i_5 + 1]);
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (var_6))))));
            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49283)) && (((/* implicit */_Bool) arr_16 [i_5 - 1] [(signed char)12]))));
            arr_24 [i_0] [(unsigned short)20] = ((/* implicit */int) ((_Bool) var_5));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    {
                        arr_32 [i_5] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            arr_35 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8 + 1] [i_7 - 2] [i_5 - 1])) ? (arr_6 [i_5 - 2] [i_7 - 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) arr_33 [i_8] [i_8] [i_8] [(unsigned short)12] [i_8 - 1] [i_8 - 1] [(unsigned short)15]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) ^ (((((/* implicit */_Bool) (short)-20009)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_9] [i_9] [i_0])))));
            arr_38 [i_0] [i_0] = ((/* implicit */short) max(((((+(((/* implicit */int) arr_28 [i_0] [(unsigned char)12] [i_9] [i_9])))) << (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_0] [i_9] [i_0]))) : (4294443008U))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned char)116)) - (90)))))))))));
            var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
        }
        var_23 = ((/* implicit */_Bool) arr_27 [i_0] [i_0] [(short)7]);
        /* LoopNest 3 */
        for (short i_10 = 3; i_10 < 21; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 3; i_12 < 20; i_12 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_47 [i_12 + 1] [4] [i_12] [i_10 - 1]), (arr_47 [i_12 + 1] [i_10 - 2] [i_10 - 1] [i_10 - 1])))))));
                            var_25 ^= ((/* implicit */short) max((arr_49 [i_0] [i_11] [(_Bool)0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (var_11))))));
                        }
                        arr_50 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12 - 2] [(short)13] [(short)13] [i_0]))) : (var_6))))), (min((arr_27 [i_0] [i_10 - 2] [i_10 - 2]), (var_6)))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_33 [i_12] [i_12 - 3] [i_12] [i_12] [i_11] [i_11] [i_11])))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (665744481)))) : (((((/* implicit */_Bool) arr_13 [i_12] [i_12] [(unsigned char)2] [i_11])) ? (((/* implicit */long long int) arr_33 [i_12] [i_12 + 1] [(unsigned char)17] [i_12] [(unsigned char)17] [i_12 - 2] [i_11])) : (arr_13 [i_11] [i_10] [i_10] [i_10]))))))));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_12 + 1] [i_10 - 1] [i_0] [(short)21])) || (((/* implicit */_Bool) (unsigned char)25)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_14 = 2; i_14 < 22; i_14 += 2) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_28 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_58 [i_15] [i_15 + 1] [i_15 + 1]))), ((~(((/* implicit */int) arr_58 [i_15] [i_15 - 1] [i_15 - 1]))))));
                    arr_60 [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
}
