/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186733
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */int) arr_16 [i_1] [i_2] [i_2 - 1] [i_2]);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (arr_4 [i_1])));
                        }
                        arr_19 [i_2] [i_2] [i_3] [i_4] = arr_6 [i_1] [i_2] [i_2];
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = arr_6 [i_1] [i_2] [i_2];
                    }
                } 
            } 
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
            arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1] [i_1]);
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_6]);
            var_20 = ((/* implicit */int) arr_8 [i_1] [i_1] [i_6] [i_1]);
            arr_26 [i_6] [i_6] [i_1] = ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_6] [i_1] [i_6]);
            arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    arr_32 [i_8] [i_1] [i_8] |= arr_31 [i_8];
                    var_21 = ((/* implicit */int) arr_24 [i_7] [i_1]);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_25 [i_8]))));
                }
            } 
        } 
        var_23 *= ((/* implicit */unsigned short) arr_30 [i_1] [i_1] [i_1] [i_1]);
    }
    var_24 = ((/* implicit */unsigned short) var_5);
    var_25 = ((/* implicit */unsigned long long int) var_6);
    var_26 = ((/* implicit */unsigned long long int) var_11);
    var_27 = ((/* implicit */unsigned long long int) var_8);
}
