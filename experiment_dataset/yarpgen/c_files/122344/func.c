/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122344
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
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = var_8;
                    arr_8 [i_0] [i_0] [i_1] [(short)11] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((2147483647) - (((/* implicit */int) (unsigned short)38353))))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_1))))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) : (4643086241999469489ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (7339120586188204193LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)57))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_8))) : (((/* implicit */unsigned long long int) var_14))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned short) max((((var_14) - (var_13))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) - (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (var_15)))))));
                var_20 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_15)))))));
            }
        } 
    } 
}
