/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176981
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_16)))) ? (max((((/* implicit */int) var_12)), (var_3))) : (min((var_9), (((/* implicit */int) var_14))))))), (min((((/* implicit */unsigned long long int) var_1)), (var_8)))));
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (var_8))))) / (((((/* implicit */_Bool) var_10)) ? (var_5) : (var_11))));
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17443))) * (6498167658806940168ULL)))));
                arr_7 [i_0] [13ULL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((-1764048458) + (2147483647))) << (((((/* implicit */int) (unsigned short)26612)) - (26612)))))) ? (min((min((var_10), (var_5))), (var_8))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((min((var_6), (((/* implicit */unsigned long long int) var_9)))) > (var_6))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_6)))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_3))))) : (min((var_13), (((/* implicit */unsigned long long int) var_1)))))))));
                    var_23 ^= ((/* implicit */long long int) ((max((var_11), (((/* implicit */unsigned long long int) var_1)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_10)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_24 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_15), (var_9)))) ? (min((((/* implicit */int) var_14)), (var_2))) : (((/* implicit */int) min((var_0), (((/* implicit */short) var_1)))))))), (min((4961544379971076343ULL), (28ULL)))));
                arr_20 [i_5] = ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_9)))) / (min((((/* implicit */unsigned long long int) var_14)), (var_6))));
            }
        } 
    } 
}
