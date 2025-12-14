/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116693
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    var_12 = ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (((~(arr_1 [i_0 + 1]))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2603)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [(short)1] [i_2] [(signed char)1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 - 1]);
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9891)) ? (max((var_10), (((/* implicit */long long int) ((int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -628591849))))));
                    }
                } 
            } 
        } 
        var_15 *= (signed char)-1;
    }
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
        {
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9891))) : (arr_15 [7U] [(unsigned char)1] [i_4])));
            /* LoopSeq 3 */
            for (short i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (((((/* implicit */_Bool) 775088764790979805LL)) ? (9147141297598671080ULL) : (((/* implicit */unsigned long long int) 1251714642))))));
                    arr_22 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned short) arr_20 [(_Bool)1] [(short)6]));
                    arr_23 [i_4] [3LL] [i_6] = ((/* implicit */long long int) 12424996634042887248ULL);
                }
                arr_24 [7U] [i_6] [i_6] [15] = ((/* implicit */signed char) ((long long int) (-(2418820621U))));
            }
            for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                arr_27 [i_4] [i_5] [i_8] = ((/* implicit */unsigned int) arr_25 [i_8] [i_5] [(unsigned short)5]);
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        {
                            arr_34 [11ULL] [i_5] = ((/* implicit */signed char) var_3);
                            arr_35 [(_Bool)1] [15] [15] [5LL] [i_8] [i_8] = ((/* implicit */short) ((unsigned int) var_4));
                            arr_36 [i_4] [i_5] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) arr_28 [i_8] [i_4] [i_8] [(short)14] [(short)14] [i_4]);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((arr_32 [i_4] [(signed char)4] [i_4] [i_5] [(signed char)4] [i_5] [4U]) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (arr_14 [i_4 - 2])));
            }
            for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                var_19 = ((/* implicit */long long int) 3U);
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 14; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        {
                            var_20 ^= (~(((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_4]))) : (arr_29 [i_4] [i_4] [i_4] [i_4]))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [(unsigned short)15] [i_5] [i_5] [(unsigned short)3] [(unsigned short)15])) + (0)))) ? (arr_26 [i_4] [i_4 + 2] [i_4]) : (((/* implicit */unsigned long long int) 775088764790979795LL)))))));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned short) ((long long int) (~(var_1))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (unsigned short)62947))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 3; i_14 < 14; i_14 += 2) 
        {
            arr_50 [i_14] [i_14] [i_4] = ((/* implicit */short) ((long long int) 1065454578));
            arr_51 [(short)11] = ((/* implicit */long long int) arr_45 [i_4 + 1] [10LL] [i_4 + 1] [i_4] [i_4 + 1]);
        }
        arr_52 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)43313);
        var_24 = ((/* implicit */unsigned int) ((-420347390) | (((/* implicit */int) ((short) (unsigned short)62943)))));
    }
}
