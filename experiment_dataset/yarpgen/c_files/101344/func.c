/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101344
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_4 [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)31465)) ? ((-(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(var_1))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                var_15 -= ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) (unsigned short)31468)))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)9297)))) : (((/* implicit */long long int) max((((/* implicit */int) var_5)), (-26)))))), (min((((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))), (((/* implicit */long long int) min((var_10), (((/* implicit */int) (unsigned short)34067)))))))));
            }
        } 
    } 
    var_16 = var_11;
    var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9311))) : (4110395441U)))));
}
