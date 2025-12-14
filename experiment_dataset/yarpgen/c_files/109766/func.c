/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109766
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
    var_11 = ((/* implicit */short) var_9);
    var_12 -= ((/* implicit */short) (signed char)0);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (arr_1 [i_0])));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned short) ((((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (arr_2 [(short)14]) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            {
                arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [i_3 + 2])))))));
                arr_12 [i_3 + 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((arr_3 [i_2] [i_3 + 2]), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned long long int) arr_7 [i_2])) : (((((/* implicit */_Bool) arr_6 [(short)6])) ? (var_4) : (var_5)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_10);
}
