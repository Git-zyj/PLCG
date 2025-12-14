/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178419
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = var_13;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [1LL] [i_0] [i_0] = max((((((/* implicit */_Bool) (unsigned short)53411)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_0] [i_0]))), (((-1147228270536743202LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))));
                                var_17 = ((/* implicit */long long int) var_6);
                                var_18 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [i_1 - 1] [(unsigned char)6] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))));
}
