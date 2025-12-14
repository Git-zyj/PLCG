/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170388
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
    var_16 = (_Bool)1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) 3705638895148186158ULL);
                var_17 = ((/* implicit */unsigned long long int) 1955467721U);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */signed char) 1955467721U);
        var_19 = (_Bool)1;
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6] [i_2 + 2] [i_6] [i_5 - 2] [i_6 - 1] [i_3] = ((/* implicit */unsigned int) 12486173883861509810ULL);
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (_Bool)0))));
                                var_21 -= ((/* implicit */_Bool) 5960570189848041792ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (18446744073709551615ULL)));
                                var_24 = ((/* implicit */short) 1297909706U);
                                arr_28 [i_2 - 1] [i_3 - 1] [i_3] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)160);
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_29 [i_2 + 2] [i_3 + 2] [i_3] = ((/* implicit */signed char) 11249676302129023543ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 15; i_10 += 2) 
        {
            for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */short) (unsigned char)73);
                    arr_39 [i_9 - 2] [i_10 + 3] [i_9] [i_10 + 2] = ((/* implicit */long long int) (unsigned char)73);
                }
            } 
        } 
        arr_40 [i_9] = ((/* implicit */unsigned int) 18446744073709551600ULL);
        arr_41 [i_9] = ((/* implicit */long long int) 18446744073709551596ULL);
        arr_42 [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
