/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104531
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
    var_20 = var_2;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 += ((var_15) & (2881918844U));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [6U] [i_2] [i_3 + 2] = (+(arr_9 [9LL] [9LL] [i_2] [i_2] [i_3]));
                        var_22 = 3363901311U;
                        var_23 = arr_4 [i_3];
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2881918857U)) || ((!(((/* implicit */_Bool) 1413048444U))))));
                    }
                } 
            } 
            arr_12 [i_0] [0LL] [14U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [1U] [i_1] [i_1]))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) && (((/* implicit */_Bool) arr_15 [i_4] [i_5]))));
                arr_19 [i_4] [4U] [4U] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_8 [i_0] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1413048452U))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1413048464U)))))) * (((((/* implicit */_Bool) 931065984U)) ? (1413048442U) : (2881918861U))))))));
                            var_27 |= ((/* implicit */long long int) (((+(3363901311U))) == (2881918857U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_28 = 1413048417U;
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1520491281U)) ? (((((/* implicit */_Bool) 931065984U)) ? (((/* implicit */long long int) 3363901319U)) : (1490025876318513332LL))) : (((/* implicit */long long int) var_19))));
                        }
                    } 
                } 
                arr_32 [i_5] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_0 [i_5])) : (-7979657291201776768LL)));
            }
            for (long long int i_10 = 1; i_10 < 14; i_10 += 1) 
            {
                arr_36 [i_10] [i_4] [i_10] [i_10] = ((arr_3 [i_10 - 1] [i_10 - 1] [i_10]) << ((((~(arr_15 [7LL] [i_10]))) - (7817991877996990726LL))));
                var_30 = 4215296577U;
            }
            arr_37 [i_4] [6U] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1173086895691829985LL)) ? (((var_2) + (var_18))) : (((/* implicit */long long int) (-(931065985U))))));
        }
        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 4) 
                        {
                            arr_47 [8LL] [i_11] [i_11] [8U] [8LL] [i_13] [i_14] = ((/* implicit */unsigned int) ((long long int) arr_28 [i_11 - 2] [i_14] [10LL] [i_11]));
                            arr_48 [8U] [i_13] [i_12] [4LL] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_11 - 1] [i_11] [i_11 - 1] [i_14])) ? (arr_44 [i_0] [8LL] [i_11 + 1] [i_11 + 1]) : (((/* implicit */long long int) 1413048404U))));
                        }
                        var_31 = ((/* implicit */long long int) ((3363901311U) | (((unsigned int) 511U))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned int) ((((-4979716266564875466LL) / (var_7))) > (((long long int) var_3))));
        }
    }
    var_33 = (~((+(2881918856U))));
    var_34 = (-(var_6));
    var_35 = var_4;
}
