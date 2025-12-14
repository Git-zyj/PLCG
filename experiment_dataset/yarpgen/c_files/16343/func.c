/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16343
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
    var_14 = ((/* implicit */long long int) (unsigned short)8985);
    var_15 = ((/* implicit */short) (~(var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_1)) : (var_9)));
                    var_18 = ((/* implicit */_Bool) ((arr_5 [i_2] [i_1] [i_0 - 1]) % (((arr_2 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (short)-18505)) : (((/* implicit */int) (unsigned short)56551))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1849466391U)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned short) ((11272012928540060959ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
    }
}
