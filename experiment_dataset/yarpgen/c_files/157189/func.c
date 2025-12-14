/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157189
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
    var_17 |= ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = arr_0 [i_0 + 1] [i_1];
                arr_7 [i_0] [i_1] = arr_3 [i_0] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            {
                arr_13 [i_3] [i_3] |= arr_11 [i_2];
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_10 [i_2]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_4] [i_4] |= ((/* implicit */int) arr_9 [i_4]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) arr_23 [i_4] [i_5] [2]);
                            var_20 |= arr_17 [i_7];
                            var_21 = ((/* implicit */unsigned short) arr_20 [i_4] [i_4] [i_4] [i_4]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_24 [8] [i_5]);
                var_23 = arr_11 [i_5];
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_8]);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_22 [i_5] [i_5] [i_5] [i_5]))));
                            arr_30 [i_4] [(unsigned short)2] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_4]);
                            arr_31 [(unsigned short)0] [(unsigned short)0] [i_8] [i_9] = ((/* implicit */int) arr_29 [i_4] [7] [i_5] [i_8] [i_8] [i_9]);
                            var_26 += arr_8 [i_4];
                        }
                    } 
                } 
            }
        } 
    } 
}
