/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169806
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((long long int) var_11));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) var_8)) << (((/* implicit */int) var_9))))));
        var_14 = ((/* implicit */unsigned char) min((((((var_9) ? (var_1) : (var_6))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
        var_15 = (!(((/* implicit */_Bool) ((unsigned long long int) var_2))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16; i_2 += 2) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), ((-(var_4)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_4] = ((/* implicit */signed char) ((unsigned short) var_8));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    }
    var_18 -= ((/* implicit */signed char) ((unsigned char) var_2));
    var_19 ^= ((/* implicit */unsigned char) var_3);
}
