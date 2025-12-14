/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131428
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))) ? (var_10) : (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((unsigned short) var_1))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) var_12)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))) << (((((/* implicit */int) var_12)) + (14899)))));
                            var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_4))))))));
                            var_19 = ((/* implicit */long long int) var_5);
                            arr_10 [i_3] [i_3] = var_4;
                            var_20 = ((/* implicit */_Bool) ((var_4) ? ((~(((/* implicit */int) arr_7 [i_1 + 1] [i_2 + 2] [i_3 + 1] [i_3])))) : (((int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_8);
    var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_13))))));
    var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_7))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) var_7))))))), (min((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_6))))))));
}
