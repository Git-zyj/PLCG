/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144479
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned char)11))));
    var_18 = ((/* implicit */signed char) (-(((3375820980U) & (((3375820978U) | (var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_1);
                                arr_12 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = var_5;
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) 919146317U)) % (min((((((/* implicit */long long int) var_6)) % (arr_6 [i_0] [i_1] [(short)18] [i_3]))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)254)), (arr_0 [i_2] [i_0]))))))));
                                var_21 = ((/* implicit */_Bool) ((var_8) ? (var_4) : (arr_6 [i_2] [i_1] [(unsigned char)10] [(unsigned char)13])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 4; i_5 < 19; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) max((arr_11 [i_0] [12]), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_7])))))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) var_13)) / (((/* implicit */int) arr_13 [i_5 - 1] [i_7 + 1] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_23 += ((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_14 [i_5] [i_8] [i_8] [i_1]))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35184372088830ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_6 [i_1] [i_5 - 3] [i_8] [i_9])))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0])))))));
                            arr_25 [i_0] [(signed char)14] [i_5] [i_5] [i_5] [3LL] [i_5] = ((long long int) ((long long int) arr_6 [i_5] [i_1] [i_5] [i_8]));
                            var_25 += var_15;
                        }
                        var_26 = var_15;
                    }
                }
            }
        } 
    } 
}
