/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156095
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */short) var_11);
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) min((-5323459550013389571LL), (((/* implicit */long long int) (((_Bool)0) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_10 [i_2] [i_1 + 1] [i_2] [i_2] [i_4])))) : (((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] [i_2] [4] &= ((/* implicit */signed char) (~(min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-14923)), (var_10)))), (-8)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */int) arr_16 [(unsigned short)12])) * (((/* implicit */int) arr_16 [(unsigned short)0]))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_17 [6U] [6U]))));
    }
}
