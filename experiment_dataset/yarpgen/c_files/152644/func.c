/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152644
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)16383)))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 1])), ((unsigned short)49152))))));
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)6])))));
    }
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23741)) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-32739)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [5LL] = ((/* implicit */signed char) arr_0 [i_1]);
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 8; i_3 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) < (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19911))) : (var_5))))))));
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 6; i_4 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_10 [(unsigned char)8]))) ? (3563799261U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
                    var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_1 + 1]))));
                }
                for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    var_17 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_5 + 3] [(short)9])) : (((/* implicit */int) arr_1 [i_3]))))));
                    arr_16 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned int) arr_2 [i_1 - 1] [i_5 + 2]));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) || (((/* implicit */_Bool) var_0)))))));
                }
            }
            for (short i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_0))));
                var_20 = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_2] [i_2] [i_2] [i_6]);
            }
            for (short i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_10 [i_1]))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                var_23 = ((/* implicit */short) min((var_23), (var_6)));
            }
        }
        var_24 = ((/* implicit */short) arr_3 [8U]);
    }
}
