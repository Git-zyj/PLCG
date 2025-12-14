/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112281
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */signed char) (+(1861533113652612080LL)));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned short) 2726936298U);
                            var_16 *= (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_17 *= ((/* implicit */long long int) ((1568030997U) + (1568031008U)));
                                arr_16 [i_0] [i_1] [4LL] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (_Bool)1)), (2726936299U))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) 72057456598974464LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)90))))))) != (((((/* implicit */_Bool) (unsigned char)206)) ? (-1545701257345574257LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97)))))));
                            var_19 *= ((/* implicit */unsigned long long int) arr_17 [9ULL]);
                            /* LoopSeq 4 */
                            for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                            {
                                arr_23 [i_6] = ((/* implicit */long long int) (unsigned short)18672);
                                arr_24 [i_0] [i_1] [i_6] [i_6 + 3] [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54311))))) - (((/* implicit */int) (unsigned char)168))));
                                arr_25 [i_0 + 1] [i_6] [(signed char)1] [i_6] [i_7] [i_0] [i_1] = ((/* implicit */unsigned int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41619)))));
                                arr_26 [17U] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)-110))))));
                                arr_27 [i_7] [i_6] [8LL] [5U] [i_1] [i_6] [i_0] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) -5902668084757490335LL)) ? (10663554965436008843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_1] [17ULL] [i_6 + 1] [9U]))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58438)) * (((/* implicit */int) (_Bool)0)))))));
                            }
                            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 4) 
                            {
                                arr_30 [i_0] [(unsigned short)18] [i_5] [(unsigned char)3] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) 7783189108273542773ULL)))))));
                                arr_31 [i_0] [(_Bool)1] [(unsigned char)0] [i_6] [i_6] = ((/* implicit */unsigned int) (+(min((-5902668084757490335LL), (((/* implicit */long long int) (_Bool)1))))));
                            }
                            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned short)41601))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_6] [i_6 + 2])) ^ (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) min((arr_22 [(_Bool)1] [i_1] [(unsigned short)1] [4ULL] [i_6 + 3]), (arr_22 [(_Bool)1] [i_9] [i_5] [(signed char)14] [i_6 + 1])))))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                            {
                                arr_38 [i_6] [i_1] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0ULL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_0] [16ULL])))))));
                                arr_39 [i_6] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2047ULL) : (((/* implicit */unsigned long long int) 537016222U))))) ? (((/* implicit */int) arr_10 [i_6] [i_6])) : (((/* implicit */int) arr_32 [i_1] [i_6] [i_1] [i_5]))));
                            }
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [5U] [i_6 + 1])) ? (arr_5 [i_6] [(unsigned char)13] [i_6 + 1]) : (arr_5 [i_6] [i_6] [i_6 - 1])))) ? (min((((/* implicit */unsigned long long int) 24U)), (arr_5 [i_6] [1LL] [i_6 + 2]))) : (((1071643453279554562ULL) / (((/* implicit */unsigned long long int) 3U))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) & (3U)));
                        }
                    } 
                } 
                var_24 += ((/* implicit */unsigned short) (+((~(4294967294U)))));
                var_25 ^= ((/* implicit */_Bool) max(((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) * (var_6))))), (((/* implicit */long long int) (-(arr_8 [i_0 + 1] [i_1]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12)))) : ((-(3U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-75)), (var_13)))))))));
}
