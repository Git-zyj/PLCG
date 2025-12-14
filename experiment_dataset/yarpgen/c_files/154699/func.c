/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154699
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
    var_18 ^= ((/* implicit */_Bool) min((2724373487403994235ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_19 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_11))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8387584U)))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [(short)10] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_3 + 1] [i_0 + 1] [i_1 - 2] [i_2 - 1]));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15722370586305557381ULL)) || (((/* implicit */_Bool) (unsigned short)47630)))))));
        arr_12 [i_0] [i_0 + 1] = ((_Bool) arr_1 [i_0 - 1]);
    }
    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 + 3] [i_4])), (((unsigned int) arr_6 [9]))))));
        arr_17 [i_4] = max((arr_16 [i_4]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_4 + 1])), (var_0)))));
    }
    var_23 = var_8;
}
