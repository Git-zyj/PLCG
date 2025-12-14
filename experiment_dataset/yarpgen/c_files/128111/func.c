/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128111
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((+(((/* implicit */int) ((_Bool) var_13))))) >> (((((/* implicit */int) var_2)) - (21014))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((int) (~(1059102517U)))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (var_9) : (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) ((int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (-(((int) var_12))));
        arr_12 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (var_3)))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 8; i_4 += 3) 
    {
        arr_17 [0] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 1059102530U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7669))) : (1472922994U))));
        arr_18 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    }
    var_20 = ((/* implicit */unsigned int) ((signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ ((-9223372036854775807LL - 1LL))))));
}
