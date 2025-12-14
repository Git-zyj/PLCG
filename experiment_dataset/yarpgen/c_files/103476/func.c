/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103476
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
    var_13 = var_2;
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_14 = ((unsigned int) ((int) min((1155045843U), (((/* implicit */unsigned int) arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1602461891))));
                    var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) 107970110)) ? (((/* implicit */unsigned int) var_0)) : (arr_6 [i_0 + 1] [i_1 - 1]))), (((/* implicit */unsigned int) max((min((var_5), (arr_7 [i_0 - 2] [3] [3] [i_0 - 2]))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-111)) >= (arr_4 [i_0] [i_2] [i_2])))))))));
                    var_17 = ((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1 - 3]);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */int) min((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0)))))))));
    var_19 = ((/* implicit */signed char) var_7);
}
