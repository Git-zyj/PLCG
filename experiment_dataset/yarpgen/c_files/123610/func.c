/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123610
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) min((max((11229609635483664948ULL), (min((((/* implicit */unsigned long long int) (_Bool)1)), (16841448648317920579ULL))))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 + 1]))));
                var_20 = ((/* implicit */unsigned long long int) max((min((max((((/* implicit */int) arr_4 [i_0] [i_1 - 2])), (arr_1 [i_0]))), (((/* implicit */int) var_16)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_1])))))))));
                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_0 [i_0])))) ^ (max((arr_1 [i_0]), (arr_1 [i_1]))))), (((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))))))));
                arr_13 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((unsigned int) (+(((/* implicit */int) arr_5 [i_2])))))));
            }
        } 
    } 
}
