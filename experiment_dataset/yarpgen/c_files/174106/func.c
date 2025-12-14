/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174106
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
    var_18 &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_17))));
                            var_20 += ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) ((signed char) var_2))))));
                            arr_10 [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) ((_Bool) var_14))))) + (2147483647))) >> (((((/* implicit */int) ((signed char) 9223372036854775807LL))) + (24)))));
                            var_21 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_9)))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_17);
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */_Bool) ((int) ((long long int) ((int) var_6))));
            }
        } 
    } 
}
