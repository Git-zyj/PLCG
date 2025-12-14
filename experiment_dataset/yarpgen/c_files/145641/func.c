/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145641
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11)))))) ? (((((var_12) >> (((/* implicit */int) var_3)))) >> (((/* implicit */int) var_3)))) : (((/* implicit */unsigned long long int) min((((long long int) var_6)), (((/* implicit */long long int) var_0)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((var_0) | (var_0)))));
                        arr_10 [i_0] = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
        arr_11 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((var_11) == (((/* implicit */long long int) var_1))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
    {
        var_17 = ((((((/* implicit */_Bool) var_2)) ? (var_13) : (var_11))) & (((/* implicit */long long int) (-(((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    }
}
