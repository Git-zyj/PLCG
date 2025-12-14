/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188365
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) (unsigned short)32767);
        var_13 |= ((/* implicit */unsigned short) arr_2 [i_0] [8]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((short) arr_0 [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        arr_15 [(short)1] [i_2] [i_3 + 3] [i_1] = ((/* implicit */signed char) (unsigned short)45748);
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) 4294967295U);
        arr_21 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) arr_24 [i_6] [i_8] [i_9 + 1]);
                            var_17 = ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_28 [1U] [i_7 - 1] [(signed char)22]))), (max((((((/* implicit */_Bool) 5377122194376629567ULL)) ? (((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1] [i_9])) : (((/* implicit */int) arr_27 [i_6] [i_6])))), (((/* implicit */int) var_11))))));
                            var_18 = ((/* implicit */signed char) var_3);
                            arr_32 [i_9 - 3] [i_6] [i_6] [(signed char)6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 + 2] [i_7 + 2] [i_7 + 1]))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1])))))));
                            arr_33 [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_6] [i_6]))));
                        }
                    } 
                } 
                arr_34 [i_6] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) arr_31 [i_6] [i_7] [i_7] [i_7] [1U])) / (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)32758))))))));
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            {
                                arr_44 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-10)), (var_0))))));
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                                arr_45 [i_6] [(_Bool)1] [i_6] [i_6] = ((/* implicit */int) (_Bool)0);
                                var_20 = ((/* implicit */_Bool) arr_30 [i_6] [i_7 + 1] [i_7] [2U] [i_6] [i_12]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) var_9);
            }
        } 
    } 
}
