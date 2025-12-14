/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124350
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) max((min((((/* implicit */long long int) arr_1 [i_0])), (8388607LL))), (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_3] = ((/* implicit */short) arr_6 [i_2]);
                        arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) arr_11 [i_1 - 4] [i_1] [i_1] [i_1] [i_1]);
                        arr_14 [i_3] [i_2] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1 - 4] [i_1] [i_1]))))), (((unsigned char) arr_4 [i_3 - 1] [i_1 - 4] [i_1 - 2])));
                        var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_5 [i_2])), ((-(arr_0 [i_0])))));
                    }
                } 
            } 
        } 
    }
    var_19 -= ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_13))));
}
