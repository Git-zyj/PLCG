/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13598
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
    var_20 = ((/* implicit */signed char) (~((-(var_13)))));
    var_21 = ((/* implicit */signed char) ((unsigned int) var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 20812387U)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (var_2))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_0 + 2])) : (var_19)))))))) + (arr_1 [i_0] [2LL])));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((var_15) ? (arr_1 [i_0 + 2] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3]))))) - (57680LL)))));
                var_22 = ((/* implicit */short) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            {
                var_23 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (var_17)));
                arr_13 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_3]) / (var_4)))) ? (((/* implicit */int) arr_4 [i_3] [i_3 - 2])) : (((/* implicit */int) ((unsigned short) 0ULL)))))) : (0ULL));
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((unsigned long long int) 0ULL)) | (((unsigned long long int) arr_8 [i_3] [i_3 - 2]))));
            }
        } 
    } 
}
