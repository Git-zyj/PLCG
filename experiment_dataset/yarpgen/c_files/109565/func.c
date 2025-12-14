/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109565
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_2]);
                                var_16 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_10 [i_3])));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) var_0);
        arr_14 [i_1] |= arr_6 [(unsigned char)0];
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_17 [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_6]);
        var_19 = ((/* implicit */unsigned char) arr_0 [i_6]);
    }
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */unsigned short) var_1);
    var_22 = ((/* implicit */_Bool) var_5);
}
