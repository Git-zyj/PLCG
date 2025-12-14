/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106846
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(-487822856043485843LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)4084)))))));
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) arr_12 [i_4] [i_4 + 3] [i_4] [i_4 - 3] [i_4 - 3]);
                            /* LoopSeq 1 */
                            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                            {
                                var_21 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483641)), (1294186309U)))) ? ((~(((/* implicit */int) (short)18394)))) : (2147483641)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (arr_13 [i_5] [i_5]) : (0)))) ? (arr_6 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)232)))))))));
                                var_22 = ((/* implicit */long long int) max((var_22), ((+(var_17)))));
                                arr_15 [i_1] [i_2] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483641)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (var_17)))) ? (((var_1) ? (arr_14 [(short)10] [(short)10] [i_2] [(unsigned char)12] [(unsigned char)12] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [12ULL]))))) : (((/* implicit */unsigned long long int) 1887758282))))));
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4])))))));
                            }
                            /* LoopSeq 2 */
                            for (short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_1] [i_3] [i_3] [i_1] [i_1]))))))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) ((((/* implicit */int) arr_18 [i_4] [i_3])) <= (((/* implicit */int) arr_18 [i_4] [i_4])))))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                            {
                                var_26 &= ((/* implicit */signed char) 0ULL);
                                var_27 = ((((/* implicit */int) arr_4 [i_4])) + (((((/* implicit */_Bool) var_12)) ? (var_12) : (arr_13 [i_4] [i_4]))));
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_1] [i_4 + 2] [i_2] [i_1] [(_Bool)1])))))));
                            }
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_16 [i_4] [i_4] [i_2] [i_2] [i_1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_30 &= ((/* implicit */long long int) arr_7 [i_1] [i_2]);
                            var_31 ^= ((/* implicit */int) max(((short)7), (((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9] [i_8] [i_8] [i_2])))))));
                            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((short) ((long long int) arr_12 [i_1] [i_2] [10ULL] [i_9] [i_9]))))));
                            /* LoopSeq 3 */
                            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                            {
                                var_33 = ((/* implicit */_Bool) 1887758282);
                                var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_0)))) / ((-(arr_26 [i_2] [(_Bool)1] [i_9 + 1] [i_9] [7ULL])))));
                                var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [(unsigned short)6] [i_9] [i_8] [i_2] [i_1]))));
                            }
                            for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                            {
                                var_36 &= ((/* implicit */unsigned long long int) (short)10);
                                arr_30 [i_1] [i_2] [i_8] [i_9] [i_11] = ((/* implicit */signed char) var_0);
                                var_37 = ((/* implicit */unsigned short) (-((+((-(arr_14 [i_1] [i_2] [i_8] [i_8] [i_2] [(unsigned short)0])))))));
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                            {
                                var_38 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_25 [(unsigned char)11] [i_2] [i_8] [i_2] [i_1]))))))) : (((unsigned long long int) (short)13707))));
                                var_39 ^= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_1] [i_1] [(short)12] [(unsigned short)7] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(signed char)8] [i_2] [i_8] [i_12] [(signed char)8]))) : (((((/* implicit */_Bool) (short)-18409)) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) var_16)))))));
                                var_40 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [5]))));
                                var_41 = arr_3 [i_2] [i_1];
                                var_42 &= ((/* implicit */unsigned long long int) var_18);
                            }
                            var_43 ^= ((/* implicit */unsigned int) (+(min((arr_14 [(_Bool)1] [i_2] [i_8] [i_9] [i_9] [i_2]), (((/* implicit */unsigned long long int) min((1887758284), (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) arr_24 [i_1] [i_1] [i_2] [i_1]))));
            }
        } 
    } 
}
