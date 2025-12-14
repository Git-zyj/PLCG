/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112820
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (~((~(arr_0 [i_0 + 2]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned int) var_3);
            var_12 = ((/* implicit */unsigned int) (-((+(var_7)))));
        }
        var_13 = (~((~(var_0))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((var_7), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_2])) & (((/* implicit */int) arr_5 [i_2] [i_2]))))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 4; i_3 < 21; i_3 += 4) 
        {
            var_15 = ((/* implicit */short) max((max((((((/* implicit */long long int) var_0)) + (arr_6 [i_2]))), ((-(6178050984594426571LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)3584)), (3006214630U))))));
            arr_10 [i_2] [i_3 - 3] = ((/* implicit */short) ((unsigned int) min(((-(7U))), (((/* implicit */unsigned int) ((short) arr_7 [i_2]))))));
        }
        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) var_9);
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_6 + 3] [(short)0] [i_6 + 1] [i_5 + 1]), (arr_19 [i_5 + 1] [i_6] [i_5] [i_6 - 3] [i_7]))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(short)0] [i_5 + 1] [i_4])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_9 [(short)6]))))) / ((-(var_9)))))));
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_6 [i_2]), (-6799476240665458419LL))))))), ((~(arr_6 [i_7])))));
                            arr_20 [i_6] [i_7] [i_6] [i_5 + 1] [i_4] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (+(arr_18 [i_7] [i_6 - 2] [i_5] [i_4] [i_4] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_5 - 1] [i_6]))))) : (((/* implicit */int) (short)-16637))));
                        }
                    } 
                } 
            }
        }
    }
    for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
    {
        var_20 &= ((/* implicit */short) (~((~(((/* implicit */int) var_3))))));
        arr_24 [(unsigned short)7] = ((/* implicit */long long int) arr_14 [i_8] [i_8 + 4] [i_8 + 1] [i_8]);
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_9 [i_10])) ^ (((/* implicit */int) arr_9 [i_9])))), (((((/* implicit */int) arr_9 [i_9])) << (((((/* implicit */int) arr_9 [i_9])) - (9897)))))));
                var_22 = ((/* implicit */short) ((long long int) var_1));
                var_23 = (+(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_10] [i_10]))))));
                var_24 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
            }
        } 
    } 
}
