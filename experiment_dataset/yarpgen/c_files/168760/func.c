/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168760
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_5 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_1 [i_0])));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [i_0] [(signed char)11]))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_2 [i_1] [i_1]))))));
        arr_11 [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_2 [i_1] [i_1]))))));
        arr_12 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [(signed char)2]))))), (arr_0 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_17 |= ((/* implicit */unsigned short) (-(((unsigned long long int) arr_9 [9LL] [i_3]))));
                            arr_23 [i_1] [i_1] |= ((/* implicit */_Bool) (~(arr_18 [i_2] [i_4] [i_3] [i_2])));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) (!(arr_27 [i_1] [i_2] [i_1] [i_6 - 1] [i_6 - 1])));
                            var_19 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_1 [i_1])))));
                        }
                        var_20 &= ((/* implicit */unsigned char) arr_18 [i_1] [i_2] [i_3] [i_4]);
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_14 [i_7 - 1] [i_7 - 1] [i_7]))));
                        arr_30 [(short)4] [i_2] [i_2] = arr_0 [i_7 - 1] [i_7 - 1];
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_34 [i_8] [i_8] [i_3] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_2] [i_3] [i_2])));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_22 += ((/* implicit */unsigned short) (~((-((~(arr_38 [i_9])))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [i_8] [i_9])) ? (min((arr_15 [i_3] [i_3] [i_3]), (arr_15 [i_3] [i_3] [i_9]))) : ((-(arr_26 [i_3])))));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_28 [i_1] [i_1]))))));
                            var_24 *= arr_14 [i_9] [i_8] [i_3];
                            var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (-(arr_24 [i_1] [i_2] [i_3] [i_8] [i_2])))))));
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((arr_0 [i_2] [i_3]), (arr_33 [i_1] [i_2] [i_3] [i_2])))), ((-(arr_32 [i_3] [i_1]))))), (max((((arr_27 [i_1] [i_1] [i_1] [i_2] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_2]))) : (arr_26 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_2] [3LL] [9LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3]))) : (arr_18 [i_1] [i_1] [i_1] [i_2])))))))))));
                    arr_40 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_2] [i_1] [i_1] [i_3] [i_2] [i_1] [i_1])))))))), (((unsigned short) min((arr_24 [i_1] [i_1] [i_1] [i_2] [i_3]), (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1])))))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_28 [i_1] [i_1]))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_0))));
}
