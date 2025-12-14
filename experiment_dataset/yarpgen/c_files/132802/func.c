/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132802
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
    var_15 = (!((!(((/* implicit */_Bool) max((1629220592U), (((/* implicit */unsigned int) (short)8828))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((unsigned short) (signed char)(-127 - 1)));
                                var_18 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)94)))) ? (((/* implicit */int) (unsigned short)34954)) : (((/* implicit */int) var_7))));
                                var_19 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 24; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 23; i_7 += 2) 
                {
                    arr_22 [i_5 - 1] [i_5 + 1] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [(signed char)4] [i_6] [i_6] [i_5]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                arr_27 [i_5 - 1] [i_5 + 1] [i_6] [i_7 + 1] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_8] [i_8] [i_9] [i_9]))));
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_20 [i_5 + 1] [i_5] [i_5 - 1]))));
                                arr_28 [i_5 - 1] [i_6] [i_8] [i_8] [i_9] = ((/* implicit */short) var_0);
                                arr_29 [i_8] [i_6] [i_6] [i_6] [i_9] = var_9;
                            }
                        } 
                    } 
                }
                for (short i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        for (int i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned int) arr_23 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1]));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned int) arr_37 [i_5] [i_5 + 1] [i_5 - 1] [i_6] [i_5] [(_Bool)1] [i_5])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) >= (arr_16 [i_5 - 1] [i_10 + 1]))))))) ^ (var_8)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) arr_37 [i_5] [i_5] [i_5 + 1] [i_6] [i_5 + 1] [i_5] [i_5 + 1]))), (min((min((((/* implicit */unsigned int) arr_18 [i_5] [3U])), (arr_24 [(unsigned short)24] [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) arr_31 [i_5 - 1] [i_5 - 1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1] = var_12;
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_5])) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((((/* implicit */_Bool) arr_32 [i_10] [i_6] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (((unsigned long long int) (unsigned short)57087))))));
                        var_25 = ((/* implicit */short) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) var_4);
                        arr_46 [i_5] [i_5] [0] [i_5] [11U] = ((/* implicit */signed char) var_4);
                        arr_47 [i_5 - 1] [i_10] [18U] [i_14 + 1] = ((/* implicit */signed char) (~(411043100)));
                    }
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_26 [i_6]))));
                    arr_48 [i_5] = ((/* implicit */signed char) var_12);
                }
                for (unsigned short i_15 = 3; i_15 < 23; i_15 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) (+(((((var_14) * (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))))) / (((/* implicit */long long int) ((unsigned int) arr_18 [(signed char)20] [i_6])))))));
                    var_29 |= ((/* implicit */unsigned int) (((+((+(((/* implicit */int) var_9)))))) >= (((/* implicit */int) ((unsigned char) (unsigned short)47397)))));
                }
                var_30 += min((((long long int) 4ULL)), (((((/* implicit */_Bool) (unsigned short)10823)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) : ((+(arr_16 [i_6] [i_5 - 1]))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((unsigned short) var_0));
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1008)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))));
}
