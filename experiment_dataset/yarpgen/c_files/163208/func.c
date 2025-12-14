/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163208
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))), (arr_1 [i_1 - 1])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((var_6) & (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((long long int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1888516045U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (2406451251U)))) : (((((/* implicit */_Bool) 2406451267U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_4]))) : (67108862LL))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned long long int) (~(max((2473549922U), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)6466)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17885))) : (2202437954799242142ULL)));
    var_13 |= ((/* implicit */short) var_6);
}
