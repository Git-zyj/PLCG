/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173002
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
    var_10 = min((((/* implicit */short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)3))))), ((short)4406));
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4406)) ? (((((/* implicit */_Bool) (short)13309)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_1 [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-94))))))))));
                    arr_9 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) < (((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */int) (short)4419))));
                    var_13 = var_7;
                }
            } 
        } 
        arr_10 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (short)-4442))) % ((-(max((-2146062067624881991LL), (((/* implicit */long long int) (short)4419)))))));
    }
}
