/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156278
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]);
                                var_17 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_12 [i_1 + 1] [i_1 - 4] [i_1 + 1] [i_1] [i_4 + 1] [i_4 - 1])) * (((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1 - 4] [i_1])) + (((/* implicit */int) ((short) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2])))));
                    var_18 = ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_19 &= ((/* implicit */_Bool) var_6);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_27 [i_8] [i_6 - 3])))) ^ (((var_7) | (((/* implicit */unsigned long long int) arr_27 [i_5 - 1] [i_5 - 1]))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_22 [(_Bool)1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) arr_26 [i_6 + 1] [i_6] [i_5 + 1])));
                    arr_32 [i_6] [i_5 - 2] [i_7] = var_0;
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_8))));
    var_24 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 3 */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_26 = ((/* implicit */_Bool) arr_15 [i_10] [i_10]);
    }
    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 4) 
    {
        arr_38 [i_11] = ((_Bool) arr_36 [i_11 - 1] [i_11 + 2]);
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (short i_13 = 4; i_13 < 22; i_13 += 4) 
            {
                {
                    arr_44 [i_11] [i_12] [i_11] = ((((/* implicit */_Bool) 8126464)) || (((/* implicit */_Bool) var_2)));
                    var_27 &= ((/* implicit */unsigned short) ((((unsigned int) var_0)) % (((arr_43 [i_12] [i_12] [(unsigned short)6] [i_12]) >> (((/* implicit */int) var_14))))));
                }
            } 
        } 
        arr_45 [i_11] = ((/* implicit */_Bool) ((int) ((arr_41 [i_11 + 1] [i_11] [i_11 - 1]) - (arr_41 [i_11 + 2] [i_11 - 1] [i_11 - 1]))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_49 [i_14] = ((/* implicit */short) var_11);
        arr_50 [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_15)) - (var_9)));
        var_28 = ((/* implicit */unsigned short) var_0);
    }
}
