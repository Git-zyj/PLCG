/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16796
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_16);
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 3])) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((_Bool) min((arr_5 [i_0] [i_0] [i_0] [i_2]), ((short)6195)))))));
                    var_19 = ((/* implicit */unsigned int) var_9);
                    var_20 = ((/* implicit */signed char) min(((-((-(((/* implicit */int) var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -9217033888542803487LL)))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)56))));
    var_22 = (-(((/* implicit */int) var_4)));
}
