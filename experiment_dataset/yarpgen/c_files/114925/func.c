/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114925
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) > (var_0))))));
                arr_5 [i_1] = ((/* implicit */_Bool) arr_0 [2LL]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((arr_2 [i_0] [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) (!(arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 1])))) : (((arr_2 [i_0] [i_0 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)13] [i_0 + 2])) : (((/* implicit */int) arr_2 [(unsigned short)4] [i_0] [i_0 - 1]))))));
                    var_19 = ((/* implicit */int) var_15);
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((arr_10 [i_1] [i_1] [i_0 + 1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_3]))) : (var_7)));
                    arr_11 [i_0] [i_1] [(unsigned char)11] [i_3] = ((/* implicit */unsigned short) (-(arr_0 [i_0 + 1])));
                    arr_12 [i_0 + 1] [i_1] [i_1] = (+(arr_0 [i_0 + 1]));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */_Bool) var_16);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]))))) & (arr_15 [i_5] [i_5])));
                            arr_22 [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6]))));
                        }
                    } 
                } 
                arr_23 [(_Bool)1] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                var_23 += ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [(short)2] [(_Bool)1] [i_4] [i_5]))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_14);
    var_25 = ((/* implicit */unsigned int) var_5);
}
