/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149684
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_1 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) + (((((var_9) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) max((arr_2 [i_1]), (var_2))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) var_13);
        var_18 = (+(((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2110207095U))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_4 + 3] [i_4 - 1] [i_4 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_3] [18ULL])) : (((/* implicit */int) ((unsigned short) arr_9 [i_5] [i_3])))));
                        arr_16 [i_2] [i_3] = ((/* implicit */unsigned short) (+(arr_14 [i_5] [i_4] [i_3] [i_2])));
                        arr_17 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        arr_18 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((long long int) (unsigned char)103));
                    }
                } 
            } 
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_3] [i_2]))));
        }
    }
    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (-124933850) : (32767)));
        arr_22 [i_6] [17U] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4944546555401924220LL)) || (((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) arr_20 [i_6]))))))));
        arr_23 [i_6] = max((((/* implicit */int) var_9)), ((-(((/* implicit */int) (unsigned char)144)))));
    }
}
