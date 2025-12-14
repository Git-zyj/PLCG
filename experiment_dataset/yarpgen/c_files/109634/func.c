/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109634
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (short)19490)), (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_9)))))))) != (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) var_4)) / (var_8)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                    arr_8 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) var_5);
                    var_12 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? ((+(((/* implicit */int) (short)19490)))) : (((/* implicit */int) ((unsigned short) (unsigned char)166))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19490)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) (short)19490))))));
    var_14 = ((/* implicit */long long int) max((var_14), (max((var_0), (((/* implicit */long long int) ((unsigned char) (+(var_7)))))))));
    var_15 = ((/* implicit */int) var_4);
}
