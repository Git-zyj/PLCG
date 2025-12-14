/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17420
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((arr_2 [i_0]) - (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned short)38271)) : (((/* implicit */int) var_1)))))))));
        var_10 ^= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        var_11 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [6LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38275)))))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (max((var_7), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [14U]))))) : (arr_2 [20U])));
        arr_6 [i_1] = (unsigned short)27287;
    }
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (-135798837) : (((/* implicit */int) (unsigned short)15457)))), (((/* implicit */int) ((arr_2 [i_2]) >= (arr_2 [i_2]))))));
                    arr_16 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_2] [15U] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
