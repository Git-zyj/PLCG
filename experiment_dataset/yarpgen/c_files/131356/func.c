/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131356
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
    var_19 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [(signed char)8] = ((/* implicit */signed char) 0U);
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [6LL] [i_1] = ((/* implicit */unsigned long long int) var_13);
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -1LL);
                    var_21 = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))))) & (max((max((arr_0 [i_4]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4]))))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1650266740U)) ? (2279489113U) : (3905575672U)))));
    }
    var_23 = ((/* implicit */unsigned short) (-((~(0LL)))));
}
