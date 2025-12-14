/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101473
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16376U))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */int) max((((((/* implicit */_Bool) 1023U)) ? (4294967295U) : (((/* implicit */unsigned int) 8191)))), (((((/* implicit */_Bool) -8199)) ? (4294966267U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                    arr_10 [i_0] [(short)11] = ((/* implicit */unsigned int) 92203890);
                }
            } 
        } 
    } 
    var_22 = 16760832U;
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_21 [i_3] [(_Bool)1] [i_5] [(signed char)10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(1749162116109645842ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)125))))))), (((/* implicit */unsigned long long int) -8191))));
                    var_23 = ((/* implicit */unsigned short) var_15);
                    arr_22 [i_3] = (~(1023U));
                    var_24 = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
    } 
}
