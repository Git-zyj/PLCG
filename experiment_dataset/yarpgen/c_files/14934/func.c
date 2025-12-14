/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14934
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = (((!(((/* implicit */_Bool) 6759504560160516343LL)))) ? (((unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((var_1) << (((/* implicit */int) (!(((/* implicit */_Bool) 7207897064583412320LL)))))))));
                    var_16 = ((/* implicit */long long int) max((arr_3 [i_0] [i_0] [i_2 + 2]), (((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 7207897064583412320LL)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [12U] [12U] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_15 [i_0] [i_2 + 2] [2U])))));
                                arr_18 [i_0] [(unsigned char)16] [i_0] [i_3] [i_0] [i_0] [8LL] = (+(((((/* implicit */_Bool) min((arr_13 [i_0] [i_3]), (((/* implicit */short) var_11))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (-7207897064583412321LL))) : (7207897064583412321LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((int) -7207897064583412328LL));
}
