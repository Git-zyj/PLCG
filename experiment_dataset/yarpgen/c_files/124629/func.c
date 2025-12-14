/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124629
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((_Bool) (unsigned char)221))) : ((-(-1907705948)))));
                    var_18 = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)0)), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1]))) - (arr_8 [i_3] [i_3 - 1])))) ? (max((-2404391469384219461LL), (((((/* implicit */_Bool) 1762273865)) ? (((/* implicit */long long int) -1907705948)) : (-2404391469384219461LL))))) : (((/* implicit */long long int) 771584383))));
                var_20 |= ((/* implicit */unsigned char) var_13);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~(var_8))))));
            }
        } 
    } 
}
