/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13033
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
    var_12 = ((/* implicit */short) (((~((~(var_6))))) | (((-709373309) / (709373333)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) min(((unsigned char)179), ((unsigned char)153)))) : ((-(-77550755)))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_1])) ? (arr_4 [i_1 + 3] [i_1] [i_1]) : (arr_4 [i_1 + 1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 ^= (+(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_3 [i_1] [i_2] [i_3 - 1])) : (arr_5 [i_2]))));
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)165))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_0] [i_3] [i_3 + 1])))) ? ((~(arr_13 [i_1] [i_1] [i_1] [i_2] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_0] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_3] [i_3 - 1])) : (arr_13 [i_1] [i_4] [i_3] [i_4] [i_3 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((int) var_11))) ? (var_0) : (((/* implicit */unsigned int) var_5))))));
}
