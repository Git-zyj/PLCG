/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162489
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned short) (_Bool)1);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21557))) % (602716278U)));
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) var_12);
                    var_20 |= ((/* implicit */unsigned short) arr_4 [4ULL] [i_2 - 1]);
                    var_21 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
}
