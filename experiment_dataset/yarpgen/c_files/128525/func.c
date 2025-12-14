/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128525
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
    var_11 = ((/* implicit */int) ((min((((var_9) - (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)61241))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_3)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((((((/* implicit */_Bool) arr_3 [8])) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) arr_8 [i_2] [i_2] [(unsigned char)11])))))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_4 [i_4]), (1518046138U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [(_Bool)1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)6))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_2] [i_1]) : (arr_2 [(short)1] [i_4])))) - (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                            arr_14 [i_1] [i_2] [i_3] [5LL] = ((/* implicit */signed char) ((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) var_4)))))))) & (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_12 [i_4 + 1] [i_4 + 1] [13] [i_4] [(short)14] [i_4 + 1])))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((((-(((int) arr_6 [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */int) arr_10 [(unsigned short)8] [i_1] [i_2] [i_3] [15U])) + (((/* implicit */int) (unsigned char)252)))) <= (((/* implicit */int) arr_12 [i_0] [(signed char)4] [(signed char)4] [i_3] [1U] [i_4]))))))))));
                            var_15 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_0)), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) var_3)) ? (arr_13 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))), (arr_4 [6LL]))))));
            }
            arr_15 [i_0] [i_1] = arr_12 [i_1] [(unsigned short)13] [(short)2] [(short)2] [i_1] [(short)2];
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)5]))) ^ (arr_4 [i_0]))), (((/* implicit */unsigned int) ((arr_3 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))))) ? ((-(max((((/* implicit */int) arr_7 [3U] [1U] [i_1] [10LL])), (arr_2 [i_1] [i_1]))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [(signed char)13] [i_0])) == (((/* implicit */int) (unsigned short)62979))))))))))));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((max((((/* implicit */unsigned int) (unsigned char)213)), (3989439965U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))), (((unsigned int) (unsigned char)43)))))));
        arr_16 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (~(arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) arr_12 [i_5] [i_5] [(short)11] [i_5] [i_5] [i_5]);
        var_20 = (unsigned char)253;
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_21 = ((/* implicit */signed char) max(((~(min((var_3), (arr_13 [i_5] [i_5] [i_6] [i_6]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_6] [i_5] [i_5] [i_5])))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_21 [6U] [i_6] [i_5])) : (((/* implicit */int) var_4)))))) + (((/* implicit */int) ((arr_13 [i_5] [i_6] [(unsigned char)10] [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_5)))))))))))));
        }
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~((-((-(((/* implicit */int) (unsigned char)128)))))))))));
        arr_26 [i_7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_7])) && (((/* implicit */_Bool) (unsigned char)43)))));
    }
}
