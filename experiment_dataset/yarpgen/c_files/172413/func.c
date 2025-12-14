/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172413
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_4))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((-66107556618884785LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_5 [i_0] [i_1])) - (63))))) <= (((/* implicit */int) arr_13 [(signed char)4] [i_0] [i_2] [i_0] [14LL] [i_3] [i_4 + 2])))))));
                                arr_14 [i_0] [2LL] [i_1] [0LL] [i_4] = ((/* implicit */long long int) ((max((-66107556618884782LL), (((/* implicit */long long int) arr_13 [(unsigned short)11] [i_1] [i_4 + 3] [i_4] [(signed char)12] [i_4 - 1] [i_4])))) <= (((((arr_9 [i_1 - 1] [i_1] [i_4 + 1]) + (9223372036854775807LL))) << (((66107556618884781LL) - (66107556618884781LL)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_0] &= arr_12 [i_2] [i_1] [i_2] [i_0] [i_1 - 1];
                }
            } 
        } 
    } 
}
