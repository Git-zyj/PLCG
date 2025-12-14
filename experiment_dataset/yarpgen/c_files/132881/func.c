/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132881
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 2]))));
                        var_15 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-110));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 24; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 4) 
            {
                {
                    var_16 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_4 - 1]))));
                    var_17 = ((/* implicit */unsigned long long int) arr_3 [i_4] [i_4 - 2]);
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) var_5);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */_Bool) 9783466135569970720ULL)) ? (2594778839249986224ULL) : (((/* implicit */unsigned long long int) -2726897116553012922LL)))) : (var_7)));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            {
                var_20 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2594778839249986224ULL), (140737488354304ULL)))) ? (((long long int) arr_6 [i_6])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) >= (var_3)))))))), (min((((/* implicit */unsigned long long int) var_8)), (arr_19 [i_7] [i_6]))));
                var_21 = ((unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (var_6) : (var_8))), (0U)));
                var_22 = ((/* implicit */int) (signed char)122);
            }
        } 
    } 
}
