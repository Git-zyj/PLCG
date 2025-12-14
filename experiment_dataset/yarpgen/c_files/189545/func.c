/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189545
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
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */short) (((+((-9223372036854775807LL - 1LL)))) * (((/* implicit */long long int) ((((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) >> (((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_15)))) - (-9223372036854775779LL))) + (56LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((9223372036854775790LL) / (9223372036854775792LL)))) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((int) arr_3 [i_0] [(_Bool)1])))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_1] = ((unsigned short) ((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) << (((((((max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))) - (-9223372036854775749LL))) + (104LL))) - (40LL)))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((9223372036854775807LL), (9223372036854775807LL))) - (((/* implicit */long long int) arr_2 [i_1] [i_1 + 1] [i_1]))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) << (((9223372036854775807LL) - (9223372036854775778LL)))))))) : ((((((-9223372036854775807LL - 1LL)) | ((-9223372036854775807LL - 1LL)))) / (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (-9223372036854775807LL)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        var_22 = ((/* implicit */short) arr_5 [(_Bool)1] [i_1 + 2] [i_2]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((max((((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1])) ? (arr_5 [i_0] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) -9223372036854775807LL)))), (((/* implicit */unsigned long long int) arr_6 [3])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) > (9223372036854775799LL))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) << (((((((-9223372036854775806LL) - (-9223372036854775782LL))) + (52LL))) - (25LL))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((_Bool) (((-9223372036854775807LL - 1LL)) / ((-9223372036854775807LL - 1LL)))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_26 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (9223372036854775805LL))));
                        }
                        arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_8 [i_4 - 1] [i_1 + 2] [i_2] [i_1 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_4])))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_26 [i_1] = ((/* implicit */_Bool) min((((min((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_7])), ((-9223372036854775807LL - 1LL)))) % (9223372036854775807LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (9223372036854775796LL) : ((-9223372036854775807LL - 1LL))))) ? (((arr_6 [i_0]) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775805LL) : (-9223372036854775806LL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [(signed char)6]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775805LL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) -9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (arr_25 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) : (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 2])));
                        }
                    }
                    arr_29 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]);
                }
            }
        } 
    } 
}
