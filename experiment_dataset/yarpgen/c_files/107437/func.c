/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107437
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
    var_17 = ((/* implicit */unsigned char) var_16);
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_3 [9LL] [i_1 - 1] [i_1 + 4]))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_0 [6LL] [i_0]))));
                var_21 = ((/* implicit */long long int) max((var_21), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 4])))))) ? (var_13) : (min((((/* implicit */long long int) arr_4 [i_0])), (0LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) arr_2 [i_0] [i_1 - 2])) >= (((((/* implicit */_Bool) 9221526657384703935LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [10LL] [i_1] [(short)18]))) : (arr_5 [i_0] [i_0]))))))))));
                arr_6 [24ULL] = min((min((max((((/* implicit */long long int) arr_0 [(_Bool)1] [6LL])), (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_1 [i_0]))))))), (min((((((/* implicit */_Bool) -1LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1])) >> (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_22 = ((((0LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) 16396781586192777387ULL)) ? (((/* implicit */int) var_5)) : (var_0)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (1551629104150229193LL))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_14 [2LL] |= ((((/* implicit */int) ((((/* implicit */long long int) (~(arr_2 [i_2] [i_3])))) != (min((-4LL), (arr_7 [(signed char)4] [i_4])))))) + ((~(((/* implicit */int) var_6)))));
                    arr_15 [i_2] [i_2] [i_4] [i_4 - 1] = min((max((3LL), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_7 [i_2] [(signed char)3]), (((/* implicit */long long int) (unsigned char)0)))))))));
                }
            } 
        } 
    } 
}
