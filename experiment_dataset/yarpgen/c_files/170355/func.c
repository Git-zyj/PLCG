/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170355
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
    var_15 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (unsigned short)37857)) : (max((-2071782547), (2021321156)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((((/* implicit */int) var_1)) < (1458368249))), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [20LL] [i_0 + 2])))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))), (((/* implicit */long long int) var_9))))))))));
    var_18 += ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [8ULL]))) % (max((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((signed char) 2021321174)))))));
                arr_15 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) var_9)), (var_11))))));
            }
        } 
    } 
}
