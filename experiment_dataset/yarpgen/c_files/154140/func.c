/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154140
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
    var_16 = ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2279499614054351541LL) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) var_0);
        arr_3 [i_0 + 3] = (((-(((long long int) arr_0 [(unsigned char)0])))) / (((/* implicit */long long int) ((/* implicit */int) var_1))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [4LL] = ((/* implicit */signed char) (-(349852243U)));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4020916907U), (925818786U)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (((long long int) arr_5 [(short)5]))))) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (arr_4 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (4018415076981469713LL) : (3644280226414699770LL))))) != (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                            arr_19 [i_1] [i_2] [i_1] [0U] [(signed char)1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_7))) / (((/* implicit */int) ((unsigned char) 26U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_4] [i_4]) / (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_11 [i_2] [7U]) : (455811415U))) : ((~(var_5)))))) : ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_4 [1LL]))))));
                        }
                        var_22 ^= ((/* implicit */unsigned char) var_9);
                        arr_20 [i_1] [i_2] = (((~(arr_10 [i_1] [2LL] [2LL]))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))));
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) 3839155877U)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4194300U)) : (arr_16 [(short)14] [i_2] [i_2] [i_1])))));
                    }
                } 
            } 
            arr_21 [i_2] [13U] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)52))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((3977446847094763672LL) / (((/* implicit */long long int) 923277307U)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 3038924662U)) ? (1592960034U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_2] [i_2] [i_1] [i_1]))))))));
                var_24 &= ((/* implicit */long long int) (+(arr_22 [i_6] [(unsigned char)13])));
            }
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((arr_14 [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */long long int) var_6)))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_31 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_5))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((long long int) ((4194298U) / (4294967281U))))));
                var_28 *= ((/* implicit */short) min((-3218761322917556901LL), (((/* implicit */long long int) (signed char)-16))));
            }
        } 
    } 
}
