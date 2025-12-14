/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174129
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (short)9024);
                arr_7 [i_0] = ((((/* implicit */int) ((max((var_7), (((/* implicit */unsigned long long int) (short)-9024)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (arr_1 [i_0])))))))) != (min((((/* implicit */int) arr_1 [i_0 - 1])), (arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] [i_3] = arr_11 [i_2];
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) max(((~((((_Bool)0) ? (-2112843422) : (((/* implicit */int) arr_1 [i_3])))))), ((+(((((/* implicit */_Bool) (short)9024)) ? (arr_3 [i_2]) : (arr_4 [i_3] [i_2])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) (short)9024)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))))))));
}
