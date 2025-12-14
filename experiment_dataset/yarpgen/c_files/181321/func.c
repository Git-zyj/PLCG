/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181321
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] &= ((/* implicit */long long int) ((((arr_4 [18U]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (signed char)-101)))) ^ (((((/* implicit */int) arr_6 [i_0] [i_2] [i_3])) ^ (((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2])) >> (((/* implicit */int) var_4))))), ((-(4944749723059426948LL))))))));
                        var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) var_11))))));
                        var_20 -= ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) ((unsigned char) var_13));
    var_22 |= ((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) var_5)) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_10)))))))));
}
