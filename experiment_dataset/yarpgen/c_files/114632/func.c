/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114632
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
    var_19 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */_Bool) (short)18868)) && (((/* implicit */_Bool) var_18)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_1] [i_2]), (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-32415))))))))) : (max((arr_8 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                    var_20 *= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 1591078869417712600LL)) ? (var_12) : (var_16))), (arr_8 [i_0] [i_0] [(signed char)16] [i_0]))), ((~(min((arr_8 [i_1] [(short)8] [0] [0]), (((/* implicit */unsigned long long int) (unsigned char)148))))))));
                    var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 327355758))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_1] [4U])))) : (((((/* implicit */int) arr_4 [i_0] [2] [8ULL])) >> (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)20]))))));
                    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
}
