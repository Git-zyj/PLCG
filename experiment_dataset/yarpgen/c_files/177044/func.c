/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177044
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
    var_17 = ((/* implicit */unsigned short) (-(var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_16);
                arr_5 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_4 [i_0]))), (((arr_4 [i_0]) - (arr_4 [i_0])))));
                var_19 = ((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
                var_20 = ((/* implicit */signed char) (-(max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_0])))) ? (arr_2 [i_1 + 1] [i_0]) : ((~(var_0)))))), (min((((/* implicit */long long int) (~(arr_4 [i_0])))), ((~(7165050494712315880LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_9))));
    var_22 = ((/* implicit */short) var_0);
    var_23 = var_0;
}
