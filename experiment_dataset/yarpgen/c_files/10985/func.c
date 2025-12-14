/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10985
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) max((var_1), (((/* implicit */short) var_2))))), (max((11U), (var_10)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((~(max((var_5), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)36879))))))));
                var_14 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) >> (((arr_4 [i_0] [i_0] [i_0]) - (947934276U)))))))), (min((((/* implicit */unsigned int) var_4)), (((4294967285U) - (arr_2 [(unsigned short)7] [i_0])))))));
                var_15 = ((unsigned int) (-(max((((/* implicit */int) arr_0 [i_0])), (var_6)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((((unsigned long long int) (~(((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) var_1)), (((13820624446771575899ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_3] [(_Bool)1])), (arr_7 [i_3])))) ? (max((var_8), (((/* implicit */unsigned long long int) ((signed char) var_1))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (1456978483570078115LL))))));
                var_18 = ((/* implicit */signed char) var_8);
                arr_11 [i_2] [i_2] [3U] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) var_9)), (arr_4 [i_2] [i_3] [i_3]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_11))));
}
