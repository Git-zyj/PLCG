/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104952
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (arr_7 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)23] [i_0]))) > (1350468946U)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_2 [i_1]), (((/* implicit */int) (signed char)-13)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1350468946U)))))))))));
                var_11 = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) arr_11 [i_2]);
                    arr_16 [i_2] = var_0;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_24 [i_5 + 2] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_1 [i_5 + 1]))));
                                var_15 += ((/* implicit */short) min((((((/* implicit */int) (signed char)-121)) + (1931785078))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
