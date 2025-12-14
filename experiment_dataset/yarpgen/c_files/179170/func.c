/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179170
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
    var_12 = ((/* implicit */unsigned char) ((2124231798U) * (0U)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0] [(unsigned char)11]));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((long long int) arr_1 [8LL])))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [(unsigned char)8] [i_1] |= ((/* implicit */short) 1643863388U);
                        var_14 -= ((/* implicit */_Bool) min((arr_1 [(unsigned short)8]), (((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1] [i_4]))))), (arr_9 [i_1] [i_2] [(short)10] [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_3 [i_1] [(short)12])))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1] [(short)1] [i_5])) < (((/* implicit */int) var_5)))))))) ? (arr_18 [i_5 + 1] [i_6 + 2] [i_6 + 2] [i_6 + 1]) : (((/* implicit */long long int) max((arr_25 [i_1] [i_5] [i_6] [i_1] [i_6] [i_7] [11]), (((((/* implicit */int) var_5)) << (((-7959686310085679220LL) + (7959686310085679227LL))))))))));
                                var_16 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(7959686310085679232LL)))) <= (var_7))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_1] [(short)9] [i_8])) << (((((unsigned int) arr_25 [i_1] [i_5] [i_5] [(short)0] [i_5] [i_5] [i_8])) - (2267332033U)))))) : (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) 3034817243U)), (7959686310085679210LL))) : (((/* implicit */long long int) min((var_8), (arr_6 [i_1]))))))));
                                arr_26 [i_5] = ((/* implicit */short) ((unsigned char) min((((unsigned short) arr_5 [i_1] [(unsigned short)3] [i_6])), (((/* implicit */unsigned short) ((7959686310085679241LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_8])))))))));
                                arr_27 [i_1] [i_1] [6U] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [(short)12]))) & (arr_18 [i_1] [(signed char)11] [i_6 + 2] [(unsigned char)7])))));
                            }
                        } 
                    } 
                    arr_28 [i_1] [i_5] [i_5] = ((/* implicit */long long int) arr_25 [i_6 + 3] [i_6 + 4] [i_6 + 4] [i_5 + 1] [2U] [i_5] [i_5]);
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16383)) << (((((-7959686310085679221LL) + (7959686310085679242LL))) - (18LL)))));
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9] [i_9] = ((((arr_4 [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_9]))) > (arr_4 [i_9]))))) : (((unsigned int) var_1)));
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned char) max((arr_29 [i_9] [i_9]), (((/* implicit */long long int) ((arr_29 [i_9] [i_9]) > (var_4))))));
        arr_33 [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_9] [i_9]))))), ((-(((/* implicit */int) arr_14 [(unsigned char)3] [i_9]))))));
    }
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)2491)))))))))));
}
