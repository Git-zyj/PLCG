/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119505
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */signed char) (_Bool)0);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_9 [i_3] [(unsigned short)10] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) + (((long long int) (_Bool)1))));
                        var_17 *= ((/* implicit */_Bool) var_2);
                        var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [4U] [i_3]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (short)18815);
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_4] = ((/* implicit */_Bool) (short)32767);
                    }
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_20 += arr_11 [(short)17] [i_1] [i_2] [i_5] [i_5];
                            arr_19 [i_6] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5 + 1])))))));
                        }
                        var_21 ^= var_2;
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((unsigned int) ((unsigned char) (short)-28564))), (((/* implicit */unsigned int) var_9))));
}
