/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128347
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
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((min((arr_3 [i_0 - 4]), (arr_4 [i_0 - 4] [i_0 - 2]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 - 1] [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1 - 2])) * (((/* implicit */int) var_3)))))))));
                            arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (min((131071LL), (((/* implicit */long long int) (unsigned short)60550)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (arr_4 [i_0] [i_2]))))))));
                            arr_12 [i_0] [i_1 - 1] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) min(((+(min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [(short)7])), (var_11))))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1] [i_0 + 3]), (arr_0 [i_0 + 3] [i_0 - 2]))))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) arr_4 [i_1] [i_3])) >= (((((/* implicit */unsigned long long int) -131073LL)) + (11869201901741913862ULL))))), ((!((!(((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_3] [i_2] [i_0 - 2])))))))))));
                            arr_13 [i_0 + 3] [i_3] [i_0] [i_0] [i_0] [i_3] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_1 - 1]))) % ((+(arr_1 [i_0]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)19635))))) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) ((max((var_6), (var_5))) - (min((-131071LL), (3965520164866855486LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
        {
            {
                var_20 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 + 1] [i_5 - 2])))) ? (((arr_7 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 - 3]) ? (((/* implicit */int) arr_2 [i_5 - 2] [i_5 + 1] [i_5 - 3])) : (((/* implicit */int) arr_2 [i_5 + 1] [i_5 - 3] [i_5 - 2])))) : (((/* implicit */int) max((arr_2 [i_5 - 3] [i_5 - 2] [i_5 - 2]), (((/* implicit */short) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 2])))))));
                var_21 = ((/* implicit */signed char) (~(((arr_3 [i_4]) / (arr_3 [i_4])))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_5 - 1] [i_4])), (312768626U))))));
            }
        } 
    } 
}
