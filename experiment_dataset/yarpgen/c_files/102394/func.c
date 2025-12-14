/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102394
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) 4294967286U);
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((4294967271U) == (127942223U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_3]), (arr_9 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_3]) : (arr_9 [i_2])))) : (max((arr_13 [i_2] [i_2] [i_2]), (var_9)))));
                var_12 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_14 [i_3]))))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 24U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))) ? (127942223U) : (46U)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) arr_10 [i_3])) : (((((/* implicit */_Bool) 4294967228U)) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_3])) : (var_1)))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) || ((!(((/* implicit */_Bool) arr_14 [i_2]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) var_7)), ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))))));
}
