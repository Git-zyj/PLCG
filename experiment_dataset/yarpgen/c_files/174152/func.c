/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174152
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (((((/* implicit */long long int) var_12)) / (var_10)))))) ? (max((((/* implicit */int) var_6)), (((((/* implicit */int) var_1)) - (((/* implicit */int) var_9)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) var_9)));
                var_15 ^= ((/* implicit */_Bool) ((min((((/* implicit */int) arr_0 [0U])), (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_1 [i_1] [i_0])))))) ^ (((((/* implicit */_Bool) arr_1 [13] [i_1])) ? (var_8) : (((/* implicit */int) arr_0 [4]))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_7)))) : (var_12))))));
                                var_17 *= ((/* implicit */short) max((((/* implicit */long long int) ((arr_0 [i_2]) && (arr_0 [i_2])))), (arr_12 [i_0] [i_1] [(unsigned char)14] [i_2] [(unsigned short)6] [i_4])));
                                arr_15 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned char)10]), (arr_14 [i_0] [i_0] [i_0] [i_2] [16ULL] [i_0])))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [(unsigned char)14] [i_2])) : (((/* implicit */int) arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) > (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [6U] [i_2] [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_2 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1] [21] [i_0]))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_13 [i_6] [(_Bool)1] [i_5] [i_2] [i_1] [(signed char)7] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((var_2) ? (((/* implicit */int) arr_20 [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_1] [i_2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))) > (17487304854171927616ULL)))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(_Bool)0])) ? (arr_2 [i_5] [i_2] [(short)20]) : (arr_2 [i_2] [i_5] [i_6]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))));
                                var_19 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_10 [i_1] [4LL] [i_5] [(_Bool)1]) : (arr_10 [i_0] [i_1] [i_2] [i_5]))) == (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                                var_20 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_6]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_1])))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) ((var_7) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_6]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_2] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_24 [i_7] [i_2] [i_1] [i_1] [i_0]))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) arr_14 [i_0] [(unsigned short)20] [i_1] [i_2] [i_2] [i_7 - 1])), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) & (var_10)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(signed char)6])) - (((/* implicit */int) arr_8 [16])))))));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [8LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [10]))));
                }
                /* LoopNest 3 */
                for (unsigned char i_9 = 3; i_9 < 23; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned int) max((min((arr_12 [i_0] [i_1] [i_9 - 3] [(_Bool)1] [i_10] [i_11]), (((/* implicit */long long int) arr_26 [i_0] [i_0])))), (((/* implicit */long long int) ((short) (signed char)75)))));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_13 [i_1] [i_9 - 3] [i_10] [i_11] [i_11] [(signed char)18] [i_1]))));
                                var_28 |= ((/* implicit */unsigned int) max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_11] [i_10] [18] [i_1])) : (((/* implicit */int) arr_18 [10LL] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9054)) ? (17487304854171927616ULL) : (959439219537624006ULL)));
}
