/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17499
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = (-(((long long int) var_0)));
                            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((int) arr_0 [i_4 - 1] [i_0 - 1])))));
                            arr_13 [i_0 + 1] [i_2] [i_4] = ((/* implicit */short) var_5);
                            arr_14 [i_2] [i_2] = var_10;
                        }
                        arr_15 [i_2] [(unsigned char)3] [i_2] [(unsigned char)3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) max(((short)-27346), (((/* implicit */short) arr_8 [i_2]))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_12 ^= max((min((max((7255389662389197813LL), (var_3))), (((/* implicit */long long int) ((unsigned char) 7255389662389197834LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 914488653)), (var_6))))))));
                            arr_20 [i_2] [i_2] = max(((-(((((/* implicit */_Bool) arr_4 [i_0] [14LL])) ? (9198324849368440190LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [17LL]))))))), (max((arr_17 [i_1] [i_2] [i_1] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (arr_18 [i_2] [i_2] [15LL] [15LL] [15LL])))))));
                            var_13 = ((((/* implicit */_Bool) (~(max((var_3), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_1]))) : (min((((long long int) var_6)), (((((/* implicit */_Bool) (unsigned char)74)) ? (var_5) : (var_9))))));
                            var_14 = ((/* implicit */unsigned char) (~(arr_16 [i_0 + 1] [i_1] [i_1] [i_1 - 2])));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_0 + 1] [i_2] [i_0] = ((/* implicit */long long int) (-(165513199)));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_4))));
                        }
                        var_16 = ((/* implicit */unsigned char) (~(((long long int) ((unsigned char) var_3)))));
                    }
                    arr_24 [i_2] [i_1 + 1] [i_1 + 1] [i_2] = (-(((((/* implicit */_Bool) min((7255389662389197820LL), (33553408LL)))) ? (((/* implicit */long long int) 914488653)) : (max((((/* implicit */long long int) 0)), (288230374004228096LL))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_2] [4LL] [i_8] = ((/* implicit */long long int) min(((+((-(((/* implicit */int) var_10)))))), (min((((((/* implicit */_Bool) arr_10 [(unsigned char)2] [(unsigned char)2] [i_2] [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (arr_18 [i_2] [i_2] [i_2] [i_2] [i_8]))), (1558916078)))));
                        var_17 = ((long long int) ((long long int) max((var_7), (-4555814427934661525LL))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (short)14675);
}
