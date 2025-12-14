/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175927
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_11 [i_1] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_10 [i_3] [i_3] [i_3] [i_1] [i_3]), (arr_10 [i_3] [i_3] [(unsigned short)7] [i_1] [i_3]))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) var_0);
                                var_12 = var_7;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_11)), (var_9))) ^ (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (0U) : (max((((1320515910U) << (((arr_3 [i_1] [i_1]) - (965066808))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_13 [i_1] [i_5] [i_1])))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_6] = ((((min((((/* implicit */long long int) 2974451374U)), (arr_16 [i_0] [i_1]))) / (((/* implicit */long long int) var_11)))) + (((/* implicit */long long int) var_0)));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 - 2] [i_1])))) ? (((/* implicit */long long int) (~(33552384U)))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */long long int) 1886592909U)) : (arr_2 [i_2 + 1] [i_1])))));
                                var_14 = max((((((((/* implicit */long long int) var_4)) / (9223372036854775807LL))) - (arr_6 [i_0 - 3] [i_2] [i_0 - 3]))), (((/* implicit */long long int) (~(var_11)))));
                                var_15 = max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) : (0LL))), (((/* implicit */long long int) ((int) ((-1984637539) > (((/* implicit */int) (unsigned short)18403)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_26 [i_7] [i_7] [0] [10U] [i_1] [10U] [i_7] = ((/* implicit */long long int) arr_10 [10] [8] [10] [i_1] [(unsigned short)5]);
                                arr_27 [i_0] [i_1] [i_1] [i_7] [5] = ((/* implicit */unsigned short) ((arr_4 [i_0 + 2] [i_2 + 3] [i_8 - 3]) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 2) 
    {
        for (int i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 10; i_13 += 3) 
                        {
                            {
                                arr_39 [i_9] [i_9] [i_10] [i_11] [i_9] [i_13] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64544))))), (2147483647)))), (((unsigned int) ((((/* implicit */_Bool) 1507747892U)) ? (1320515907U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                                arr_40 [i_9] [i_10] [i_11] [(unsigned short)9] [i_13] = ((/* implicit */unsigned int) ((long long int) arr_32 [i_11 - 3]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) 
                {
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 1) 
                    {
                        for (int i_16 = 2; i_16 < 11; i_16 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((unsigned short) min((min((((/* implicit */unsigned int) (unsigned short)4273)), (1320515919U))), (max((1886592917U), (((/* implicit */unsigned int) (unsigned short)17689)))))));
                                var_17 &= ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < ((~(var_11)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_17 = 2; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned int i_18 = 4; i_18 < 9; i_18 += 4) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 12; i_19 += 4) 
                        {
                            {
                                arr_56 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) 8917945599090379197LL);
                                var_18 = arr_38 [(unsigned short)4] [i_9] [i_19] [i_17] [i_18] [i_19];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
