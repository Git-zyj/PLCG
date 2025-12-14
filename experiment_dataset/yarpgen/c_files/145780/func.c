/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145780
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_12)))));
                    arr_9 [i_0] [i_1] [i_2] [(unsigned char)16] = ((/* implicit */unsigned long long int) var_11);
                    var_16 = ((/* implicit */unsigned int) ((long long int) (short)1164));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned short)16] [(unsigned short)16] [i_1] [i_1] [i_1] [(unsigned short)16] [20ULL] = ((_Bool) (-(((/* implicit */int) arr_3 [i_4 + 1] [i_0 - 1] [i_0 - 1]))));
                                var_17 = (((!(((/* implicit */_Bool) arr_2 [i_0 + 3])))) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (((long long int) arr_13 [i_1] [i_4 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_0);
}
