/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131297
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
    var_15 = (!((!(((/* implicit */_Bool) var_14)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15183700771812979949ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (5949520048416468833ULL))))));
                var_16 = ((/* implicit */unsigned char) arr_4 [(unsigned char)13] [i_1]);
            }
        } 
    } 
    var_17 -= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3263043301896571660ULL)))))) - (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) (short)-24935)) + (2147483647))) << (((/* implicit */int) var_5)))) < (min((16777208), (((/* implicit */int) (signed char)-92))))))))));
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(14851212814297187011ULL)))) ? (max((((/* implicit */int) var_0)), (16777229))) : (var_14)))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)4095))) ? (var_8) : (13613121761936664936ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_23 [i_2] [i_3] [i_6] [i_5] [i_6] = ((/* implicit */int) arr_10 [i_5 + 1]);
                                arr_24 [i_2] [i_3] [(unsigned short)6] [i_5] [i_2] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)243)), (((long long int) (-(((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_4] [i_2]);
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_4]))));
                }
            } 
        } 
    } 
}
