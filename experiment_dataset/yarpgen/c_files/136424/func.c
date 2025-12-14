/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136424
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
    var_19 = var_12;
    var_20 &= ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)14836)) : (((/* implicit */int) (unsigned short)50696)))), (((/* implicit */int) var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = var_15;
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_3] [21]);
                                var_22 = ((/* implicit */int) arr_6 [i_0] [(signed char)16] [i_3 - 1]);
                                var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_18)) + (((/* implicit */int) arr_12 [i_1] [i_0] [i_1] [i_1] [i_3 - 2] [i_4 - 1])))));
                                arr_13 [i_0] [21] [i_2] [(signed char)13] [i_4] = ((/* implicit */int) (unsigned short)32770);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_17 [i_5] [(unsigned char)1] = ((arr_14 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1620668232)) ^ (var_13)));
                        var_25 += ((/* implicit */int) (!(arr_23 [i_7 + 2] [i_7] [i_7 - 3])));
                    }
                } 
            } 
        } 
        arr_28 [i_5] = (!(((/* implicit */_Bool) arr_20 [(short)2] [i_5])));
        arr_29 [i_5] [(unsigned char)1] = (~(((/* implicit */int) (!((_Bool)1)))));
        arr_30 [i_5] [i_5] = ((/* implicit */long long int) var_1);
    }
}
