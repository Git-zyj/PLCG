/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138667
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_3] [i_4] [i_0] = ((/* implicit */short) max((max((3637133857U), (((/* implicit */unsigned int) 2071308511)))), (((/* implicit */unsigned int) (~(2071308511))))));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) (-(((long long int) 657833438U))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) 1033168636);
                    arr_14 [(short)8] [(short)8] [i_1] [(short)8] |= max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8575))))), (max((((/* implicit */unsigned int) 782794226)), (5U))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */long long int) var_17);
    var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8578))) / (675836473972920843ULL)))))) ? (var_15) : (var_15)));
    var_21 = ((/* implicit */short) (unsigned short)29417);
}
