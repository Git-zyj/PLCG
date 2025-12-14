/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141997
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
    var_11 = ((unsigned short) ((_Bool) var_2));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_3))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) - (2944776554U)));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))) / (2944776557U)))) ? (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_5 [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))));
        var_14 = ((/* implicit */_Bool) (~(505285523U)));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15690)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)0)))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) arr_5 [i_1 + 1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)62203)))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (var_8))))))));
        var_17 = (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))) : (((arr_0 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))))));
        var_18 -= ((/* implicit */unsigned int) var_0);
    }
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) ((unsigned int) arr_12 [i_3] [i_4] [(_Bool)1]))), (arr_16 [i_3] [(unsigned short)8]))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] [14LL] [i_4] &= (!(((/* implicit */_Bool) ((unsigned int) arr_17 [4LL] [i_6] [(signed char)14] [4LL]))));
                                var_21 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_15 [2U] [(unsigned short)4] [(unsigned short)4] [2U])))));
                                var_22 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((min(((-(arr_21 [i_3]))), (((arr_5 [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_5] [i_5])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))) > (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_5]))) : (3563602727U)))))))));
                }
            } 
        } 
    }
}
