/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101755
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned char) min((((int) arr_2 [i_0] [i_1])), ((+(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))));
                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (signed char)4))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_3 + 2] = ((/* implicit */unsigned int) var_0);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_2 - 2])))) ? (((arr_1 [i_2 - 1]) ^ (arr_1 [i_2 - 3]))) : (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 + 3]) : (arr_1 [i_2 - 2])))));
            }
        } 
    } 
}
