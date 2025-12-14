/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141484
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
    var_15 = ((/* implicit */long long int) (~(var_9)));
    var_16 = ((/* implicit */unsigned long long int) 4294967265U);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))) ? (min(((~(var_13))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)32744)) & (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_18 = ((/* implicit */short) (~(arr_2 [i_2])));
                    var_19 *= ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_2]) >> (((var_13) - (1913926490484230664ULL)))));
                    arr_8 [3LL] [i_1] [3U] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) | (1077674889119122850ULL)));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_2])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_22 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                        var_23 = ((/* implicit */short) ((arr_6 [7] [i_1] [i_1] [i_1]) >> (((-1) + (4)))));
                    }
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (+(arr_1 [i_0])));
                        var_25 = ((/* implicit */int) (~(3309130277U)));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_0))));
                        arr_20 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_23 [(unsigned char)8] [i_1] [i_0] |= (-((-(4018536271U))));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_6] [i_0]))) + (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(arr_17 [i_0] [(unsigned short)9] [i_6] [i_6] [i_6])))))) : ((+(arr_16 [i_0] [i_1] [2U] [i_6]))));
                    var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [9U])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_1] [i_1] [i_0]))))));
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_30 = (unsigned char)127;
                    var_31 = ((/* implicit */unsigned int) var_12);
                }
                var_32 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0]))))), (var_3)));
            }
        } 
    } 
}
