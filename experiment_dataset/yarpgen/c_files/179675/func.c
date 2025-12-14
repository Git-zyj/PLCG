/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179675
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (arr_4 [i_1 + 3] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_17 ^= ((/* implicit */signed char) arr_4 [i_1 + 2] [i_1 - 1]);
                    }
                } 
            } 
            var_18 += ((/* implicit */unsigned char) 4294967291U);
            arr_10 [i_1] [(short)5] [11U] = ((/* implicit */short) arr_4 [i_0] [i_1 + 2]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_4] [i_4] [(short)5] [i_0]))));
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [9LL] [i_7 + 1] [i_7 + 1] [i_6] [i_4]))));
                            var_21 = ((/* implicit */short) arr_6 [i_0] [i_6] [(short)8]);
                            var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_13 [i_5 - 1] [i_5 - 1] [i_5 + 1]));
                        }
                    } 
                } 
            } 
        }
        arr_20 [(short)2] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_14 [7U] [(unsigned short)11])) ? (((/* implicit */int) arr_16 [(short)10] [9U] [1LL] [i_0] [(short)0])) : (((/* implicit */int) var_6))))));
        var_23 = ((/* implicit */long long int) ((signed char) arr_12 [i_0] [(unsigned char)11] [(unsigned char)11]));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    arr_29 [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                    arr_30 [i_9] |= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)33364));
                }
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        var_24 = max((((/* implicit */unsigned short) arr_32 [i_10])), (((unsigned short) ((short) arr_31 [i_10]))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 20; i_12 += 2) 
            {
                for (unsigned int i_13 = 4; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) (-(4294967295U)));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_40 [i_12])), (arr_33 [i_11] [i_12]))), ((~(arr_33 [i_11] [i_13 + 3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 4294967291U)) || (((/* implicit */_Bool) arr_35 [i_11] [10ULL]))))), (arr_38 [i_10] [i_10] [i_10] [(unsigned short)20]))))) : ((-((+(arr_35 [(short)16] [i_11 - 1])))))));
                    }
                } 
            } 
        } 
        arr_42 [(unsigned short)9] = arr_31 [i_10];
        arr_43 [(short)20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned short)21)) << (((((/* implicit */int) (unsigned short)11502)) - (11497)))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) 
        {
            {
                var_27 *= ((/* implicit */short) ((unsigned short) arr_48 [i_15] [(short)12] [i_14]));
                arr_49 [i_14] = ((/* implicit */unsigned short) (+(max((arr_33 [(short)17] [i_15 + 1]), (((/* implicit */unsigned long long int) arr_44 [i_15 - 1] [i_15]))))));
            }
        } 
    } 
}
