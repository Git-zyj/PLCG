/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16802
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
    var_18 -= ((/* implicit */unsigned char) var_7);
    var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) min((((int) arr_4 [(unsigned char)13])), (((/* implicit */int) (unsigned char)128))))), (max((((/* implicit */long long int) arr_6 [(unsigned char)3] [i_2 - 4])), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_2 + 1])))));
                    var_20 -= max((arr_6 [i_1 - 2] [i_2 - 2]), (arr_6 [i_1 - 4] [i_2 - 3]));
                    arr_8 [i_0] [i_0] [8U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (max((((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_6))), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
}
