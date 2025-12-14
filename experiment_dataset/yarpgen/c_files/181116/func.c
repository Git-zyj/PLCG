/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181116
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_13)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [2LL] [i_1 - 1] [i_0] = ((/* implicit */short) ((arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) | (arr_10 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 + 1])));
                        var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_0] [(short)4]))))));
                        var_21 = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (arr_4 [i_0] [i_1 - 1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
}
