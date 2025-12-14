/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125234
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_1 [18] [i_0]);
                arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)240))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_11 [i_1] [i_1 - 2] [i_2] [i_1 - 1] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 2] [i_1 - 2]);
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)240))));
                    arr_13 [i_0] [(signed char)0] [(unsigned short)17] = ((/* implicit */unsigned int) arr_3 [4] [4]);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_16 [15] [i_0] [i_0] [i_3] = ((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2]);
                    arr_17 [i_0] [i_1] = ((/* implicit */long long int) (-(arr_2 [i_1 + 2] [i_1 - 4])));
                    arr_18 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32767))));
                    arr_19 [i_0] [i_1] = ((/* implicit */signed char) 138638758U);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)12193)))))));
    var_19 = ((/* implicit */signed char) (short)23305);
    var_20 = ((/* implicit */int) var_17);
}
