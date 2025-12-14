/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132767
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1)))))))));
                var_12 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (1827983819)))) ? (arr_2 [10ULL] [10ULL]) : (arr_4 [i_0] [(_Bool)1] [22ULL]))), (((/* implicit */unsigned long long int) (unsigned char)240))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [(_Bool)0] [i_1] [5] [i_1] [15ULL]))));
                            var_14 = ((/* implicit */int) arr_3 [22ULL] [(short)4] [(signed char)21]);
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [4ULL])) ? (((/* implicit */int) ((((unsigned long long int) arr_6 [(short)6] [(short)6] [(unsigned char)1])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)7] [18ULL] [(short)14] [(_Bool)1] [(signed char)3] [i_2])))))) : ((+((~(((/* implicit */int) (unsigned char)16))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_16 = (+(((/* implicit */int) var_3)));
                                var_17 *= ((/* implicit */unsigned short) arr_2 [i_0] [0LL]);
                                var_18 = ((/* implicit */int) arr_11 [8] [i_3] [i_2] [8]);
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_0 - 1] [i_1] [i_3 + 1])) && (((/* implicit */_Bool) var_3)))))));
                                var_20 = ((/* implicit */int) var_1);
                                var_21 = ((/* implicit */unsigned long long int) arr_3 [i_5] [(short)16] [12]);
                                var_22 = ((/* implicit */signed char) (unsigned short)30833);
                            }
                            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) (unsigned short)30833);
                                var_24 = ((/* implicit */unsigned int) ((unsigned char) var_0));
                                var_25 = -1827983820;
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 4; i_8 < 22; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)0)) != (var_0)))))));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_7 [(short)21] [(short)21] [13] [(short)9] [3LL] [2ULL]))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */signed char) (unsigned short)30833);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (signed char i_11 = 2; i_11 < 17; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_12] [(short)3])) * ((-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_11] [i_11])) > (((/* implicit */int) arr_33 [i_11] [i_12] [(short)8])))))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34726)))))), (min((((/* implicit */long long int) 1827983820)), (4253488398639236977LL)))))) ? (((/* implicit */unsigned long long int) max((arr_15 [i_10] [i_10] [(_Bool)1] [i_11 + 2] [9ULL]), (((((/* implicit */_Bool) arr_15 [i_10] [(signed char)14] [(signed char)4] [(short)1] [i_13])) ? (-1827983832) : (((/* implicit */int) (short)-2833))))))) : (((((arr_22 [(short)9] [(short)9] [(short)9] [6]) ? (arr_16 [i_10] [15ULL] [15ULL] [13] [18ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [10] [(signed char)0] [i_10]))))) << (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(short)15] [i_11]))));
                var_32 = ((/* implicit */unsigned char) min((((var_1) ? (arr_34 [i_10] [(unsigned short)7]) : (((/* implicit */int) ((unsigned char) arr_6 [22ULL] [5] [5]))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [(unsigned char)16] [(unsigned char)16] [(signed char)19] [i_10] [(unsigned char)16] [(_Bool)1] [i_10]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-67)) & (-1827983838)))))))));
            }
        } 
    } 
}
