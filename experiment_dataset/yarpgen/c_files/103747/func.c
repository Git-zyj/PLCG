/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103747
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
    var_13 |= ((/* implicit */signed char) var_7);
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) 8441413183975289094LL);
                    var_15 = ((/* implicit */unsigned int) (signed char)-98);
                    var_16 = ((/* implicit */long long int) (unsigned short)14720);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (unsigned short)17);
                                var_18 = ((/* implicit */signed char) (unsigned short)65497);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) -175607418145882077LL);
    }
    for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */signed char) (short)9249);
        arr_18 [i_5 - 2] = ((/* implicit */unsigned int) (signed char)-26);
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        arr_26 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */long long int) 874088151);
                        var_20 = ((/* implicit */unsigned int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            var_22 = ((/* implicit */long long int) (unsigned short)65519);
            arr_30 [i_5] [i_9] = ((/* implicit */signed char) (unsigned short)14713);
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (_Bool)1);
                            arr_39 [i_12] = ((/* implicit */signed char) (_Bool)1);
                            var_24 = ((/* implicit */unsigned int) 6066112270753004772LL);
                        }
                    } 
                } 
            } 
            arr_40 [(unsigned char)13] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
}
