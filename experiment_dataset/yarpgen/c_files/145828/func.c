/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145828
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_4))));
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-5272279776740767536LL), (max((((/* implicit */long long int) (unsigned char)63)), (var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_2] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_5 [i_0]) ? (((/* implicit */int) (unsigned short)59402)) : (arr_0 [i_1])))) == (((((/* implicit */_Bool) (+(687344166U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (1086434922)))) : (arr_7 [i_0] [i_1])))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) (unsigned short)65535);
}
