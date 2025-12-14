/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170873
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)-26425)), (-651891333)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [0LL])))) + (((int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (signed char)25)) : (var_4))))));
                    var_18 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_1 + 1] [(unsigned short)10] [i_1])), (max((651891340), (((/* implicit */int) arr_2 [i_1 - 1] [20U] [8ULL]))))));
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_2] [i_0] [(unsigned short)19])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-43)), ((unsigned short)64026))))) : (((((/* implicit */_Bool) (signed char)-28)) ? (-1857371750861257651LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */long long int) (((-(((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)1] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (short)28672);
                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_3])), (arr_5 [(short)8] [i_4] [i_3] [(short)8])))) ? (max((var_15), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_4] [(signed char)8])), (max((651891329), (((/* implicit */int) (signed char)-23)))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)56647))))) / (max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_4] [i_4] [i_3]))))));
                var_23 = ((/* implicit */unsigned short) max(((+(arr_5 [i_4] [i_4] [i_4] [i_4]))), (min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) 18446744073709551592ULL))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_14);
}
