/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153290
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
    var_16 |= var_4;
    var_17 = ((/* implicit */unsigned short) (~(max((((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (~(var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1 - 2] [i_0] [i_2 - 3] [i_3] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))))) + (((/* implicit */int) ((((/* implicit */int) min((var_10), (((/* implicit */signed char) arr_1 [i_1]))))) <= (((((/* implicit */_Bool) 2720717425U)) ? (865424029) : (var_1))))))));
                            arr_12 [(unsigned short)10] [i_2] = ((/* implicit */unsigned char) ((_Bool) 2720717410U));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) (+((-(2720717425U)))));
            }
        } 
    } 
}
