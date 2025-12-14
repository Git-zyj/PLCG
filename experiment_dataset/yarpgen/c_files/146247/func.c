/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146247
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
    var_17 |= var_3;
    var_18 |= ((/* implicit */unsigned char) min((((var_0) - (var_9))), (max((var_12), (var_9)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [17U] = ((unsigned char) (-(((/* implicit */int) ((0LL) < (((/* implicit */long long int) 0U)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min(((-(2414548854U))), (((/* implicit */unsigned int) ((_Bool) (-(var_6)))))));
                    var_20 = ((unsigned int) (+(var_12)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2209277584681825818LL))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_22 = ((/* implicit */unsigned int) var_4);
    }
}
