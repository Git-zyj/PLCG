/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120596
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [(signed char)1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [(unsigned char)13])) ? (((int) (signed char)-23)) : (max((arr_12 [16U] [i_1]), (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 - 1] [i_0 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            {
                arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) - (max((((unsigned long long int) (unsigned short)24999)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (arr_19 [i_4] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50596))))))))));
                arr_22 [i_4] [i_5] = ((/* implicit */int) arr_16 [i_5]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ^ (((/* implicit */long long int) var_3))));
    var_16 = ((max((max((((/* implicit */int) var_14)), (var_4))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)25024)))))) / (((/* implicit */int) var_2)));
}
