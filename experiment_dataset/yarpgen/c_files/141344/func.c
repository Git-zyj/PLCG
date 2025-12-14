/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141344
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
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                            {
                                arr_14 [i_0] [(signed char)5] [i_3] [(signed char)6] [19] = ((/* implicit */signed char) var_9);
                                var_15 *= ((/* implicit */unsigned long long int) var_4);
                                arr_15 [i_1] [i_4] [i_2] [i_3] [(short)1] [i_3] [(signed char)8] = ((/* implicit */unsigned long long int) var_2);
                            }
                            arr_16 [i_0] = ((/* implicit */_Bool) -1601474121);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned short) 4294967295U);
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) var_11);
                var_17 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_18 = var_8;
}
