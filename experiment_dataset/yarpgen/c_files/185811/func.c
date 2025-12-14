/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185811
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
    var_12 |= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_10))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_3 - 1])) <= (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) << (((/* implicit */int) arr_2 [i_2 - 1] [i_3 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) ((arr_11 [i_4] [i_2] [i_1] [(_Bool)1] [i_0]) <= (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_2] [i_4]))));
                        arr_13 [i_4] [i_4] [i_4] [(unsigned char)8] |= ((/* implicit */long long int) ((((arr_1 [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_2]))) >= (arr_16 [i_0] [i_0] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_1])) << (((((/* implicit */int) arr_12 [(_Bool)1])) + (107)))))) : (arr_11 [i_6] [i_5] [i_2] [i_1] [i_0])))) ? (min((arr_16 [i_2] [i_2] [i_6] [i_2 - 1]), (arr_16 [i_2] [i_2 - 1] [i_6] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((arr_1 [i_2]) || (((/* implicit */_Bool) var_1)))), (arr_17 [i_0] [(_Bool)1])))))));
                            arr_18 [7U] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) ((3ULL) != (((((/* implicit */_Bool) min((arr_3 [i_6]), (6376549704040548896ULL)))) ? (min((((/* implicit */unsigned long long int) -2618270463082684902LL)), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_0] [(signed char)8] [i_2] |= ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_7] [(_Bool)1])), (((((/* implicit */_Bool) 4114524057U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_2] [(signed char)12]))))))) & (min((((/* implicit */unsigned int) min((arr_5 [i_0] [i_0] [i_0]), ((_Bool)1)))), (min((3785343631U), (((/* implicit */unsigned int) var_4))))))))));
                            var_18 = var_11;
                        }
                        arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)45))))) ? (min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [8LL] [i_2])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((min((arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]), (arr_9 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */long long int) min((((var_8) ? (arr_16 [i_0] [i_0] [(unsigned char)8] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-124)), ((unsigned char)77)))), (min((((/* implicit */long long int) var_3)), (var_0)))))))));
                    }
                    var_20 -= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_1]))) | (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) 890267723U)) : (arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_15 [i_0] [i_0] [i_9]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_7), (arr_28 [i_0] [i_8] [i_9]))))))) == (((((/* implicit */_Bool) arr_23 [i_8] [(_Bool)1] [(_Bool)1])) ? (0LL) : (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */long long int) var_3)) : (-5111427883599369485LL))))))))));
                    var_22 -= ((/* implicit */unsigned int) arr_21 [(signed char)7] [13LL] [13LL] [(signed char)7] [(_Bool)1]);
                }
            } 
        } 
        arr_29 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) 3404699584U))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 890267723U)) : (var_0)))))) ? (arr_11 [i_0] [i_0] [i_0] [3LL] [i_0]) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) < (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) var_3)), (var_11))))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
}
