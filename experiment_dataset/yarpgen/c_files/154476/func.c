/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154476
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
    var_12 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
        var_14 = ((/* implicit */signed char) (-(arr_1 [i_0 - 3] [i_0 - 1])));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (+((-(var_9)))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) (signed char)0)) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))))));
        var_16 = ((/* implicit */long long int) ((0) % (((/* implicit */int) (unsigned short)17278))));
    }
    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) (signed char)-19))))), (2316177264U)))) ? (((long long int) var_9)) : (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (short)23053)) : (((/* implicit */int) (unsigned short)17278)))), (((((/* implicit */int) (unsigned char)200)) * (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_4 [i_2] [i_2]))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((((+(var_7))) | (((/* implicit */long long int) ((unsigned int) arr_12 [6] [6] [i_2] [i_6]))))) - (((/* implicit */long long int) -1)))))));
                                arr_18 [i_3] [i_3] [8LL] [8LL] = ((/* implicit */short) (~(min((((/* implicit */int) var_11)), ((~(((/* implicit */int) (short)-13639))))))));
                                var_20 = ((/* implicit */unsigned short) 0U);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((arr_8 [i_2] [i_4]), (((/* implicit */short) ((((/* implicit */_Bool) -329179852)) || (((/* implicit */_Bool) -1)))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (var_2))))));
}
