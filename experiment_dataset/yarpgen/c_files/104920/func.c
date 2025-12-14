/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104920
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1] [i_2])) ? (arr_12 [i_2] [i_2 + 3] [i_2]) : (arr_12 [i_2] [i_2 + 3] [i_2]))) & (arr_12 [i_2] [i_2 + 4] [i_2])));
                arr_14 [i_2] [i_3] = ((/* implicit */short) arr_9 [i_3] [i_2]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((1244833565162444608ULL), (((/* implicit */unsigned long long int) max(((unsigned char)207), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 4065313716U))))))))))));
}
