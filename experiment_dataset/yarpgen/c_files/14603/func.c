/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14603
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((((arr_5 [i_0] [9ULL] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))) + (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0])))))) * (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0])) : (65504U))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) (unsigned short)8192);
                                arr_15 [i_0] [i_0] [(signed char)18] [i_4] [i_0] [17U] [i_2] = ((/* implicit */_Bool) 12139179095152498219ULL);
                                arr_16 [2U] [i_1] [i_2] [i_3] [19U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3736711163U)) ? (((/* implicit */int) (unsigned short)36469)) : (1247931585)))) / (min((((/* implicit */unsigned long long int) 558256116U)), (1966080ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (-(-6040427249766178014LL)))))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((((/* implicit */_Bool) arr_14 [i_0] [11U] [i_1] [i_0] [(unsigned short)7] [i_1] [i_4])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [7LL] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_9);
}
