/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142315
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
    var_20 ^= ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)14450)), (((((/* implicit */_Bool) 5966680690425723379ULL)) ? (min((((/* implicit */unsigned int) (unsigned short)46713)), (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) max((((var_18) ^ (var_1))), (((/* implicit */long long int) (unsigned char)55)))));
        arr_7 [i_1] = ((/* implicit */long long int) (((-(var_11))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_13))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_1] [19ULL] [i_4] = var_10;
                        arr_17 [i_1] = ((max((arr_5 [i_1] [i_4 - 2]), (((/* implicit */unsigned int) var_16)))) & (((((/* implicit */_Bool) arr_15 [i_1 + 3] [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 + 3] [i_1 + 2] [i_1]))))));
                    }
                } 
            } 
        } 
    }
}
