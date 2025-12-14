/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106330
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_1] &= ((/* implicit */unsigned long long int) ((5240020629017475784LL) << (((((((/* implicit */int) (signed char)-67)) + (68))) - (1)))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) >= ((-(arr_3 [i_0] [i_1])))));
                var_13 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */int) (-(var_4)));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(var_3))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */short) (-(arr_2 [(short)5] [i_3 - 1])));
                    var_16 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_12 [i_4]))))), (arr_3 [i_4] [i_2])));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -1841084095)) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_2] [(unsigned char)17]))))) ? (((/* implicit */unsigned int) (((+(1841084095))) | (((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1]))))) : (3056088579U)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (-93915463))))) : (min((((/* implicit */unsigned int) var_9)), (var_6)))))), (var_4)));
}
