/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187484
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) 128U);
                arr_4 [i_0 + 1] = ((/* implicit */unsigned int) (unsigned char)148);
                var_21 = ((/* implicit */unsigned int) 6892445131773899696ULL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) 2161585667819873351LL);
                                var_23 = ((/* implicit */unsigned char) (_Bool)1);
                                var_24 = ((/* implicit */long long int) 4294967173U);
                            }
                        } 
                    } 
                    arr_12 [i_0 - 2] [i_1] [i_2] = ((/* implicit */long long int) (_Bool)1);
                    arr_13 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) (unsigned short)504);
                    var_25 ^= ((/* implicit */signed char) 3370441748U);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) (unsigned char)124);
                                var_28 = ((/* implicit */_Bool) (signed char)67);
                                arr_30 [i_5] [i_7] [i_7] [i_8] [i_9] [i_5] = ((/* implicit */short) (_Bool)1);
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) 18014398475927552LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                arr_35 [i_5] [i_6] [i_7] [i_10 - 2] [(short)10] = ((/* implicit */signed char) 1050470321316798865LL);
                                var_30 |= ((/* implicit */unsigned char) 34359214080LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
