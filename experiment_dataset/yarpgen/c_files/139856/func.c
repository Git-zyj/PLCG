/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139856
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
    var_17 = ((/* implicit */_Bool) var_3);
    var_18 = ((/* implicit */signed char) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) arr_0 [i_0] [8])) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))))), (((/* implicit */unsigned long long int) var_3))));
        arr_5 [i_0] = ((/* implicit */int) 3574176968U);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1128746216)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((int) (unsigned short)36383)) != (arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 &= ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_14 [i_1] [(short)5] [i_3])))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) / ((~(arr_12 [17])))));
                                var_22 |= ((/* implicit */long long int) (~(((720790328U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [14LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) > (var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24659)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_27 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [1] [i_2 + 1] [i_2 + 1]))));
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_18 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) (unsigned short)41044))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (arr_12 [i_1])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_2 + 1] [i_1] [i_1] [i_1] [i_2 + 1] [i_2] [i_2])) || ((_Bool)1))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((arr_31 [i_9 - 1] [i_9] [i_9] [i_9 - 1]) >= (arr_31 [i_9 + 1] [i_9] [i_9] [i_9 - 1])));
                        var_27 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2246949394788017220LL)))))));
                    }
                } 
            } 
        } 
    }
}
