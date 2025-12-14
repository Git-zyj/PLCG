/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106302
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) - ((~(((/* implicit */int) (short)-32767))))))) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) var_8))))) : (var_8))))));
                            arr_10 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_3]);
                            arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_0] [i_0] [i_3] [i_0]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [6LL] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)1] [(short)3] [i_4] [(short)3]))))))) << (((/* implicit */int) arr_16 [i_0] [i_1] [i_4 - 1]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_8)) + (arr_1 [i_1] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_1] [2ULL] [i_6] [12LL] [i_7] = ((/* implicit */int) var_4);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_17 [i_0] [i_1] [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_24 *= ((/* implicit */short) min((min((max((((/* implicit */long long int) arr_26 [i_9] [i_9] [4U] [i_9] [i_9])), (var_12))), (((/* implicit */long long int) (+(var_10)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_9]))) : (2490935813U)))) ? (((/* implicit */int) max((arr_6 [6ULL] [6ULL] [i_11 + 3]), (var_17)))) : (((/* implicit */int) ((unsigned short) arr_23 [i_0] [i_0] [i_9]))))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 1592009868)) : (-9223372036854775780LL))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_11] [i_0] [i_0])), (var_6)))))))) <= ((-(((/* implicit */int) (unsigned short)58734))))));
                                arr_37 [i_11] [i_10] [(unsigned short)19] [i_1] [i_0] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(1595322535U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_38 [i_13] [i_12] [i_1] [i_0])))), (min((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_12] [i_0])))), (((/* implicit */int) arr_36 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_13] [i_0] [i_1]))))));
                                arr_43 [3ULL] [(short)6] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_12] [i_12])) || (arr_38 [i_13] [i_12] [i_9] [i_1])))) & (((((/* implicit */int) var_14)) & (((/* implicit */int) var_7))))))) * (((((/* implicit */_Bool) arr_31 [i_0])) ? (arr_28 [i_13] [(_Bool)1] [10LL]) : (((/* implicit */unsigned long long int) ((arr_19 [i_1] [(short)21] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))))))));
                                var_27 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_9] [i_9]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)5730)), (max((arr_4 [i_9] [(short)14] [(short)14]), (var_5)))))));
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_14] |= ((/* implicit */short) 0U);
                    arr_47 [i_0] [i_14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_18))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_52 [i_1] [i_14] [i_1] [i_14] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((var_12) >= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [(short)5] [(unsigned short)6] [(unsigned short)6]))))));
                                arr_53 [12] [12] [i_14] [(short)14] [i_14] = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_15]))));
                                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_45 [i_1] [i_1] [i_1]))) || (((/* implicit */_Bool) arr_12 [i_1] [i_15 - 1]))));
                            }
                        } 
                    } 
                }
                for (short i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                {
                    arr_56 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_0] [i_17])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 65535U))))))))) + (min((((/* implicit */long long int) (unsigned short)63488)), (-9223372036854775788LL)))));
                    arr_57 [i_17] [i_1] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)26706)))))) != (arr_44 [i_0] [i_17] [(_Bool)1])));
                    arr_58 [(unsigned short)4] [(unsigned short)4] [i_17] [i_17] = ((/* implicit */short) arr_22 [i_17]);
                    arr_59 [i_17] [i_1] [i_17] [i_17] = ((/* implicit */_Bool) ((((arr_25 [2ULL] [i_1] [i_17] [i_0] [i_17]) <= (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_13))))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_17])) : (((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_17] [i_17])) : (((/* implicit */int) ((unsigned short) (short)-32761)))))));
                    var_30 *= ((/* implicit */_Bool) (~(127LL)));
                }
            }
        } 
    } 
    var_31 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (7319749527542737807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))), (((/* implicit */long long int) ((_Bool) var_16)))));
}
