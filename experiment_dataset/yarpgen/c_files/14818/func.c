/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14818
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) arr_3 [4]);
                    var_14 = ((/* implicit */int) arr_2 [3]);
                    arr_7 [i_0] [(_Bool)1] [(unsigned char)16] [i_0] = ((/* implicit */int) arr_4 [2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            {
                var_15 = arr_0 [i_3];
                arr_13 [i_3] [i_4] = ((/* implicit */long long int) arr_0 [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((unsigned int) 268435424LL));
                            var_17 = ((/* implicit */unsigned char) arr_16 [21] [(_Bool)1] [(short)11] [(short)11] [i_3] [i_4]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((unsigned long long int) var_2))));
                var_19 = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) var_8);
                            var_21 = ((/* implicit */signed char) var_5);
                            var_22 |= ((/* implicit */short) arr_4 [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
}
