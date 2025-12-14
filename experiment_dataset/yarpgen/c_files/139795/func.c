/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139795
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                arr_7 [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29741)) ? (((/* implicit */int) (unsigned short)7752)) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_15 [i_3] [i_2] = ((/* implicit */short) ((min((var_18), (((/* implicit */long long int) (-(arr_14 [i_3] [i_3 - 1])))))) <= (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) < (var_1)))))))));
                arr_16 [i_2] [14] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-2075937522)));
                arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (arr_8 [i_3 - 1] [i_3 - 1]) : (arr_8 [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */long long int) (~(arr_8 [i_3 - 1] [i_3 - 1])))) : (var_11)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) (-(((/* implicit */int) var_10)))))));
}
