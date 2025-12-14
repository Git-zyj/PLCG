/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104148
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) min((((signed char) (unsigned short)16471)), (((/* implicit */signed char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_8 [i_0] = ((/* implicit */int) ((signed char) arr_7 [i_2] [i_2] [i_1] [i_0]));
                arr_9 [i_0] [i_2] [(short)2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) <= ((+(((/* implicit */int) arr_0 [i_0]))))));
            }
            var_13 = ((/* implicit */_Bool) ((((arr_5 [i_1]) <= (((/* implicit */unsigned long long int) arr_1 [i_1])))) ? (arr_1 [i_0]) : (arr_3 [i_1] [i_0])));
        }
        arr_10 [i_0] = ((/* implicit */signed char) arr_5 [i_0]);
        var_14 = ((/* implicit */int) (-(max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (arr_1 [3U]))), (min((arr_1 [i_0]), (arr_6 [i_0] [i_0])))))));
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) arr_6 [i_0] [i_0]))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_3 [i_0] [i_0]) & (arr_6 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) (!(arr_13 [7ULL])))) <= (((/* implicit */int) arr_11 [i_3] [i_3]))));
            var_17 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3]))));
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_18 [i_3] [i_5] [i_5] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_3] [i_3])))));
            arr_19 [i_3] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_12 [i_3]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_21 [i_6] [i_3] [3LL])) : (((/* implicit */int) arr_21 [i_6] [i_3] [i_3])))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_27 [i_8] [i_8] [i_6] [i_8] [i_3] = ((/* implicit */signed char) ((unsigned short) (+(arr_24 [i_3] [i_6] [i_6] [15ULL]))));
                    var_19 = ((unsigned int) arr_11 [i_7] [i_6]);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -839367619)) && (((/* implicit */_Bool) -13)))) ? (((unsigned long long int) arr_30 [i_7] [i_7])) : (((/* implicit */unsigned long long int) (~(arr_16 [i_3] [(unsigned short)20])))))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) arr_13 [i_6])))))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (short)-30073));
                }
                var_23 = ((/* implicit */unsigned long long int) (!(arr_14 [i_7] [i_6])));
            }
        }
        var_24 = ((/* implicit */_Bool) ((long long int) -9LL));
        arr_31 [i_3] = ((/* implicit */long long int) ((arr_14 [i_3] [i_3]) ? (((arr_28 [i_3] [i_3] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3]))))) : (arr_29 [3LL] [5] [i_3] [5])));
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((max((min((((/* implicit */unsigned int) arr_30 [i_10] [i_10])), (arr_22 [i_10] [i_10] [i_10]))), (max((arr_35 [i_10]), (((/* implicit */unsigned int) arr_25 [i_10] [i_10] [i_10] [i_10])))))), (min((arr_28 [i_10] [i_10] [i_10]), (((/* implicit */unsigned int) arr_30 [i_10] [i_10])))))))));
        arr_36 [i_10] = ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) arr_22 [i_10] [i_10] [i_10])), (arr_32 [i_10] [i_10]))), (((/* implicit */unsigned long long int) (+(arr_22 [i_10] [i_10] [i_10])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_10] [(unsigned char)6] [(unsigned char)6] [i_10]))))), (max((((/* implicit */long long int) arr_23 [i_10] [i_10] [i_10] [i_10])), (arr_15 [i_10]))))))));
        var_26 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10])))) && (((/* implicit */_Bool) ((unsigned char) arr_16 [18ULL] [i_10]))))))));
    }
    var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) var_0))), (((unsigned long long int) var_11))));
}
