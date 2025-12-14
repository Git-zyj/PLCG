/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170153
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((long long int) (unsigned short)27250));
                                arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_1 - 2] [5LL])))) ^ (arr_8 [i_2])));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_2])) && (((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_2] [i_1])))) || (((/* implicit */_Bool) ((long long int) (unsigned short)27250))))) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32704)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((long long int) (~(arr_5 [i_2] [i_2] [i_1] [i_0]))));
                    arr_14 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)17)) | (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_0 [i_0] [i_2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((max((var_14), (((/* implicit */long long int) arr_15 [i_5] [i_2] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1])))) ^ ((~(arr_9 [i_0] [i_1] [i_1] [i_1 - 2] [i_0] [i_1 - 2] [i_0])))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(var_18))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_6] [i_6] [i_0] [7LL] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_2 [(short)3] [i_1 - 2] [i_2])));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))));
                        var_25 ^= (-(((/* implicit */int) var_9)));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_6] = ((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1] [i_1]);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_17 [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2]))));
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [(short)7] [i_6] = ((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 + 1]) > (arr_9 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) arr_0 [7LL] [i_1]))));
                        }
                        for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_28 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [5] [i_9] [i_9] [(short)8])) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_9] [i_6])) : (((/* implicit */int) var_15)))))));
                            var_29 = ((((/* implicit */_Bool) 2386147041U)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [1U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (arr_22 [i_0] [i_9] [9U] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) arr_19 [i_0] [i_1 - 1] [i_2] [i_6] [i_9] [i_1 - 1])));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1 - 2]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_10);
}
