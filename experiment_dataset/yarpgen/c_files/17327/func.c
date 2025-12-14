/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17327
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
    var_18 = ((/* implicit */unsigned long long int) ((((((max((var_7), (var_9))) ? (((/* implicit */int) var_17)) : (var_16))) + (2147483647))) >> (((var_8) - (2342585560U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((1835320831) | (((/* implicit */int) (_Bool)1))))), ((~(var_8)))))), (arr_1 [0ULL] [(_Bool)1])));
                var_19 = ((/* implicit */long long int) (-(459400317U)));
                arr_7 [i_1] = ((/* implicit */int) var_17);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) (~(13211601587884589640ULL)));
                var_21 |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_10)), (arr_13 [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))))));
                var_22 = ((((/* implicit */_Bool) max(((+(arr_0 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) >= (arr_1 [i_3] [i_3]))))))) ? (((((arr_13 [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (arr_10 [(unsigned short)5] [(unsigned char)1]) : (arr_11 [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (+(((int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_13))))));
}
