/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140085
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (short)-27025);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1315)) ? (((/* implicit */int) (short)27012)) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (23U))) <= ((-(9U)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            {
                arr_14 [i_3] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (short)27023)) ? (-1167016384392039105LL) : (((/* implicit */long long int) 2921977666U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1964079636U)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27023))))))))));
                var_20 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) 354361081U)) ? (((/* implicit */int) arr_11 [i_4] [i_4 + 1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (short)-27024)) <= (((/* implicit */int) arr_11 [i_4] [i_4 - 1])))))));
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)64882)), ((-(850819374329249657ULL)))));
            }
        } 
    } 
}
