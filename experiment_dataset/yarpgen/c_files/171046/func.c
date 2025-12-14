/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171046
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
    var_17 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1]))));
                                var_19 = ((/* implicit */unsigned long long int) ((((2147483647) | (((/* implicit */int) arr_11 [i_0] [6LL] [(short)0] [i_0] [i_0] [i_0] [i_0])))) > (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */int) arr_1 [i_0] [i_0]);
                    arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (3461850143U) : (((/* implicit */unsigned int) 2147483647))))) ? (((((/* implicit */_Bool) 6212780990024834189LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12))))) : (((/* implicit */int) (unsigned short)2967)))) : (((/* implicit */int) ((_Bool) 3301701421748814931LL)))));
                    var_21 -= ((/* implicit */short) ((((14702312188465398451ULL) << (((2147483647) - (2147483612))))) >> (((((/* implicit */int) (short)6741)) - (6715)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9006924376834048LL))))), (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((((/* implicit */int) var_14)) - (14087))))))));
}
