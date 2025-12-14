/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140424
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) : (((((/* implicit */int) arr_0 [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                var_20 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_14 [10] [10] [i_1] [1] [(unsigned char)2] [i_3] [i_1] = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_3] [(short)3]);
                                arr_15 [i_1] [1] [i_1] [i_1] = ((/* implicit */_Bool) -577695735);
                                var_21 += ((arr_13 [i_3] [i_3] [i_2] [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [i_4])) && (((/* implicit */_Bool) 4345373593725906340ULL)))))));
                            }
                            for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) min((arr_13 [i_1] [i_0] [i_0] [i_2] [i_5 + 1]), (((/* implicit */unsigned int) (unsigned short)27291))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? ((+(arr_10 [i_0] [i_1] [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_12)))))))));
                                arr_19 [(unsigned short)8] [0] [i_1] [i_1] [i_3] [i_5 + 2] = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1] [i_1] [i_5 + 2]));
                            }
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)55312)) > (((/* implicit */int) ((((/* implicit */_Bool) 12092162448229034237ULL)) && (((/* implicit */_Bool) 12092162448229034237ULL)))))));
                            var_24 ^= ((/* implicit */unsigned short) arr_13 [i_3] [i_1] [i_2] [(signed char)4] [4U]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        var_25 = (i_6 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_32 [i_6] [i_6] [4ULL] [i_9])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) <= (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_6 + 2] [i_7] [i_8] [i_6 + 2]))))), (min((arr_22 [i_8]), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_6] [i_9]))))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (((((((~(((/* implicit */int) arr_32 [i_6] [i_6] [4ULL] [i_9])))) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) <= (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_6 + 2] [i_7] [i_8] [i_6 + 2]))))), (min((arr_22 [i_8]), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_6] [i_9])))))))));
                        var_26 = ((/* implicit */short) ((var_14) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55312)) >> (((6354581625480517379ULL) - (6354581625480517371ULL))))))));
                        arr_33 [i_6] [2U] [i_6] = max((((/* implicit */unsigned long long int) (-(-2058886332400356925LL)))), (min((min((var_9), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2080040512562595157ULL)) || (((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_8] [i_9]))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_6] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_39 [i_6] [i_7] [i_7] [i_10] [i_11] = arr_29 [i_11];
                            var_28 = min((((/* implicit */unsigned long long int) ((9667462893209040600ULL) < (((/* implicit */unsigned long long int) 3477540380U))))), (min((16366703561146956458ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(arr_28 [i_6 + 4] [i_6] [i_8 + 1] [i_12])));
                        var_29 &= ((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_12]);
                        arr_43 [i_6] = ((/* implicit */short) ((arr_34 [i_6 + 4] [i_6 + 2] [5] [i_6 + 4]) | (arr_34 [i_6 + 2] [i_6 + 3] [i_6] [i_6 + 2])));
                        var_30 = ((/* implicit */unsigned int) ((arr_38 [i_6] [i_8 + 1] [i_8] [i_8 - 1] [(unsigned short)12] [i_6]) > ((~(16366703561146956459ULL)))));
                        var_31 = (-(arr_31 [14ULL] [i_6 + 1] [(_Bool)1] [i_8 + 1]));
                    }
                    var_32 ^= ((/* implicit */long long int) arr_21 [i_6] [(_Bool)1]);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) var_10);
}
