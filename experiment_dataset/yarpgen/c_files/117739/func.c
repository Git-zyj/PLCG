/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117739
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
    var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) (unsigned char)236);
                                var_22 -= ((/* implicit */short) (~(arr_5 [i_2] [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (int i_6 = 4; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [8] [i_2] [i_0] [i_6] = ((/* implicit */short) arr_2 [i_0] [(short)17]);
                                var_23 -= ((/* implicit */long long int) arr_16 [i_6] [i_1] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_0] [i_0] [(_Bool)1])) >= ((~(((/* implicit */int) (unsigned char)128))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) var_16);
}
