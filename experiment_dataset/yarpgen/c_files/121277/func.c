/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121277
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    arr_8 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1] [9])), ((-(min((((/* implicit */long long int) arr_2 [i_1 + 1])), (var_1)))))));
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 0U)), (var_10)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [2U] [i_0]))) / (var_7)))))) ? (((/* implicit */unsigned int) var_11)) : (((arr_3 [i_0] [i_0]) * (((/* implicit */unsigned int) arr_2 [i_1 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) (((-(min((((/* implicit */unsigned long long int) var_9)), (1280639444978617625ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)6906)) : (((/* implicit */int) var_5)))) != (((/* implicit */int) var_4))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (min((((/* implicit */unsigned int) var_4)), (3184178547U)))))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) (-(arr_3 [i_4] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_11)) <= (((4207220775U) / (278248545U))))))))))));
                }
            } 
        } 
    } 
}
