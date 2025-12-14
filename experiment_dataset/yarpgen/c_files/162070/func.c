/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162070
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
    var_17 |= ((/* implicit */unsigned short) 622004450U);
    var_18 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = var_5;
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */int) var_10);
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)65531);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_20 = var_13;
        var_21 = var_2;
        var_22 = ((/* implicit */int) var_11);
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) var_1);
        var_24 = ((/* implicit */unsigned int) var_6);
        arr_15 [i_3] [i_3] = ((((-3334830923634453332LL) / (((/* implicit */long long int) 2U)))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_0)))));
    }
}
