/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126692
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_1 [i_2 - 1]))), ((~(((/* implicit */int) ((unsigned char) var_8)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */int) var_0);
                                arr_13 [i_3] [i_2] [i_2 - 1] [i_2] [(short)1] [i_2 - 1] [i_2] = ((/* implicit */short) max(((+(((/* implicit */int) arr_9 [i_3 + 2] [i_3 - 1] [i_3 - 2] [i_3 + 1])))), (((int) arr_9 [i_0 - 1] [i_1 - 1] [i_2 + 1] [(_Bool)0]))));
                            }
                        } 
                    } 
                }
                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_9 [i_1] [(unsigned char)9] [i_1] [(short)4])) ? (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [15LL] [i_0 - 1])) : (arr_3 [i_0] [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-31440))))) : ((-((+(18433241172511465459ULL)))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 4]))) : (arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) * ((+(var_3)))))));
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_17 ^= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 4] [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) var_1)));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 2])) / (((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 2]))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            arr_24 [(short)2] = ((/* implicit */unsigned int) ((signed char) arr_16 [i_0 - 1] [i_1 + 1] [i_5 + 1] [i_8 + 3]));
                            var_19 &= ((/* implicit */unsigned short) (~(arr_2 [i_0 - 1] [8LL] [i_8])));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_8 + 4])) ? (var_9) : (((/* implicit */long long int) arr_20 [i_0] [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_8 + 2]))));
                        }
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_5 + 1]))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) % (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5 - 1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_1 - 1])) ^ (((/* implicit */int) var_4)))))));
                            arr_29 [i_0] [(signed char)4] = ((/* implicit */long long int) ((arr_3 [i_0] [i_0 - 1]) >= (((/* implicit */unsigned long long int) var_9))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_14 [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_5 + 2]))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_17 [(unsigned char)3] [(unsigned char)3] [i_0] [i_5 + 3] [10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))));
                            var_27 *= ((/* implicit */signed char) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_5 + 4] [i_10])))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (1140150930038713203LL))), (((/* implicit */long long int) ((2044791610) <= (((/* implicit */int) (short)29)))))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_32 [i_0] [8U] [9LL])))))))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_11)))))) : (((((((/* implicit */int) arr_21 [i_0 - 1] [(_Bool)1] [i_5] [i_10] [i_10] [i_12])) | (((/* implicit */int) var_2)))) % (((/* implicit */int) arr_16 [i_10] [i_10] [i_5 + 2] [19LL]))))));
                            arr_38 [i_0] [i_1 + 2] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_9) | (arr_34 [i_0] [i_1] [i_5 - 1]))) >> (((var_13) - (632593952)))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_6)))), (((arr_5 [i_0 - 1] [i_5] [(_Bool)1]) ? (((/* implicit */int) arr_5 [(unsigned char)10] [i_1 + 4] [i_10])) : (((/* implicit */int) var_12))))))) : (((unsigned int) arr_18 [i_0 - 1] [i_5] [(unsigned short)6] [i_12]))));
                        }
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) (((~(((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_33 [(unsigned short)8] [(signed char)16]))));
                            var_32 = var_2;
                            arr_42 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 4])))))));
                            arr_43 [i_1] = ((/* implicit */short) var_6);
                        }
                        arr_44 [i_0 - 1] [(short)5] [i_5] [8] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_5 + 1])) : (((/* implicit */int) var_2))))), (((arr_2 [i_0 - 1] [i_1 - 2] [i_5 - 1]) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 8388592U)) <= (12878670633151876322ULL))) ? (((/* implicit */int) ((unsigned char) arr_26 [i_0 - 1]))) : (var_13)));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_6))))))));
                        arr_48 [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-61))));
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5 + 1] [i_5] [(short)10] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 5568073440557675287ULL)))) : (arr_3 [i_0 - 1] [i_1 + 2])))) ? (((int) ((var_0) >> (((((/* implicit */int) var_1)) + (8017)))))) : (((((((/* implicit */int) var_2)) / (((/* implicit */int) var_1)))) << (((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_36 [(unsigned char)15] [i_5 + 1] [i_1 + 3] [i_0])) - (16))))) - (2147461684)))))));
                    }
                    arr_49 [i_0] [i_0] = ((/* implicit */signed char) min((min((arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 2]), (arr_6 [i_0 - 1] [i_0 - 1] [i_1 + 2]))), (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_5 + 3])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5 + 3])) : (arr_6 [i_0 - 1] [i_0 - 1] [i_1 + 2])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 2; i_15 < 18; i_15 += 1) 
                    {
                        arr_52 [i_15] [i_1] [(short)3] [i_15] [(unsigned char)15] [i_5 + 2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_28 [i_0 - 1] [i_1 - 1] [i_5 + 4] [i_15] [i_15])) > (((/* implicit */int) arr_28 [i_0] [i_1] [i_5] [i_15 - 2] [i_15 + 2])))))));
                        arr_53 [i_15] = ((/* implicit */signed char) arr_14 [i_0 - 1] [i_1 - 2] [i_5] [i_15 - 1]);
                    }
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_56 [i_0 - 1] [i_1 + 4] [(signed char)15] [i_16] = ((/* implicit */short) ((((((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_5 + 4] [(unsigned char)18] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5 + 2] [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_5 + 2] [i_0 - 1] [i_1 + 3] [(short)15]))))) : (max((min((var_3), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_5)))))))));
                        var_36 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_37 [i_0] [i_1 + 2] [i_5] [i_5] [i_16])))) >> ((((+(var_9))) - (4939805465164231849LL))))))));
                        arr_57 [i_16] [i_16] [i_16] [(short)18] = ((/* implicit */short) ((((((((/* implicit */int) var_7)) + (2147483647))) << (((((arr_46 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (415906666))) - (6))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    }
                }
            }
        } 
    } 
}
