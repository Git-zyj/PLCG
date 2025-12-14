/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141271
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) var_8)), (var_5))))), (((((_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [13U]))) : (var_13))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = var_10;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        arr_11 [i_2] = arr_9 [i_2] [i_2];
        var_17 ^= ((/* implicit */unsigned short) var_5);
        var_18 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1]))))), (var_7)))));
    }
    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_19 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((arr_16 [5U] [i_3 - 1] [i_3 - 1]) ? (max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [10LL] [i_4] [i_5])) : (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_1)));
                        arr_23 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_20 [i_3] [i_3] [i_3 + 1] [i_3])))), (var_5)));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [(_Bool)1] [i_3]))));
    }
}
