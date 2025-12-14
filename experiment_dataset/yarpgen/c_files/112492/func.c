/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112492
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
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)2044)) : (((/* implicit */int) (unsigned short)2044))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])) ? (arr_2 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [4ULL]))))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (arr_2 [10] [10])));
                    var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0] [24U] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_3] [15]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (arr_2 [i_3 - 2] [i_3 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3])) ? (arr_6 [i_3] [10U] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3])))))) : (arr_2 [i_3] [i_3])))) ? (((/* implicit */unsigned int) arr_3 [(unsigned char)19] [i_3 - 2])) : (arr_9 [22LL] [i_3])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2044))) : (((((/* implicit */_Bool) -1393903444)) ? (17179987140324167161ULL) : (((/* implicit */unsigned long long int) 2760194864U))))));
            var_17 = ((/* implicit */unsigned char) arr_8 [i_3] [i_4]);
            var_18 &= ((/* implicit */unsigned int) arr_8 [i_3] [i_3]);
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (arr_3 [i_4] [i_4]) : (((/* implicit */int) arr_1 [i_3 - 2] [18ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))) : (arr_7 [i_3] [i_3])));
        }
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_16 [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) arr_13 [i_3 - 1] [i_5]);
            var_20 = arr_2 [i_3] [i_5];
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_9 [i_6] [i_6]);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) arr_0 [i_7])) : (((((/* implicit */_Bool) arr_8 [23] [i_6])) ? (((/* implicit */unsigned int) -341096391)) : (arr_11 [i_6] [i_7])))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_6] [i_6])) ? (arr_11 [i_6] [i_7]) : (arr_6 [i_7] [i_7] [i_7] [i_7])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_8);
}
