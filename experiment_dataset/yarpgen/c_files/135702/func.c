/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135702
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
    var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-78)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                    arr_10 [i_0] [i_0] = ((/* implicit */short) var_6);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_14 [i_0] [7ULL] [i_0] = ((/* implicit */unsigned short) (((((-(arr_7 [i_0]))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0]))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -41495935)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [(short)5] [i_0] [i_1 - 1] [i_1 - 1])))))));
                        arr_15 [10LL] [i_0] [i_2] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_2]))))));
                    }
                    var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
}
