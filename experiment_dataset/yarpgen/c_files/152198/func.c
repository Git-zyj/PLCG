/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152198
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
    var_14 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44373)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1])) : (arr_4 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]))) - (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])) != (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) || (((/* implicit */_Bool) 1179822630696663374ULL)))))), (((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1304206793)) : (17266921443012888241ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_0]);
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_11))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((((unsigned int) arr_4 [i_0] [i_5] [i_2 - 1] [i_3 + 2])), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_3 + 1] [i_2 + 1])))))));
                            var_18 = ((/* implicit */unsigned char) ((_Bool) (-(17266921443012888242ULL))));
                        }
                        arr_20 [i_1] [(_Bool)1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1])))), (max((((/* implicit */int) arr_1 [i_2 - 1])), (arr_4 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1])))));
                    }
                    for (signed char i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned int) var_11);
                            var_20 = ((max((((((/* implicit */int) var_4)) << (((/* implicit */int) var_8)))), (arr_23 [i_7 - 1] [i_2] [i_7 + 1] [i_2] [i_2 + 1] [(short)0]))) & (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_6] [(_Bool)0])) >= (((/* implicit */int) ((signed char) arr_15 [i_2 - 1] [i_2 + 1] [i_1] [i_2] [i_2 - 1])))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_27 [1] [i_1] [1] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) arr_6 [i_0] [i_8 - 1])));
                            var_21 = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_1] [(short)10]);
                            var_22 = ((/* implicit */unsigned long long int) arr_17 [i_8] [6LL] [i_6 - 1] [3] [3] [i_0]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) -2199023255552LL))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2] [i_6 - 2])) ? (arr_21 [i_1] [i_2 - 1] [4LL] [i_6 - 2]) : (arr_21 [i_2] [i_2 - 1] [i_6] [i_6 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                        var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_24 [i_2 + 1] [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1] [i_6 - 2])) : (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_6 + 2]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 600463541)), (17266921443012888241ULL))))));
                        arr_28 [(_Bool)1] [i_6] [i_2] [i_1] [6LL] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((106465500U), (arr_13 [i_0] [i_2 + 1] [i_2] [i_6 - 1] [i_6 - 1])))), (((arr_24 [(_Bool)0] [8] [i_1] [i_0] [(_Bool)0]) ? (((/* implicit */unsigned long long int) 2886244516U)) : (((((/* implicit */_Bool) 4027642659U)) ? (1179822630696663374ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-7113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18491))) : (((((/* implicit */_Bool) (unsigned short)47997)) ? (17266921443012888241ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (unsigned short)29415)) : (((/* implicit */int) (unsigned short)17539)))))))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_15 [i_2 + 1] [i_2] [i_1] [i_2] [i_1]) == (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_9])) ? (((/* implicit */int) var_12)) : (arr_9 [i_0])))))) == (((/* implicit */int) ((unsigned short) arr_1 [i_2 - 1])))));
                        var_27 = max((arr_14 [i_9] [i_2] [i_2 - 1] [i_1] [i_1] [i_0]), (((((/* implicit */int) max((arr_1 [i_1]), (var_4)))) ^ ((+(((/* implicit */int) var_4)))))));
                        var_28 *= ((short) 1848201438);
                    }
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_29 = max((arr_35 [i_1] [2]), (arr_5 [i_0] [i_2 + 1] [i_10]));
                        arr_36 [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((-1848201438) / (((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 4; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_43 [i_11] [i_11] [1] [i_1] [i_1] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_6 [i_2 - 1] [i_1]))))));
                                var_30 *= ((/* implicit */signed char) (-((((((-(((/* implicit */int) var_8)))) + (2147483647))) << (((((/* implicit */int) arr_34 [8] [i_1] [i_2] [(signed char)0] [11U])) - (16882)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 4; i_13 < 11; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_2 + 1] [i_2 + 1])) ? (2657195527U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_13 - 1] [i_2 + 1] [i_2 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */short) (((-(((/* implicit */int) arr_33 [i_0] [i_2 - 1] [i_13 - 2])))) <= ((-(((/* implicit */int) var_6))))));
                            var_33 = var_11;
                        }
                        var_34 = ((/* implicit */unsigned short) ((unsigned long long int) var_12));
                    }
                    arr_51 [i_0] [6U] = ((/* implicit */unsigned int) max((arr_48 [i_0] [i_0] [i_1] [i_2] [i_2]), (((/* implicit */int) ((((/* implicit */int) (unsigned short)17538)) == (((/* implicit */int) (!(var_9)))))))));
                }
            } 
        } 
    } 
}
