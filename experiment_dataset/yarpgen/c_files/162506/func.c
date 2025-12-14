/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162506
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (var_4)))))) ? (var_0) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) != (var_7)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min(((~(arr_2 [i_0]))), (((/* implicit */unsigned int) var_1))));
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-((~(arr_0 [i_0] [i_0])))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (var_8)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) 10210131757787309409ULL);
                                arr_21 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((var_4) | (((/* implicit */unsigned long long int) var_11))));
                                var_23 = ((/* implicit */_Bool) ((arr_18 [i_2] [i_3] [11LL] [i_4] [i_6]) ^ (arr_18 [i_5] [i_3] [i_4] [i_5] [i_6])));
                                var_24 |= ((/* implicit */int) (~(arr_10 [i_5])));
                                arr_22 [i_2] = ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (var_11))))) : (var_8));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_2] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) var_6)) : (-414414590))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    arr_27 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2])) < (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8]))));
                    arr_28 [i_8] [i_7] [i_2] = ((((/* implicit */_Bool) arr_17 [i_2] [i_7] [i_7] [i_7] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_17 [i_2] [i_2] [i_2] [i_8] [i_8] [i_8] [i_8]));
                    var_26 = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_2] [i_8] [i_8] [i_8]));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) arr_10 [i_2]);
    }
    var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (var_9)));
}
