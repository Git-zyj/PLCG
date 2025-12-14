/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103930
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
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) max((max((9223372036854775807LL), (((((/* implicit */_Bool) (signed char)-68)) ? (arr_6 [i_3] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((unsigned char) max((-9223372036854775807LL), (-9223372036854775807LL)))))));
                            var_10 ^= ((/* implicit */unsigned int) min((min((((arr_2 [i_1]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), ((((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) << (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_3]))))))))));
                            var_11 ^= ((/* implicit */short) (~((+(((unsigned int) (unsigned char)113))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_4 [i_0] [i_2] [i_3]))))), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL))))), (((/* implicit */unsigned long long int) (+(min((9223372036854775802LL), (((/* implicit */long long int) (unsigned short)56189)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775806LL))));
                            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_17 [i_0] [i_1] [i_4])))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))));
                            var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_17 [i_0 + 2] [i_5 + 2] [i_4])) < (((/* implicit */int) max((arr_4 [i_0] [i_1] [i_0]), (var_0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_30 [i_6] [i_7] [i_8 + 3] [i_8] [i_7] [i_10] &= ((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)14804)), (min((1160702603756926665LL), (((/* implicit */long long int) 2839504584U)))))) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10])))));
                                arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 4294967272U)) & (((((/* implicit */_Bool) 0U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8 + 3] [i_6] [i_8 + 3])))))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_8), (arr_26 [i_9] [i_7] [i_8] [i_9] [i_7])))), (var_1)))) ? (((unsigned int) arr_23 [i_8 + 3] [i_8 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_6] [i_6] [i_8] [i_9]))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21728)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (short)14812))))))));
                                var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) 0U)) ? (-9223372036854775807LL) : (0LL)))));
                                arr_38 [i_6] [i_6] [i_11] [i_6] &= ((/* implicit */_Bool) arr_0 [i_8] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            arr_50 [i_15] [i_13] [i_14] [i_14] [i_15] [i_16] = (~(((/* implicit */int) arr_48 [i_13] [i_15])));
                            arr_51 [i_15] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) min((7124525085143506150ULL), (((/* implicit */unsigned long long int) 9223372036854775785LL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_17 = 1; i_17 < 6; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_18 ^= ((((/* implicit */_Bool) min((arr_42 [i_13] [i_14]), (((/* implicit */unsigned int) arr_28 [i_14] [i_14] [i_17 + 1] [i_17 + 4] [i_19]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775785LL))))) : ((~(((((/* implicit */int) (short)11303)) & (((/* implicit */int) var_4)))))));
                                var_19 ^= ((/* implicit */long long int) arr_43 [i_13] [i_14] [i_13]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
