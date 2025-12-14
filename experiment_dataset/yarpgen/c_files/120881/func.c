/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120881
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [2] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [(unsigned short)2] [i_3] [i_3]))))))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] = (~(((/* implicit */int) var_11)));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) var_16);
                        arr_19 [i_0] [i_0] [12] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) ? (var_4) : (arr_14 [i_1]))))));
                        arr_20 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_10);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_14) ? (1777053400323780556LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_21 [i_2] [i_2] [(unsigned short)8] [i_2] [i_2])))))) : (min((-1777053400323780576LL), (((/* implicit */long long int) var_8)))))) * (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_7 [i_0])) ^ (((arr_1 [i_0]) ? (1386003158) : (arr_8 [i_0] [i_1] [(unsigned short)3] [i_6]))))), (((/* implicit */int) var_9))));
                            arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~(1386003149)));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_31 [i_1] [i_0] = (~(((/* implicit */int) (!((_Bool)1)))));
                        var_23 = ((/* implicit */_Bool) ((((var_15) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))))) << (((((((arr_24 [i_1]) ? (arr_10 [i_2] [(_Bool)1]) : (arr_10 [i_0] [i_0]))) + (5255734424710117401LL))) - (22LL)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = (-(((arr_15 [i_0] [i_0] [i_2] [i_8]) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_8] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_8])))));
                        arr_34 [i_0] [i_1] [i_2] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_11)))))) ? (((((/* implicit */_Bool) -2445386950501219339LL)) ? (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_1] [1] [i_0] [i_1])) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_8] [i_1] [i_2] [i_1])))) : (((/* implicit */int) var_19)));
                    }
                    var_25 = (-(var_15));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned short) min((2445386950501219340LL), (((/* implicit */long long int) min((var_19), (arr_35 [i_9] [i_10 + 1]))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (~((-(((int) (_Bool)1))))));
                            /* LoopSeq 1 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                arr_48 [i_9] [i_10] [i_9] [i_10] [i_13] [i_13] [i_9] = ((((/* implicit */_Bool) (+((+(var_3)))))) ? ((~(((/* implicit */int) arr_35 [i_10 + 1] [i_10 + 1])))) : (((/* implicit */int) (unsigned short)47394)));
                                var_28 = var_6;
                            }
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) arr_45 [i_9] [i_10] [i_10] [i_11] [i_9] [i_12])) ? (((/* implicit */long long int) 455704096)) : (arr_39 [i_10 + 1]))))))));
                            arr_49 [i_9] [i_10] [i_11] [i_9] [i_10] = ((((arr_46 [i_9] [i_11] [i_10] [i_12] [i_12] [i_12 + 1]) << (((7199612661911721145LL) - (7199612661911721145LL))))) <= ((+(arr_46 [i_9] [i_9] [i_11] [i_12 + 1] [i_10] [i_12 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
